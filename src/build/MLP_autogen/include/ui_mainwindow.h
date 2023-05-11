/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include <paint.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QPushButton *modelLoader;
    QGroupBox *groupBox;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QSlider *hiddenLayersAmount;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QLabel *label_8;
    QSpinBox *layerSize_1;
    QSpinBox *layerSize_2;
    QSpinBox *layerSize_3;
    QLabel *label_11;
    QSpinBox *layerSize_4;
    QLabel *label_9;
    QSpinBox *layerSize_5;
    QLabel *label_7;
    QRadioButton *graphMode;
    QRadioButton *matrixMode;
    QLabel *label_12;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QDoubleSpinBox *learningConstant;
    QSpinBox *epochAmount;
    QSpinBox *batchSize;
    QCheckBox *evaluateCheckBox;
    QLabel *label_14;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QPushButton *trainModel;
    QPushButton *saveModel;
    QPushButton *runExperiment;
    QDoubleSpinBox *testSampleFraction;
    QLabel *label_25;
    QPushButton *Research;
    QSpinBox *numresearch;
    QLabel *trainingDatasetDirectory;
    QPushButton *chooseTestingDataset;
    QLabel *testingDatasetDirectory;
    QPushButton *chooseTrainingDataset;
    QLabel *label_30;
    QWidget *tab_2;
    Paint *paint;
    QPushButton *classifyImage;
    QLabel *answer;
    QLabel *label_13;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_20;
    QLabel *precision;
    QLabel *label_24;
    QLabel *label_19;
    QLabel *layersSizes;
    QLabel *label_23;
    QLabel *recall;
    QLabel *label_21;
    QLabel *label_15;
    QLabel *layersCount;
    QLabel *f1Measure;
    QLabel *accuracy;
    QLabel *label_22;
    QPushButton *load_img;
    QPushButton *clear;
    QLabel *hiddenLayersCount_4;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(863, 814);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(27, 28, 31, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(20, 30, 831, 761));
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        QBrush brush2(QColor(190, 190, 190, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        tabWidget->setPalette(palette1);
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setDocumentMode(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab_1 = new QWidget();
        tab_1->setObjectName("tab_1");
        modelLoader = new QPushButton(tab_1);
        modelLoader->setObjectName("modelLoader");
        modelLoader->setGeometry(QRect(80, 610, 261, 29));
        modelLoader->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 134, 255);\n"
"color: rgb(255, 255, 255);"));
        groupBox = new QGroupBox(tab_1);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(40, 20, 711, 411));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(210, 60, 481, 41));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setBold(true);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(label_4, 1, 3, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        hiddenLayersAmount = new QSlider(groupBox);
        hiddenLayersAmount->setObjectName("hiddenLayersAmount");
        hiddenLayersAmount->setGeometry(QRect(260, 40, 381, 23));
        hiddenLayersAmount->setStyleSheet(QString::fromUtf8("background-color: rgb(116, 116, 122);\n"
"background-color: rgb(50, 51, 54);"));
        hiddenLayersAmount->setMinimum(2);
        hiddenLayersAmount->setMaximum(5);
        hiddenLayersAmount->setPageStep(1);
        hiddenLayersAmount->setTracking(true);
        hiddenLayersAmount->setOrientation(Qt::Horizontal);
        hiddenLayersAmount->setInvertedAppearance(false);
        hiddenLayersAmount->setInvertedControls(false);
        hiddenLayersAmount->setTickPosition(QSlider::TicksBelow);
        hiddenLayersAmount->setTickInterval(1);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(5, 40, 161, 20));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(5, 100, 181, 20));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        gridLayoutWidget_2 = new QWidget(groupBox);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(180, 100, 511, 73));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName("label_10");
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_10->setMargin(6);

        gridLayout_2->addWidget(label_10, 0, 3, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName("label_8");
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_8->setMargin(6);

        gridLayout_2->addWidget(label_8, 0, 1, 1, 1);

        layerSize_1 = new QSpinBox(gridLayoutWidget_2);
        layerSize_1->setObjectName("layerSize_1");
        layerSize_1->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(50, 51, 54);"));
        layerSize_1->setMinimum(1);
        layerSize_1->setMaximum(256);
        layerSize_1->setSingleStep(1);
        layerSize_1->setValue(5);

        gridLayout_2->addWidget(layerSize_1, 1, 0, 1, 1);

        layerSize_2 = new QSpinBox(gridLayoutWidget_2);
        layerSize_2->setObjectName("layerSize_2");
        layerSize_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(50, 51, 54);"));
        layerSize_2->setMinimum(1);
        layerSize_2->setMaximum(256);
        layerSize_2->setSingleStep(1);
        layerSize_2->setValue(5);

        gridLayout_2->addWidget(layerSize_2, 1, 1, 1, 1);

        layerSize_3 = new QSpinBox(gridLayoutWidget_2);
        layerSize_3->setObjectName("layerSize_3");
        layerSize_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(50, 51, 54);"));
        layerSize_3->setMinimum(1);
        layerSize_3->setMaximum(256);
        layerSize_3->setSingleStep(1);

        gridLayout_2->addWidget(layerSize_3, 1, 2, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_2);
        label_11->setObjectName("label_11");
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_11->setMargin(6);

        gridLayout_2->addWidget(label_11, 0, 4, 1, 1);

        layerSize_4 = new QSpinBox(gridLayoutWidget_2);
        layerSize_4->setObjectName("layerSize_4");
        layerSize_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(50, 51, 54);"));
        layerSize_4->setMinimum(1);
        layerSize_4->setMaximum(256);
        layerSize_4->setSingleStep(1);

        gridLayout_2->addWidget(layerSize_4, 1, 3, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName("label_9");
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_9->setMargin(6);

        gridLayout_2->addWidget(label_9, 0, 2, 1, 1);

        layerSize_5 = new QSpinBox(gridLayoutWidget_2);
        layerSize_5->setObjectName("layerSize_5");
        layerSize_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(50, 51, 54);"));
        layerSize_5->setMinimum(1);
        layerSize_5->setMaximum(256);
        layerSize_5->setSingleStep(1);

        gridLayout_2->addWidget(layerSize_5, 1, 4, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_7->setMargin(6);

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        graphMode = new QRadioButton(groupBox);
        graphMode->setObjectName("graphMode");
        graphMode->setGeometry(QRect(300, 200, 112, 26));
        graphMode->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 51, 54);\n"
"color: rgb(255, 255, 255);"));
        matrixMode = new QRadioButton(groupBox);
        matrixMode->setObjectName("matrixMode");
        matrixMode->setGeometry(QRect(400, 200, 112, 26));
        matrixMode->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 51, 54);\n"
