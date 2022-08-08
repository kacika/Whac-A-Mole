#ifndef SCORE_H
#define SCORE_H

#include <QDialog>
#include "mouse.h"
namespace Ui {
class score;
}

class score : public QDialog
{
    Q_OBJECT

public:
    explicit score(QWidget *parent = 0);
    ~score();
    int lastsco;
    // static
    int sco;
    int level;
    //int highSco;
    void setscore();
    void showRanking();
    //mouse m;
private slots:


 void on_pushButton_clicked();

 void on_pushButton_2_clicked();

 void on_pushButton_3_clicked();


private:
    Ui::score *ui;

};

#endif // SCORE_H
