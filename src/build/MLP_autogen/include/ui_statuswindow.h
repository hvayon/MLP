/********************************************************************************
** Form generated from reading UI file 'statuswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATUSWINDOW_H
#define UI_STATUSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Statuswindow
{
public:
    QPushButton *terminateProcess;
    QProgressBar *progressBar;
    QPlainTextEdit *trainStatusInfo;
    QPushButton *finishButton;

    void setupUi(QDialog *Statuswindow)
    {
        if (Statuswindow->objectName().isEmpty())
            Statuswindow->setObjectName("Statuswindow");
        Statuswindow->resize(668, 550);
        terminateProcess = new QPushButton(Statuswindow);
        terminateProcess->setObjectName("terminateProcess");
        terminateProcess->setGeometry(QRect(40, 420, 261, 29));
        progressBar = new QProgressBar(Statuswindow);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(40, 380, 581, 23));
        progressBar->setValue(0);
        trainStatusInfo = new QPlainTextEdit(Statuswindow);
        trainStatusInfo->setObjectName("trainStatusInfo");
        trainStatusInfo->setGeometry(QRect(40, 10, 551, 361));
        finishButton = new QPushButton(Statuswindow);
        finishButton->setObjectName("finishButton");
        finishButton->setGeometry(QRect(350, 420, 241, 29));
        finishButton->setCheckable(false);

        retranslateUi(Statuswindow);

        QMetaObject::connectSlotsByName(Statuswindow);
    } // setupUi

    void retranslateUi(QDialog *Statuswindow)
    {
        Statuswindow->setWindowTitle(QCoreApplication::translate("Statuswindow", "Dialog", nullptr));
        terminateProcess->setText(QCoreApplication::translate("Statuswindow", "Terminate training process", nullptr));
        trainStatusInfo->setPlainText(QString());
        finishButton->setText(QCoreApplication::translate("Statuswindow", "Finish", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Statuswindow: public Ui_Statuswindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATUSWINDOW_H