"color: rgb(255, 255, 255);"));
        matrixMode->setChecked(true);
        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(170, 200, 91, 20));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(230, 304, 131, 20));
        label_16->setFont(font1);
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(60, 304, 91, 20));
        label_17->setFont(font1);
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_18 = new QLabel(groupBox);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(430, 304, 161, 20));
        label_18->setFont(font1);
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        learningConstant = new QDoubleSpinBox(groupBox);
        learningConstant->setObjectName("learningConstant");
        learningConstant->setGeometry(QRect(590, 300, 67, 29));
        learningConstant->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(50, 51, 54);"));
        learningConstant->setDecimals(6);
        learningConstant->setMinimum(-1000.000000000000000);
        learningConstant->setMaximum(1000.000000000000000);
        learningConstant->setValue(1.000000000000000);
        epochAmount = new QSpinBox(groupBox);
        epochAmount->setObjectName("epochAmount");
        epochAmount->setGeometry(QRect(160, 300, 48, 29));
        epochAmount->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(50, 51, 54);"));
        epochAmount->setMinimum(1);
        epochAmount->setMaximum(1000);
        batchSize = new QSpinBox(groupBox);
        batchSize->setObjectName("batchSize");
        batchSize->setGeometry(QRect(350, 300, 48, 29));
        batchSize->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(50, 51, 54);"));
        batchSize->setMinimum(1);
        batchSize->setMaximum(9999);
        batchSize->setValue(10);
        evaluateCheckBox = new QCheckBox(groupBox);
        evaluateCheckBox->setObjectName("evaluateCheckBox");
        evaluateCheckBox->setGeometry(QRect(160, 350, 491, 26));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush4(QColor(255, 255, 255, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QBrush brush5(QColor(255, 255, 255, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        evaluateCheckBox->setPalette(palette2);
        evaluateCheckBox->setFont(font1);
        evaluateCheckBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        evaluateCheckBox->setTristate(false);
        label_14 = new QLabel(groupBox);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(180, 380, 501, 20));
        label_14->setFont(font1);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_26 = new QLabel(groupBox);
        label_26->setObjectName("label_26");
        label_26->setGeometry(QRect(17, 186, 661, 1));
        label_26->setStyleSheet(QString::fromUtf8("background-color: rgb(116, 116, 122);"));
        label_27 = new QLabel(groupBox);
        label_27->setObjectName("label_27");
        label_27->setGeometry(QRect(17, 240, 661, 1));
        label_27->setStyleSheet(QString::fromUtf8("background-color: rgb(116, 116, 122);"));
        label_28 = new QLabel(groupBox);
        label_28->setObjectName("label_28");
        label_28->setGeometry(QRect(17, 342, 661, 1));
        label_28->setStyleSheet(QString::fromUtf8("background-color: rgb(116, 116, 122);"));
        label_29 = new QLabel(groupBox);
        label_29->setObjectName("label_29");
        label_29->setGeometry(QRect(20, 250, 121, 21));
        label_29->setFont(font);
        label_29->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_26->raise();
        gridLayoutWidget->raise();
        hiddenLayersAmount->raise();
        label_5->raise();
        label_6->raise();
        gridLayoutWidget_2->raise();
        graphMode->raise();
        matrixMode->raise();
        label_12->raise();
        label_16->raise();
        label_17->raise();
        label_18->raise();
        learningConstant->raise();
        epochAmount->raise();
        batchSize->raise();
        evaluateCheckBox->raise();
        label_14->raise();
        label_27->raise();
        label_28->raise();
        label_29->raise();
        trainModel = new QPushButton(tab_1);
        trainModel->setObjectName("trainModel");
        trainModel->setGeometry(QRect(320, 550, 131, 29));
        trainModel->setFont(font1);
        trainModel->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 134, 255);\n"
"color: rgb(255, 255, 255);"));
        saveModel = new QPushButton(tab_1);
        saveModel->setObjectName("saveModel");
        saveModel->setGeometry(QRect(90, 660, 241, 29));
        saveModel->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 134, 255);\n"
