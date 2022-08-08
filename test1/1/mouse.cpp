#include <QtGui>
#include "mouse.h"
#include "score.h"

typedef struct BarAmount {
char id[9];
char name[10];
int score;
}pppp;

int fflag = 0; // 游戏暂停标志

Mouse::Mouse(QWidget* parent):QWidget(parent)
{
	setupUi(this);
        // 初始化游戏界面
	currTime=GAMETIME;
	timeLbl->setText(tr("Time :%1").arg(currTime));

	//初始化定时器
	timePadTimerId=-1;
	gameTimerId=-1;
	//构建button list
	level=1;
	flag=0;
        scores=0;
        highScore=0;
	missed=5;
	error=0;
	missScoreLbl->setText(tr("Chance: %1").arg(missed));

        // 取到所有难度一起比较下的最高分
        for(int i=1; i<=3; i++) // 读出三个排行榜第一名得分
        {
            int tsco = 0;
            QString s1=QString::fromUtf8("/root/test") + QString::number(i) + QString::fromUtf8(".bat");
            QFile file(s1);
            file.open(QIODevice::ReadOnly);
            QByteArray ba;
            ba=file.readAll();
            pppp *per=(pppp*)ba.data();
            if((ba.size()/sizeof(pppp)) != 0)
            {
                tsco = per->score;
            }
            file.close();
            if(tsco>highScore)
                highScore = tsco;
        }
        // 显示最高分
        highScoreLbl->setText(tr("HighScore:%1").arg(highScore));
	buttons=buttonGroup->buttons();
	//设置所有的按键disable
	disBtns();
	backupBtn=playBtn4;
	currBtn=backupBtn;	
        icon=new QIcon("./images/mice1.png");
        iconD=new QIcon("./images/mice2.png");
        iconE=new QIcon("./images/zhadan.jpg");
	connect(startBtn,SIGNAL(clicked()),this,SLOT(gameStart()));
	connect(buttonGroup,SIGNAL(buttonClicked(QAbstractButton*)),this,SLOT(setScore(QAbstractButton*)));
	connect(comboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(levelChanged(int)));
        connect(buttonGroup,SIGNAL(buttonClicked(QAbstractButton*)),
                this,SLOT(mouseRelease(QAbstractButton*)));
        connect(PauseBtn,SIGNAL(clicked()),this,SLOT(gamePause()));
        connect(RankBtn,SIGNAL(clicked()),this,SLOT(Ranking()));
        this->setCursor(QCursor(QPixmap("./images/DD.png"))); // 设置光标显示为锤子
}

void Mouse::mouseRelease(QAbstractButton*)
{
    this->setCursor(QCursor(QPixmap("./images/D.png")));
}

// 倒计时
void Mouse::timerEvent(QTimerEvent* event)
{
    if(fflag != -1) // 暂停按钮被点击后fflag被置为-1
    {
	if(event->timerId()==gameTimerId)
	{
		over();
	}
	else if(timePadTimerId==event->timerId())
	{
		if(currTime>0)
		{
			//更新时间面板显示的内容
			currTime--;
			timeLbl->setText(tr("Time :%1").arg(currTime));
		}
	}
	else if(playTimerId==event->timerId())
	{
		iconChanged();
        }
    }
}

// 游戏停止
void Mouse::over()
{
	killTimer(timePadTimerId);
	killTimer(gameTimerId);
	killTimer(playTimerId);

	//重置时间面板及游戏时间
	currTime=GAMETIME;

	//游戏结束后设置所有的游戏按键为disabled
	disBtns();
	currBtn=backupBtn;	

	timeLbl->setText(tr("Time :%1").arg(currTime));
        if(error==3) // 打中炸弹
	{
        QMessageBox::information(this,tr("Game Over"),tr("You hit bomb!Your score is %1").arg(scores),QMessageBox::Ok);
	}
        else // 倒计时结束或游戏过程五次未打中出现的地鼠
	{
        QMessageBox::information(this,tr("Game Over"),tr("Game over! Your score is %1").arg(scores),QMessageBox::Ok);
	}

        // 新建并显示子窗口
         score sc;
         sc.sco=scores;// 将当前玩家的得分传递给子窗口
         sc.level = level;// 明确要显示哪个难度的排行榜
        //score::sco=scores;
         sc.setscore();

         if(sc.exec()==QDialog::Accepted)
         {
             this->close();
         }

         // 若该玩家获得分数比最当前高分高就更新最高分
         if(scores > highScore)
         {
             highScore = scores;
         }

         // 回到主窗口后重新初始化主窗口各值
         scores=0;
         error=0;
         flag=0;
          missed=5;

         highScoreLbl->setText(tr("HighScore:%1").arg(highScore));
         scoreLbl->setText(tr("Score: %1").arg(scores));
         missScoreLbl->setText(tr("Chance: %1").arg(missed));
}

