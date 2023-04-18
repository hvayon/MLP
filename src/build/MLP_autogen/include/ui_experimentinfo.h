/********************************************************************************
** Form generated from reading UI file 'experimentinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPERIMENTINFO_H
#define UI_EXPERIMENTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ExperimentInfo
{
public:
    QPushButton *ok;
    QPlainTextEdit *info;

    void setupUi(QDialog *ExperimentInfo)
    {
        if (ExperimentInfo->objectName().isEmpty())
            ExperimentInfo->setObjectName("ExperimentInfo");
        ExperimentInfo->resize(400, 300);
        ok = new QPushButton(ExperimentInfo);
        ok->setObjectName("ok");
        ok->setGeometry(QRect(150, 250, 83, 29));
        info = new QPlainTextEdit(ExperimentInfo);
        info->setObjectName("info");
        info->setGeometry(QRect(70, 20, 271, 211));

        retranslateUi(ExperimentInfo);

        QMetaObject::connectSlotsByName(ExperimentInfo);
    } // setupUi

    void retranslateUi(QDialog *ExperimentInfo)
    {
        ExperimentInfo->setWindowTitle(QCoreApplication::translate("ExperimentInfo", "Dialog", nullptr));
        ok->setText(QCoreApplication::translate("ExperimentInfo", "ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExperimentInfo: public Ui_ExperimentInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPERIMENTINFO_H