"color: rgb(255, 255, 255);"));
        runExperiment = new QPushButton(tab_1);
        runExperiment->setObjectName("runExperiment");
        runExperiment->setGeometry(QRect(370, 610, 331, 29));
        runExperiment->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 134, 255);\n"
"color: rgb(255, 255, 255);"));
        testSampleFraction = new QDoubleSpinBox(tab_1);
        testSampleFraction->setObjectName("testSampleFraction");
        testSampleFraction->setGeometry(QRect(420, 510, 67, 29));
        testSampleFraction->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(50, 51, 54);"));
        testSampleFraction->setMaximum(1.000000000000000);
        testSampleFraction->setSingleStep(0.010000000000000);
        testSampleFraction->setValue(1.000000000000000);
        label_25 = new QLabel(tab_1);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(230, 514, 181, 20));
        Research = new QPushButton(tab_1);
        Research->setObjectName("Research");
        Research->setGeometry(QRect(440, 656, 100, 32));
        Research->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 134, 255);\n"
"color: rgb(255, 255, 255);"));
        numresearch = new QSpinBox(tab_1);
        numresearch->setObjectName("numresearch");
        numresearch->setGeometry(QRect(550, 660, 81, 22));
        numresearch->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(50, 51, 54);"));
        numresearch->setMinimum(1);
        numresearch->setMaximum(1001);
        trainingDatasetDirectory = new QLabel(tab_1);
        trainingDatasetDirectory->setObjectName("trainingDatasetDirectory");
        trainingDatasetDirectory->setGeometry(QRect(340, 444, 361, 20));
        trainingDatasetDirectory->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(50, 51, 54);"));
        chooseTestingDataset = new QPushButton(tab_1);
        chooseTestingDataset->setObjectName("chooseTestingDataset");
        chooseTestingDataset->setGeometry(QRect(90, 470, 241, 29));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush6(QColor(44, 134, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush7(QColor(255, 255, 255, 128));
        brush7.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        QBrush brush8(QColor(0, 0, 0, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        chooseTestingDataset->setPalette(palette3);
        chooseTestingDataset->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 134, 255);\n"
"color: rgb(255, 255, 255);"));
        testingDatasetDirectory = new QLabel(tab_1);
        testingDatasetDirectory->setObjectName("testingDatasetDirectory");
        testingDatasetDirectory->setGeometry(QRect(340, 474, 361, 20));
        testingDatasetDirectory->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(50, 51, 54);"));
        chooseTrainingDataset = new QPushButton(tab_1);
        chooseTrainingDataset->setObjectName("chooseTrainingDataset");
        chooseTrainingDataset->setGeometry(QRect(90, 440, 241, 29));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        chooseTrainingDataset->setPalette(palette4);
        chooseTrainingDataset->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 134, 255);\n"