// 点击开始按钮后初始化
void Mouse::gameStart()
{
        fflag = 1; // 游戏开始后fflag被置为1
	//游戏开始后设置所有的按键为enable
	enableBtns();
	//启动游戏定时器
	gameTimerId=startTimer(GAMETIME*1000);
	timePadTimerId=startTimer(1000);

        playTimerId=startTimer(1000/level);

}

void Mouse::disBtns()
{
	int i;
	for(i=0;i<NUMOFPLAYBTNS;i++)
	{
		buttons[i]->setEnabled(false);
	}
        comboBox->setEnabled(true);
	startBtn->setEnabled(true);
        RankBtn->setEnabled(true);
}

void Mouse::enableBtns()
{
	int i;
	for(i=0;i<NUMOFPLAYBTNS;i++)
	{
		buttons[i]->setEnabled(true);
	}
	comboBox->setEnabled(false);
	startBtn->setEnabled(false);
        RankBtn->setEnabled(false);
}

// 显示允许失误（未打中地鼠）的次数，随机选择洞穴显示炸弹或者洞穴出现地鼠
void Mouse::iconChanged()
{

    this->setCursor(QCursor(QPixmap("./images/DD.png")));
    if(fflag != -1)
    {
        if(flag&&(error!=3))
        {
                if(currBtn!=NULL)
                {
                missed--;
                missScoreLbl->setText(tr("Chance: %1").arg(missed));
                if(missed==0) // 游戏过程中有五次未打中地鼠
                {
                        over();
                }
                }
        }
        else if(!flag)
        {
                if(currBtn!=backupBtn)
                {
                missed--;
                missScoreLbl->setText(tr("Chance: %1").arg(missed));
                }
        }

        //随机选择洞穴显示炸弹或者洞穴出现地鼠
        int i=qrand()%9;

        currBtn=(QPushButton*)buttons[i];

        QIcon icons;
        backupBtn->setIcon(icons);
        error=qrand()%4;
        {
                if(error==3)
                {
                        currBtn->setIcon(*iconE);


                }
                else
                        currBtn->setIcon(*icon);
        }
        backupBtn=currBtn;
        flag=1;
    }
}

// 游戏过程中打中地鼠或者炸弹图标和分数的变化
void Mouse::setScore(QAbstractButton* btn)
{
    if(fflag!=-1)  // 暂停按钮被点击后fflag被置为-1
    {
        if(currBtn==(QPushButton*)btn)
        {

        if(error!=3)  // 打中地鼠
        {
                scores++;
                scoreLbl->setText(tr("Score: %1").arg(scores));

                //打中后隐藏图标
                //QIcon icon;
                //打中后改变图标
                currBtn->setIcon(*iconD);
                currBtn=NULL;
        }
        else // 打中炸弹
                over();
        }
    }
}

// 游戏难度
void Mouse::levelChanged(int index)
{
	if(index==0)
		level=1;
	else if(index==1)
		level=2;
	else 
		level=3;
}

// 游戏暂停
void Mouse::gamePause()
{
    fflag = -1; //
    int i;
    // 使九个按键无法点击
    for(i=0;i<NUMOFPLAYBTNS;i++)
    {
            buttons[i]->setEnabled(false);
    }
    comboBox->setEnabled(true); // 暂停游戏时可以选择游戏难度
    startBtn->setEnabled(true); // 暂停游戏时开始按键可以点击
}

// 显示排行榜
void Mouse::Ranking()
{
    score ss;
    ss.sco = 0;
    ss.level = level;  // 明确要显示哪个难度的排行榜
    ss.setscore();

    if(ss.exec()==QDialog::Accepted) // 执行排行榜窗口
    {
        this->close();
    }
// 回到主窗口后重新初始化主窗口各值
    scores=0;
    error=0;
    flag=0;
    missed=5;
    highScoreLbl->setText(tr("HighScore:%1").arg(highScore));
    scoreLbl->setText(tr("Score: %1").arg(scores));
    missScoreLbl->setText(tr("Chance: %1").arg(missed));
}
