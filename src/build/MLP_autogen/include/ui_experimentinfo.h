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
        ExperimentInfo->resize(391, 276);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ExperimentInfo->sizePolicy().hasHeightForWidth());
        ExperimentInfo->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(27, 28, 31, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        ExperimentInfo->setPalette(palette);
        ok = new QPushButton(ExperimentInfo);
        ok->setObjectName("ok");
        ok->setGeometry(QRect(150, 240, 83, 29));
        QPalette palette1;
        QBrush brush1(QColor(42, 134, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        QBrush brush4(QColor(190, 190, 190, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        ok->setPalette(palette1);
        ok->setContextMenuPolicy(Qt::DefaultContextMenu);
        ok->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 134, 255);\n"
"color: rgb(255, 255, 255);"));
        ok->setFlat(false);
        info = new QPlainTextEdit(ExperimentInfo);
        info->setObjectName("info");
        info->setGeometry(QRect(10, 20, 371, 211));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        QBrush brush6(QColor(50, 51, 54, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        info->setPalette(palette2);

        retranslateUi(ExperimentInfo);

        ok->setDefault(false);


        QMetaObject::connectSlotsByName(ExperimentInfo);
    } // setupUi

    void retranslateUi(QDialog *ExperimentInfo)
    {
        ExperimentInfo->setWindowTitle(QCoreApplication::translate("ExperimentInfo", "\320\255\320\272\321\201\320\277\320\265\321\200\320\270\320\274\320\265\320\275\321\202", nullptr));
        ok->setText(QCoreApplication::translate("ExperimentInfo", " \320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExperimentInfo: public Ui_ExperimentInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPERIMENTINFO_H
