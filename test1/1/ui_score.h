/********************************************************************************
** Form generated from reading UI file 'score.ui'
**
** Created: Sun Jun 27 22:20:31 2021
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCORE_H
#define UI_SCORE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_score
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QLabel *scorce;
    QLabel *label_3;
    QTableWidget *tableWidget;
    QLabel *label;

    void setupUi(QDialog *score)
    {
        if (score->objectName().isEmpty())
            score->setObjectName(QString::fromUtf8("score"));
        score->resize(648, 283);
        pushButton = new QPushButton(score);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 240, 98, 27));
        pushButton_2 = new QPushButton(score);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 240, 98, 27));
        pushButton_3 = new QPushButton(score);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(350, 190, 98, 27));
        lineEdit = new QLineEdit(score);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(350, 150, 113, 27));
        scorce = new QLabel(score);
        scorce->setObjectName(QString::fromUtf8("scorce"));
        scorce->setGeometry(QRect(10, 10, 161, 17));
        label_3 = new QLabel(score);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(360, 70, 111, 16));
        tableWidget = new QTableWidget(score);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 30, 321, 192));
        label = new QLabel(score);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 100, 211, 17));

        retranslateUi(score);

        QMetaObject::connectSlotsByName(score);
    } // setupUi

    void retranslateUi(QDialog *score)
    {
        score->setWindowTitle(QApplication::translate("score", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("score", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("score", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("score", "PushButton", 0, QApplication::UnicodeUTF8));
        scorce->setText(QApplication::translate("score", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("score", "TextLabel", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("score", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class score: public Ui_score {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCORE_H
