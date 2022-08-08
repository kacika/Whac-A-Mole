#include "score.h"
#include "ui_score.h"
#include "mouse.h"
#include <QDebug>
#include <QList>
#include <QTableWidgetItem>
#include <QFile>
#include <QByteArray>
#include <QMessageBox>
#include <QApplication>
typedef struct BarAmount {
char id[9];
char name[10];
int score;
}pppp;

int lastsco;


score::score(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::score)
{
    ui->setupUi(this);
}

void score::setscore()
{
    // 该排行榜最低分置零
    lastsco = 0;
    showRanking(); //初始化排行榜并显示

    // 打开相应难度的排行榜
    QString s1=QString::fromUtf8("your score : ")+QString::number(sco);
    ui->label_3->setText(s1);


      if((sco !=0) && (sco >= lastsco)) // 如果当前玩家得分不是0且大于等于该排行榜最低分
      {
          ui->label->setText(QString::fromUtf8("恭喜进入前三,是否上传成绩 "));
          ui->pushButton_3->setEnabled(true);
          ui->lineEdit->setEnabled(true);
          ui->pushButton_3->setText(QString::fromUtf8("确认上传 "));

      }
      else // 该玩家不能上传分数到排行榜
      {
        ui->label->setText(QString::fromUtf8("抱歉,未进入前三,无法上传成绩 "));
        ui->pushButton_3->setEnabled(false);
        ui->lineEdit->setEnabled(false);
       }
      ui->pushButton->setText("restart");
      ui->pushButton_2->setText("quit");
}

score::~score()
{
    delete ui;
}

void score::on_pushButton_clicked()
{

   this->close(); // 关闭当前窗口
}

// 是否真正结束游戏
void score::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton rb = QMessageBox::question(NULL, "Show Qt", "Do you want to quit ?", QMessageBox::Yes | QMessageBox::No |QMessageBox::Cancel, QMessageBox::Yes);
         if(rb == QMessageBox::Yes)
         {

                    this->accept();
         }
}

// 比较两个玩家的分数
bool sort(const pppp &p1,const pppp &p2)
{
    return p1.score>p2.score;
}

// 上传玩家的昵称和分数
void score::on_pushButton_3_clicked()
{
    int rowcount=ui->tableWidget->rowCount();
    pppp user;
    QString uid;
    QString uname;
    QList<pppp> list;
    int i;
    // 将排行榜原有玩家和当前玩家放在一起按照分数从高到低排序
    for (i=0;i<rowcount;i++)
    {

        uid = ui->tableWidget->item(i,0)->text();
        uname = ui->tableWidget->item(i,1)->text();
        strcpy(user.id,uid.toStdString().data());//转字符数组
        strcpy(user.name,uname.toStdString().data());
        user.score=ui->tableWidget->item(i,2)->text().toInt();
        list.append(user);
    }

    uid = QString::number(rowcount+1,10);
    uname = ui->lineEdit->text();

    strcpy(user.id,uid.toStdString().data());//转字符数组
    strcpy(user.name,uname.toStdString().data());
    user.score=sco;
    list.append(user);
    rowcount++;
    qSort(list.begin(), list.end(),sort);


 ui->tableWidget->insertRow(0);
 ui->tableWidget->setItem(0, 0, new QTableWidgetItem(QString(" ")));
 ui->tableWidget->setItem(0, 1, new QTableWidgetItem(QString(" ")));
 ui->tableWidget->setItem(0, 2, new QTableWidgetItem(QString(" ")));

 // 当前玩家上传完自己分数后显示新的排行榜
 QString stuid;
 int j=1;

        for (i=0;i<rowcount;i++)

        {
            stuid = QString::number(j,10);
            if(i==2)
            {
                lastsco=list.at(i).score;
            }
            QString s1=QString::fromUtf8("./images/rank") + QString::number(i+1) + QString::fromUtf8(".png");
            QLabel *l1 = new QLabel();     //创建lable
            l1->setPixmap(QPixmap(s1));    //加载图片
            l1->setAlignment(Qt::AlignHCenter);      //设置居中
            ui->tableWidget->setCellWidget(i,0,l1);     //显示

            ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString(list.at(i).name)));
            ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString::number(list.at(i).score)));
           j++;

        }

    ui->tableWidget->removeRow(3);
    // 将当前更新过的排行榜存入文件
    QString s1=QString::fromUtf8("/root/test") + QString::number(level) + QString::fromUtf8(".bat");
    QFile file(s1);
    file.open(QIODevice::WriteOnly);
    rowcount=ui->tableWidget->rowCount();
    QByteArray ba;
    ba.resize(rowcount*sizeof(pppp)); //设置容量
    QList<pppp> llist;
    for (i=0;i<rowcount;i++)
    {
        uid = ui->tableWidget->item(i,0)->text();
        uname = ui->tableWidget->item(i,1)->text();
        strcpy(user.id,uid.toStdString().data());//转字符数组
        strcpy(user.name,uname.toStdString().data());
        user.score=ui->tableWidget->item(i,2)->text().toInt();
        llist<<user;
    }
    for(i=0;i<rowcount;i++)
    {
        //qDebug()<<llist.at(i).id<<llist.at(i).name<<llist.at(i).score;
        memcpy(ba.data()+i*sizeof(pppp),&llist.at(i),sizeof(pppp));
    }
    file.write(ba);
    file.close();
    // 不能再重复上传同一个玩家的分数
    ui->lineEdit->setEnabled(false);
   ui->pushButton_3->setEnabled(false);
}


