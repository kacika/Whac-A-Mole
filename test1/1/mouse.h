#ifndef _MOUSE_H_
#define _MOUSE_H_

#include <QWidget>
#include <QFrame>
#include "score.h"
#include "ui_mouse.h"
#define GAMETIME 20
#define NUMOFPLAYBTNS  9

class Mouse:public QWidget,public Ui::mouse
{
	Q_OBJECT
	public:
		Mouse(QWidget* parent=0);
                int 		scores;
	protected:
		void	timerEvent(QTimerEvent* event);
	private:
              //  score sc;
		//用于保存游戏剩余时间；
		int 	currTime;	
		//用于保存面板定时器ID
		int	timePadTimerId;
		
		//保存游戏时间间隔定时器ID
		int	playTimerId;
		//游戏时间ID
		int	gameTimerId;
		//保存面板中所有的按钮
		QList<QAbstractButton*>	buttons;

		QPushButton* 	backupBtn;
		QPushButton* 	currBtn;
		QIcon*		icon;
                QIcon*		iconD;
		QIcon*		iconE;
		int 		level;

                int		highScore;
		int 		missed;
		int		flag;
		int 		error;
		
		//在游戏开始之前以及游戏结束之后设置游戏面板中的按钮为disable;
		void	disBtns();
		//在游戏开始之后以及游戏结束之前设置游戏面板中的按钮为able;
		void	enableBtns();
		void	over();	
		
	private	slots:

                void	gameStart();
                void  gamePause();
		//改变图标所在的控件
		void 	iconChanged();	
		//设置分数

		void	setScore(QAbstractButton*);
                void  mouseRelease(QAbstractButton*);

		void	levelChanged(int index);
                void Ranking();
};

#endif