"color: rgb(255, 255, 255);"));
        label_30 = new QLabel(tab_1);
        label_30->setObjectName("label_30");
        label_30->setGeometry(QRect(57, 590, 661, 1));
        label_30->setStyleSheet(QString::fromUtf8("background-color: rgb(116, 116, 122);"));
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        QPalette palette5;
        tab_2->setPalette(palette5);
        tab_2->setStyleSheet(QString::fromUtf8(""));
        paint = new Paint(tab_2);
        paint->setObjectName("paint");
        paint->setGeometry(QRect(280, 10, 512, 512));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush9(QColor(50, 51, 54, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush9);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush9);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush9);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush9);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        paint->setPalette(palette6);
        paint->setCursor(QCursor(Qt::PointingHandCursor));
        paint->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 51, 54);"));
        classifyImage = new QPushButton(tab_2);
        classifyImage->setObjectName("classifyImage");
        classifyImage->setGeometry(QRect(20, 10, 241, 151));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush6);
        QBrush brush10(QColor(172, 207, 255, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Light, brush10);
        QBrush brush11(QColor(108, 170, 255, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Midlight, brush11);
        QBrush brush12(QColor(22, 67, 127, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Dark, brush12);
        QBrush brush13(QColor(29, 89, 170, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Mid, brush13);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush6);
        QBrush brush14(QColor(0, 0, 0, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::Shadow, brush14);
        QBrush brush15(QColor(149, 194, 255, 255));
        brush15.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::AlternateBase, brush15);
        QBrush brush16(QColor(255, 255, 220, 255));
        brush16.setStyle(Qt::SolidPattern);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipBase, brush16);
        palette7.setBrush(QPalette::Active, QPalette::ToolTipText, brush14);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Light, brush10);
        palette7.setBrush(QPalette::Inactive, QPalette::Midlight, brush11);
        palette7.setBrush(QPalette::Inactive, QPalette::Dark, brush12);
        palette7.setBrush(QPalette::Inactive, QPalette::Mid, brush13);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Shadow, brush14);
        palette7.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush15);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush16);
        palette7.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush14);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Light, brush10);
        palette7.setBrush(QPalette::Disabled, QPalette::Midlight, brush11);
        palette7.setBrush(QPalette::Disabled, QPalette::Dark, brush12);
        palette7.setBrush(QPalette::Disabled, QPalette::Mid, brush13);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Shadow, brush14);
        palette7.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush16);
        palette7.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush14);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        classifyImage->setPalette(palette7);
        QFont font2;
        font2.setPointSize(28);
        font2.setBold(true);
        classifyImage->setFont(font2);
        classifyImage->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 134, 255);\n"