// 初始化排行榜
void score::showRanking()
{
    // level决定调出哪个难度的排行榜并显示出来
    QString s1=QString::fromUtf8("/root/test") + QString::number(level) + QString::fromUtf8(".bat");
    QFile file(s1);

    file.open(QIODevice::ReadOnly);
    QByteArray ba;
    ba=file.readAll();
    int i;
    pppp *per=(pppp*)ba.data();
    if(level == 1)
    {
        ui->scorce->setText(QString::fromUtf8("简单难度下的排行榜"));
    }
    else if(level == 2)
    {
        ui->scorce->setText(QString::fromUtf8("普通难度下的排行榜"));
    }
    else if(level == 3)
    {
        ui->scorce->setText(QString::fromUtf8("困难难度下的排行榜"));
    }
    ui->tableWidget->setColumnCount(3);
    QStringList headers;
    headers << "ranking" << "name" << "score";
    ui->tableWidget->setHorizontalHeaderLabels(headers);
     // 读入已存的排行榜(读文件)
    for (i=0;i<ba.size()/sizeof(pppp);i++) //meiyouhuibaocuo
    {

        ui->tableWidget->insertRow(0);
        ui->tableWidget->setItem(0, 0, new QTableWidgetItem(QString(" ")));
        ui->tableWidget->setItem(0, 1, new QTableWidgetItem(QString(" ")));
        ui->tableWidget->setItem(0, 2, new QTableWidgetItem(QString(" ")));


     }

     QString stuid;
     QString stuname;
     for (i=0;i<ba.size()/sizeof(pppp);i++){


        stuid=per->id;
        stuname=per->name;
        if(i==2)
        {
            lastsco=per->score;// 更新最低分
        }
        QString s1=QString::fromUtf8("./images/rank") + QString::number(i+1) + QString::fromUtf8(".png");
        QLabel *l1 = new QLabel();     //创建lable
        l1->setPixmap(QPixmap(s1));    //加载图片
        l1->setAlignment(Qt::AlignHCenter);      //设置居中
        ui->tableWidget->setCellWidget(i,0,l1);     //显示


        ui->tableWidget->item(i,1)->setText(stuname);
        ui->tableWidget->item(i,2)->setText(QString::number(per->score));
        per++;

    }
    ui->tableWidget->removeRow(3);
    file.close();
}

