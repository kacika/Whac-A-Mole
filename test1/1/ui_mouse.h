/********************************************************************************
** Form generated from reading UI file 'mouse.ui'
**
** Created: Sun Jun 27 17:11:50 2021
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOUSE_H
#define UI_MOUSE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mouse
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *playBtn3;
    QPushButton *playBtn4;
    QPushButton *playBtn6;
    QPushButton *playBtn7;
    QPushButton *playBtn0;
    QPushButton *playBtn1;
    QPushButton *playBtn8;
    QPushButton *playBtn5;
    QPushButton *playBtn2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QLabel *timeLbl;
    QLabel *scoreLbl;
    QPushButton *startBtn;
    QPushButton *PauseBtn;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *highScoreLbl;
    QLabel *missScoreLbl;
    QPushButton *RankBtn;
    QButtonGroup *buttonGroup;

    void setupUi(QWidget *mouse)
    {
        if (mouse->objectName().isEmpty())
            mouse->setObjectName(QString::fromUtf8("mouse"));
        mouse->resize(716, 514);
        layoutWidget = new QWidget(mouse);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 100, 451, 401));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        playBtn3 = new QPushButton(layoutWidget);
        buttonGroup = new QButtonGroup(mouse);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(playBtn3);
        playBtn3->setObjectName(QString::fromUtf8("playBtn3"));
        playBtn3->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(playBtn3->sizePolicy().hasHeightForWidth());
        playBtn3->setSizePolicy(sizePolicy);
        playBtn3->setIconSize(QSize(128, 128));

        gridLayout->addWidget(playBtn3, 1, 0, 1, 1);

        playBtn4 = new QPushButton(layoutWidget);
        buttonGroup->addButton(playBtn4);
        playBtn4->setObjectName(QString::fromUtf8("playBtn4"));
        playBtn4->setEnabled(true);
        sizePolicy.setHeightForWidth(playBtn4->sizePolicy().hasHeightForWidth());
        playBtn4->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/rabbit.gif"), QSize(), QIcon::Normal, QIcon::Off);
        playBtn4->setIcon(icon);
        playBtn4->setIconSize(QSize(128, 128));

        gridLayout->addWidget(playBtn4, 1, 1, 1, 1);

        playBtn6 = new QPushButton(layoutWidget);
        buttonGroup->addButton(playBtn6);
        playBtn6->setObjectName(QString::fromUtf8("playBtn6"));
        playBtn6->setEnabled(true);
        sizePolicy.setHeightForWidth(playBtn6->sizePolicy().hasHeightForWidth());
        playBtn6->setSizePolicy(sizePolicy);
        playBtn6->setIconSize(QSize(128, 128));

        gridLayout->addWidget(playBtn6, 2, 0, 1, 1);

        playBtn7 = new QPushButton(layoutWidget);
        buttonGroup->addButton(playBtn7);
        playBtn7->setObjectName(QString::fromUtf8("playBtn7"));
        playBtn7->setEnabled(true);
        sizePolicy.setHeightForWidth(playBtn7->sizePolicy().hasHeightForWidth());
        playBtn7->setSizePolicy(sizePolicy);
        playBtn7->setIconSize(QSize(128, 128));

        gridLayout->addWidget(playBtn7, 2, 1, 1, 1);

        playBtn0 = new QPushButton(layoutWidget);
        buttonGroup->addButton(playBtn0);
        playBtn0->setObjectName(QString::fromUtf8("playBtn0"));
        playBtn0->setEnabled(true);
        sizePolicy.setHeightForWidth(playBtn0->sizePolicy().hasHeightForWidth());
        playBtn0->setSizePolicy(sizePolicy);
        playBtn0->setIconSize(QSize(128, 128));

        gridLayout->addWidget(playBtn0, 0, 0, 1, 1);

        playBtn1 = new QPushButton(layoutWidget);
        buttonGroup->addButton(playBtn1);
        playBtn1->setObjectName(QString::fromUtf8("playBtn1"));
        playBtn1->setEnabled(true);
        sizePolicy.setHeightForWidth(playBtn1->sizePolicy().hasHeightForWidth());
        playBtn1->setSizePolicy(sizePolicy);
        playBtn1->setIconSize(QSize(128, 128));

        gridLayout->addWidget(playBtn1, 0, 1, 1, 1);

        playBtn8 = new QPushButton(layoutWidget);
        buttonGroup->addButton(playBtn8);
        playBtn8->setObjectName(QString::fromUtf8("playBtn8"));
        playBtn8->setEnabled(true);
        sizePolicy.setHeightForWidth(playBtn8->sizePolicy().hasHeightForWidth());
        playBtn8->setSizePolicy(sizePolicy);
        playBtn8->setIconSize(QSize(128, 128));

        gridLayout->addWidget(playBtn8, 2, 2, 1, 1);

        playBtn5 = new QPushButton(layoutWidget);
        buttonGroup->addButton(playBtn5);
        playBtn5->setObjectName(QString::fromUtf8("playBtn5"));
        playBtn5->setEnabled(true);
        sizePolicy.setHeightForWidth(playBtn5->sizePolicy().hasHeightForWidth());
        playBtn5->setSizePolicy(sizePolicy);
        playBtn5->setIconSize(QSize(128, 128));

        gridLayout->addWidget(playBtn5, 1, 2, 1, 1);

        playBtn2 = new QPushButton(layoutWidget);
        buttonGroup->addButton(playBtn2);
        playBtn2->setObjectName(QString::fromUtf8("playBtn2"));
        playBtn2->setEnabled(true);
        sizePolicy.setHeightForWidth(playBtn2->sizePolicy().hasHeightForWidth());
        playBtn2->setSizePolicy(sizePolicy);
        playBtn2->setIconSize(QSize(128, 128));

        gridLayout->addWidget(playBtn2, 0, 2, 1, 1);

        layoutWidget1 = new QWidget(mouse);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(60, 50, 531, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(layoutWidget1);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QFont font;
        font.setPointSize(16);
        comboBox->setFont(font);

        horizontalLayout->addWidget(comboBox);

        timeLbl = new QLabel(layoutWidget1);
        timeLbl->setObjectName(QString::fromUtf8("timeLbl"));
        timeLbl->setEnabled(true);
        QFont font1;
        font1.setPointSize(14);
        timeLbl->setFont(font1);
        timeLbl->setFrameShape(QFrame::WinPanel);

        horizontalLayout->addWidget(timeLbl);

        scoreLbl = new QLabel(layoutWidget1);
        scoreLbl->setObjectName(QString::fromUtf8("scoreLbl"));
        scoreLbl->setEnabled(true);
        scoreLbl->setFont(font1);
        scoreLbl->setFrameShape(QFrame::WinPanel);

        horizontalLayout->addWidget(scoreLbl);

        startBtn = new QPushButton(layoutWidget1);
        startBtn->setObjectName(QString::fromUtf8("startBtn"));
        startBtn->setFont(font);

        horizontalLayout->addWidget(startBtn);

        PauseBtn = new QPushButton(layoutWidget1);
        PauseBtn->setObjectName(QString::fromUtf8("PauseBtn"));
        PauseBtn->setFont(font);

        horizontalLayout->addWidget(PauseBtn);

        layoutWidget2 = new QWidget(mouse);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(160, 10, 327, 37));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        highScoreLbl = new QLabel(layoutWidget2);
        highScoreLbl->setObjectName(QString::fromUtf8("highScoreLbl"));
        highScoreLbl->setFont(font1);
        highScoreLbl->setFrameShape(QFrame::WinPanel);

        horizontalLayout_2->addWidget(highScoreLbl);

        missScoreLbl = new QLabel(layoutWidget2);
        missScoreLbl->setObjectName(QString::fromUtf8("missScoreLbl"));
        missScoreLbl->setFont(font1);
        missScoreLbl->setFrameShape(QFrame::WinPanel);

        horizontalLayout_2->addWidget(missScoreLbl);

        RankBtn = new QPushButton(layoutWidget2);
        RankBtn->setObjectName(QString::fromUtf8("RankBtn"));
        RankBtn->setFont(font);

        horizontalLayout_2->addWidget(RankBtn);


        retranslateUi(mouse);

        QMetaObject::connectSlotsByName(mouse);
    } // setupUi

    void retranslateUi(QWidget *mouse)
    {
        mouse->setWindowTitle(QApplication::translate("mouse", "Game", 0, QApplication::UnicodeUTF8));
        playBtn3->setText(QString());
        playBtn4->setText(QString());
        playBtn6->setText(QString());
        playBtn7->setText(QString());
        playBtn0->setText(QString());
        playBtn1->setText(QString());
        playBtn8->setText(QString());
        playBtn5->setText(QString());
        playBtn2->setText(QString());
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("mouse", "Easy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mouse", "Normal", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mouse", "Hard", 0, QApplication::UnicodeUTF8)
        );
        timeLbl->setText(QApplication::translate("mouse", "Time :30", 0, QApplication::UnicodeUTF8));
        scoreLbl->setText(QApplication::translate("mouse", "Score : 0", 0, QApplication::UnicodeUTF8));
        startBtn->setText(QApplication::translate("mouse", "Start", 0, QApplication::UnicodeUTF8));
        PauseBtn->setText(QApplication::translate("mouse", "Pause", 0, QApplication::UnicodeUTF8));
        highScoreLbl->setText(QApplication::translate("mouse", "HighScore: 0", 0, QApplication::UnicodeUTF8));
        missScoreLbl->setText(QApplication::translate("mouse", "Missed: 0", 0, QApplication::UnicodeUTF8));
        RankBtn->setText(QApplication::translate("mouse", "Rank", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mouse: public Ui_mouse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOUSE_H