"color: rgb(255, 255, 255);"));
        answer = new QLabel(tab_2);
        answer->setObjectName("answer");
        answer->setGeometry(QRect(20, 400, 241, 121));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush9);
        QBrush brush17(QColor(75, 76, 81, 255));
        brush17.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Light, brush17);
        QBrush brush18(QColor(62, 63, 67, 255));
        brush18.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Midlight, brush18);
        QBrush brush19(QColor(25, 25, 27, 255));
        brush19.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Dark, brush19);
        QBrush brush20(QColor(33, 34, 36, 255));
        brush20.setStyle(Qt::SolidPattern);
        palette8.setBrush(QPalette::Active, QPalette::Mid, brush20);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush9);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush9);
        palette8.setBrush(QPalette::Active, QPalette::Shadow, brush9);
        palette8.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipBase, brush16);
        palette8.setBrush(QPalette::Active, QPalette::ToolTipText, brush14);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::Light, brush17);
        palette8.setBrush(QPalette::Inactive, QPalette::Midlight, brush18);
        palette8.setBrush(QPalette::Inactive, QPalette::Dark, brush19);
        palette8.setBrush(QPalette::Inactive, QPalette::Mid, brush20);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::Shadow, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush16);
        palette8.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush14);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush19);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::Light, brush17);
        palette8.setBrush(QPalette::Disabled, QPalette::Midlight, brush18);
        palette8.setBrush(QPalette::Disabled, QPalette::Dark, brush19);
        palette8.setBrush(QPalette::Disabled, QPalette::Mid, brush20);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush19);
        palette8.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush19);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::Shadow, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush16);
        palette8.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush14);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        answer->setPalette(palette8);
        QFont font3;
        font3.setPointSize(90);
        font3.setBold(true);
        answer->setFont(font3);
        answer->setStyleSheet(QString::fromUtf8("background-color: rgb(50, 51, 54);"));
        answer->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(tab_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(20, 350, 221, 41));
        QFont font4;
        font4.setPointSize(24);
        label_13->setFont(font4);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        gridLayoutWidget_3 = new QWidget(tab_2);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(20, 540, 771, 211));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setHorizontalSpacing(6);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(gridLayoutWidget_3);
        label_20->setObjectName("label_20");
        label_20->setFont(font1);
        label_20->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(50, 51, 54);"));
        label_20->setMargin(6);

        gridLayout_3->addWidget(label_20, 2, 2, 1, 1);

        precision = new QLabel(gridLayoutWidget_3);
        precision->setObjectName("precision");
        precision->setStyleSheet(QString::fromUtf8("color: rgb(116, 116, 122);\n"
"background-color: rgb(50, 51, 54);"));
        precision->setMargin(6);

        gridLayout_3->addWidget(precision, 2, 5, 1, 1);

        label_24 = new QLabel(gridLayoutWidget_3);
        label_24->setObjectName("label_24");
        label_24->setFont(font1);
        label_24->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(50, 51, 54);"));
        label_24->setMargin(6);

        gridLayout_3->addWidget(label_24, 6, 4, 1, 1);

        label_19 = new QLabel(gridLayoutWidget_3);
        label_19->setObjectName("label_19");
        label_19->setFont(font1);
        label_19->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(50, 51, 54);"));
        label_19->setMargin(6);

        gridLayout_3->addWidget(label_19, 2, 0, 1, 1);

        layersSizes = new QLabel(gridLayoutWidget_3);
        layersSizes->setObjectName("layersSizes");
        layersSizes->setStyleSheet(QString::fromUtf8("color: rgb(116, 116, 122);\n"
"background-color: rgb(50, 51, 54);"));
        layersSizes->setMargin(6);

        gridLayout_3->addWidget(layersSizes, 2, 3, 1, 1);

        label_23 = new QLabel(gridLayoutWidget_3);
        label_23->setObjectName("label_23");
        label_23->setFont(font1);
        label_23->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(50, 51, 54);"));
        label_23->setMargin(6);

        gridLayout_3->addWidget(label_23, 6, 2, 1, 1);

        recall = new QLabel(gridLayoutWidget_3);
        recall->setObjectName("recall");
        recall->setStyleSheet(QString::fromUtf8("color: rgb(116, 116, 122);\n"
"background-color: rgb(50, 51, 54);"));
        recall->setMargin(6);

        gridLayout_3->addWidget(recall, 6, 3, 1, 1);

        label_21 = new QLabel(gridLayoutWidget_3);
        label_21->setObjectName("label_21");
        label_21->setFont(font1);
        label_21->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(50, 51, 54);"));
        label_21->setMargin(6);

        gridLayout_3->addWidget(label_21, 6, 0, 1, 1);

        label_15 = new QLabel(gridLayoutWidget_3);
        label_15->setObjectName("label_15");
        QFont font5;
        font5.setPointSize(24);
        font5.setBold(true);
        label_15->setFont(font5);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_15, 0, 0, 1, 6);

        layersCount = new QLabel(gridLayoutWidget_3);
        layersCount->setObjectName("layersCount");
        layersCount->setStyleSheet(QString::fromUtf8("color: rgb(116, 116, 122);\n"
"background-color: rgb(50, 51, 54);"));
        layersCount->setMargin(6);

        gridLayout_3->addWidget(layersCount, 2, 1, 1, 1);

        f1Measure = new QLabel(gridLayoutWidget_3);
        f1Measure->setObjectName("f1Measure");
        f1Measure->setStyleSheet(QString::fromUtf8("color: rgb(116, 116, 122);\n"
"background-color: rgb(50, 51, 54);"));
        f1Measure->setMargin(6);

        gridLayout_3->addWidget(f1Measure, 6, 5, 1, 1);

        accuracy = new QLabel(gridLayoutWidget_3);
        accuracy->setObjectName("accuracy");
        accuracy->setStyleSheet(QString::fromUtf8("color: rgb(116, 116, 122);\n"
"background-color: rgb(50, 51, 54);"));
        accuracy->setMargin(6);

        gridLayout_3->addWidget(accuracy, 6, 1, 1, 1);

        label_22 = new QLabel(gridLayoutWidget_3);
        label_22->setObjectName("label_22");
        label_22->setFont(font1);
        label_22->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(50, 51, 54);"));
        label_22->setMargin(6);

        gridLayout_3->addWidget(label_22, 2, 4, 1, 1);

        load_img = new QPushButton(tab_2);
        load_img->setObjectName("load_img");
        load_img->setGeometry(QRect(40, 290, 201, 41));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        load_img->setPalette(palette9);
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(false);
        load_img->setFont(font6);
        load_img->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 134, 255);\n"
"color: rgb(255, 255, 255);"));
        clear = new QPushButton(tab_2);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(40, 180, 201, 41));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush7);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush7);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        clear->setPalette(palette10);
        clear->setFont(font6);
        clear->setStyleSheet(QString::fromUtf8("background-color: rgb(44, 134, 255);\n"
"color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_2, QString());
        hiddenLayersCount_4 = new QLabel(centralwidget);
        hiddenLayersCount_4->setObjectName("hiddenLayersCount_4");
        hiddenLayersCount_4->setGeometry(QRect(980, 340, 63, 20));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(230, -10, 81, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 863, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        modelLoader->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\274\320\276\320\264\320\265\320\273\321\214 \320\270\320\267 \321\204\320\260\320\271\320\273\320\260", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270 \320\264\320\273\321\217 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\320\270 \320\274\320\276\320\264\320\265\320\273\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 \321\201\320\272\321\200\321\213\321\202\321\213\321\205 \321\201\320\273\320\276\320\265\320\262", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200 \321\201\320\272\321\200\321\213\321\202\321\213\321\205 \321\201\320\273\320\276\320\265\320\262", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\321\201\320\273\320\276\320\271 4", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\321\201\320\273\320\276\320\271 2", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\321\201\320\273\320\276\320\271 5", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\321\201\320\273\320\276\320\271 3", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\321\201\320\273\320\276\320\271 1", nullptr));
        graphMode->setText(QCoreApplication::translate("MainWindow", "\320\263\321\200\320\260\321\204\320\276\320\262\321\213\320\271", nullptr));
        matrixMode->setText(QCoreApplication::translate("MainWindow", "\320\274\320\260\321\202\321\200\320\270\321\207\320\275\321\213\320\271", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\274\320\276\320\264\320\265\320\273\320\270", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200 \320\277\320\260\321\207\320\272\320\270", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \321\215\320\277\320\276\321\205", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\203\321\207\320\260\321\216\321\211\320\260\321\217 \320\272\320\276\320\275\321\201\321\202\320\260\320\275\321\202\320\260", nullptr));
        evaluateCheckBox->setText(QCoreApplication::translate("MainWindow", "\320\236\321\206\320\265\320\275\320\270\320\262\320\260\320\271\321\202\320\265 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \320\274\320\276\320\264\320\265\320\273\320\270 \320\277\320\276\321\201\320\273\320\265 \320\272\320\260\320\266\320\264\320\276\320\271 \321\215\320\277\320\276\321\205\320\270", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\321\203\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\260 \321\215\321\202\320\276\320\263\320\276 \321\204\320\273\320\260\320\266\320\272\320\260 \320\267\320\275\320\260\321\207\320\270\321\202\320\265\320\273\321\214\320\275\320\276 \321\201\320\275\320\270\320\267\320\270\321\202 \320\277\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214", nullptr));
        label_26->setText(QString());
        label_27->setText(QString());
        label_28->setText(QString());
        label_29->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213", nullptr));
        trainModel->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\203\321\207\320\270\321\202\321\214 \320\274\320\276\320\264\320\265\320\273\321\214", nullptr));
        saveModel->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\274\320\276\320\264\320\265\320\273\321\214 \320\262 \321\204\320\260\320\271\320\273", nullptr));
        runExperiment->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\277\321\203\321\201\321\202\320\270\321\202\321\214 \321\215\320\272\321\201\320\277\320\265\321\200\320\270\320\274\320\265\320\275\321\202 \320\275\320\260 \321\202\320\265\321\201\321\202\320\276\320\262\320\276\320\271 \320\262\321\213\320\261\320\276\321\200\320\272\320\265", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\273\321\217 \321\202\320\265\321\201\321\202\320\276\320\262\320\276\320\263\320\276 \320\276\320\261\321\200\320\260\320\267\321\206\320\260:", nullptr));
        Research->setText(QCoreApplication::translate("MainWindow", "\320\230\321\201\321\201\320\273\320\265\320\264\320\276\320\262\320\260\321\202\321\214", nullptr));
        trainingDatasetDirectory->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        chooseTestingDataset->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\202\320\265\321\201\321\202\320\276\320\262\321\213\320\271 \320\264\320\260\321\202\320\260\321\201\320\265\321\202", nullptr));
        testingDatasetDirectory->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        chooseTrainingDataset->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\276\321\207\320\275\321\213\320\271 \320\264\320\260\321\202\320\260\321\201\320\265\321\202", nullptr));
        label_30->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("MainWindow", "\320\236\320\261\321\203\321\207\320\270\321\202\321\214 \320\274\320\276\320\264\320\265\320\273\321\214", nullptr));
        classifyImage->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\320\277\320\276\320\267\320\275\320\260\321\202\321\214", nullptr));
        answer->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "\320\222\320\260\321\210\320\260 \320\261\321\203\320\272\320\262\320\260:", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\267\320\274\320\265\321\200 \321\201\320\273\320\276\320\265\320\262:", nullptr));
        precision->setText(QCoreApplication::translate("MainWindow", "empty", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "F1-\320\274\320\265\321\200\320\260:", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \321\201\320\273\320\276\320\265\320\262:", nullptr));
        layersSizes->setText(QCoreApplication::translate("MainWindow", "empty", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273\320\275\320\276\321\202\320\260:", nullptr));
        recall->setText(QCoreApplication::translate("MainWindow", "empty", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Accuracy", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\321\204\320\270\320\263\321\203\321\200\320\260\321\206\320\270\321\217 \321\202\320\265\320\272\321\203\321\211\320\265\320\271 \320\274\320\276\320\264\320\265\320\273\320\270", nullptr));
        layersCount->setText(QCoreApplication::translate("MainWindow", "empty", nullptr));
        f1Measure->setText(QCoreApplication::translate("MainWindow", "empty", nullptr));
        accuracy->setText(QCoreApplication::translate("MainWindow", "empty", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Precision:", nullptr));
        load_img->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \320\277\320\276\320\273\320\276\321\202\320\275\320\276", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\320\277\320\276\320\267\320\275\320\260\321\202\321\214 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", nullptr));
        hiddenLayersCount_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
