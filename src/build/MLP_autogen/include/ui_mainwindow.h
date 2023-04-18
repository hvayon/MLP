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
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;
    QSlider *hiddenLayersAmount;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_11;
    QSpinBox *layerSize_1;
    QSpinBox *layerSize_2;
    QSpinBox *layerSize_3;
    QSpinBox *layerSize_4;
    QSpinBox *layerSize_5;
    QLabel *trainingDatasetDirectory;
    QLabel *testingDatasetDirectory;
    QPushButton *chooseTestingDataset;
    QPushButton *chooseTrainingDataset;
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
    QPushButton *trainModel;
    QPushButton *saveModel;
    QPushButton *runExperiment;
    QDoubleSpinBox *testSampleFraction;
    QLabel *label_25;
    QPushButton *Research;
    QSpinBox *numresearch;
    QWidget *tab_2;
    Paint *paint;
    QPushButton *classifyImage;
    QLabel *answer;
    QLabel *label_13;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *clear;
    QPushButton *load_img;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_20;
    QLabel *precision;
    QLabel *layersSizes;
    QLabel *recall;
    QLabel *accuracy;
    QLabel *label_23;
    QLabel *label_22;
    QLabel *label_15;
    QLabel *label_21;
    QLabel *label_19;
    QLabel *layersCount;
    QLabel *label_24;
    QLabel *f1Measure;
    QLabel *hiddenLayersCount_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(895, 682);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(20, 30, 850, 601));
        tab_1 = new QWidget();
        tab_1->setObjectName("tab_1");
        modelLoader = new QPushButton(tab_1);
        modelLoader->setObjectName("modelLoader");
        modelLoader->setGeometry(QRect(90, 30, 261, 29));
        groupBox = new QGroupBox(tab_1);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(80, 70, 701, 391));
        gridLayoutWidget = new QWidget(groupBox);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(190, 50, 481, 41));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(label_4, 1, 3, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        hiddenLayersAmount = new QSlider(groupBox);
        hiddenLayersAmount->setObjectName("hiddenLayersAmount");
        hiddenLayersAmount->setGeometry(QRect(240, 30, 381, 23));
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
        label_5->setGeometry(QRect(0, 30, 221, 20));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, 90, 141, 20));
        gridLayoutWidget_2 = new QWidget(groupBox);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(160, 90, 511, 58));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(gridLayoutWidget_2);
        label_10->setObjectName("label_10");

        gridLayout_2->addWidget(label_10, 0, 3, 1, 1);

        label_9 = new QLabel(gridLayoutWidget_2);
        label_9->setObjectName("label_9");

        gridLayout_2->addWidget(label_9, 0, 2, 1, 1);

        label_8 = new QLabel(gridLayoutWidget_2);
        label_8->setObjectName("label_8");

        gridLayout_2->addWidget(label_8, 0, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_2);
        label_7->setObjectName("label_7");

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget_2);
        label_11->setObjectName("label_11");

        gridLayout_2->addWidget(label_11, 0, 4, 1, 1);

        layerSize_1 = new QSpinBox(gridLayoutWidget_2);
        layerSize_1->setObjectName("layerSize_1");
        layerSize_1->setMinimum(1);
        layerSize_1->setMaximum(256);
        layerSize_1->setSingleStep(1);
        layerSize_1->setValue(5);

        gridLayout_2->addWidget(layerSize_1, 1, 0, 1, 1);

        layerSize_2 = new QSpinBox(gridLayoutWidget_2);
        layerSize_2->setObjectName("layerSize_2");
        layerSize_2->setMinimum(1);
        layerSize_2->setMaximum(256);
        layerSize_2->setSingleStep(1);
        layerSize_2->setValue(5);

        gridLayout_2->addWidget(layerSize_2, 1, 1, 1, 1);

        layerSize_3 = new QSpinBox(gridLayoutWidget_2);
        layerSize_3->setObjectName("layerSize_3");
        layerSize_3->setMinimum(1);
        layerSize_3->setMaximum(256);
        layerSize_3->setSingleStep(1);

        gridLayout_2->addWidget(layerSize_3, 1, 2, 1, 1);

        layerSize_4 = new QSpinBox(gridLayoutWidget_2);
        layerSize_4->setObjectName("layerSize_4");
        layerSize_4->setMinimum(1);
        layerSize_4->setMaximum(256);
        layerSize_4->setSingleStep(1);

        gridLayout_2->addWidget(layerSize_4, 1, 3, 1, 1);

        layerSize_5 = new QSpinBox(gridLayoutWidget_2);
        layerSize_5->setObjectName("layerSize_5");
        layerSize_5->setMinimum(1);
        layerSize_5->setMaximum(256);
        layerSize_5->setSingleStep(1);

        gridLayout_2->addWidget(layerSize_5, 1, 4, 1, 1);

        trainingDatasetDirectory = new QLabel(groupBox);
        trainingDatasetDirectory->setObjectName("trainingDatasetDirectory");
        trainingDatasetDirectory->setGeometry(QRect(190, 260, 361, 20));
        testingDatasetDirectory = new QLabel(groupBox);
        testingDatasetDirectory->setObjectName("testingDatasetDirectory");
        testingDatasetDirectory->setGeometry(QRect(190, 290, 341, 20));
        chooseTestingDataset = new QPushButton(groupBox);
        chooseTestingDataset->setObjectName("chooseTestingDataset");
        chooseTestingDataset->setGeometry(QRect(10, 290, 171, 29));
        chooseTrainingDataset = new QPushButton(groupBox);
        chooseTrainingDataset->setObjectName("chooseTrainingDataset");
        chooseTrainingDataset->setGeometry(QRect(10, 260, 171, 29));
        graphMode = new QRadioButton(groupBox);
        graphMode->setObjectName("graphMode");
        graphMode->setGeometry(QRect(130, 170, 112, 26));
        matrixMode = new QRadioButton(groupBox);
        matrixMode->setObjectName("matrixMode");
        matrixMode->setGeometry(QRect(230, 170, 112, 26));
        matrixMode->setChecked(true);
        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(0, 170, 91, 20));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(230, 220, 101, 20));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(10, 220, 101, 20));
        label_18 = new QLabel(groupBox);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(410, 220, 121, 20));
        learningConstant = new QDoubleSpinBox(groupBox);
        learningConstant->setObjectName("learningConstant");
        learningConstant->setGeometry(QRect(560, 220, 67, 29));
        learningConstant->setDecimals(6);
        learningConstant->setMinimum(-1000.000000000000000);
        learningConstant->setMaximum(1000.000000000000000);
        learningConstant->setValue(1.000000000000000);
        epochAmount = new QSpinBox(groupBox);
        epochAmount->setObjectName("epochAmount");
        epochAmount->setGeometry(QRect(130, 220, 48, 29));
        epochAmount->setMinimum(1);
        epochAmount->setMaximum(1000);
        batchSize = new QSpinBox(groupBox);
        batchSize->setObjectName("batchSize");
        batchSize->setGeometry(QRect(320, 220, 48, 29));
        batchSize->setMinimum(1);
        batchSize->setMaximum(9999);
        batchSize->setValue(10);
        evaluateCheckBox = new QCheckBox(groupBox);
        evaluateCheckBox->setObjectName("evaluateCheckBox");
        evaluateCheckBox->setGeometry(QRect(10, 330, 341, 26));
        evaluateCheckBox->setTristate(false);
        label_14 = new QLabel(groupBox);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(30, 360, 411, 20));
        trainModel = new QPushButton(tab_1);
        trainModel->setObjectName("trainModel");
        trainModel->setGeometry(QRect(580, 510, 131, 29));
        saveModel = new QPushButton(tab_1);
        saveModel->setObjectName("saveModel");
        saveModel->setGeometry(QRect(110, 510, 231, 29));
        runExperiment = new QPushButton(tab_1);
        runExperiment->setObjectName("runExperiment");
        runExperiment->setGeometry(QRect(100, 470, 291, 29));
        testSampleFraction = new QDoubleSpinBox(tab_1);
        testSampleFraction->setObjectName("testSampleFraction");
        testSampleFraction->setGeometry(QRect(690, 470, 67, 29));
        testSampleFraction->setMaximum(1.000000000000000);
        testSampleFraction->setSingleStep(0.010000000000000);
        testSampleFraction->setValue(1.000000000000000);
        label_25 = new QLabel(tab_1);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(520, 470, 141, 20));
        Research = new QPushButton(tab_1);
        Research->setObjectName("Research");
        Research->setGeometry(QRect(630, 10, 100, 32));
        numresearch = new QSpinBox(tab_1);
        numresearch->setObjectName("numresearch");
        numresearch->setGeometry(QRect(640, 50, 81, 22));
        numresearch->setMinimum(1);
        numresearch->setMaximum(1001);
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        QPalette palette;
        tab_2->setPalette(palette);
        tab_2->setStyleSheet(QString::fromUtf8(""));
        paint = new Paint(tab_2);
        paint->setObjectName("paint");
        paint->setGeometry(QRect(20, 20, 512, 512));
        classifyImage = new QPushButton(tab_2);
        classifyImage->setObjectName("classifyImage");
        classifyImage->setGeometry(QRect(570, 60, 151, 101));
        answer = new QLabel(tab_2);
        answer->setObjectName("answer");
        answer->setGeometry(QRect(670, 180, 63, 20));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(570, 180, 91, 20));
        horizontalLayoutWidget = new QWidget(tab_2);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(570, 10, 211, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        clear = new QPushButton(horizontalLayoutWidget);
        clear->setObjectName("clear");

        horizontalLayout->addWidget(clear);

        load_img = new QPushButton(horizontalLayoutWidget);
        load_img->setObjectName("load_img");

        horizontalLayout->addWidget(load_img);

        gridLayoutWidget_3 = new QWidget(tab_2);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(560, 260, 281, 211));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(gridLayoutWidget_3);
        label_20->setObjectName("label_20");

        gridLayout_3->addWidget(label_20, 3, 0, 1, 1);

        precision = new QLabel(gridLayoutWidget_3);
        precision->setObjectName("precision");

        gridLayout_3->addWidget(precision, 5, 1, 1, 1);

        layersSizes = new QLabel(gridLayoutWidget_3);
        layersSizes->setObjectName("layersSizes");

        gridLayout_3->addWidget(layersSizes, 3, 1, 1, 1);

        recall = new QLabel(gridLayoutWidget_3);
        recall->setObjectName("recall");

        gridLayout_3->addWidget(recall, 6, 1, 1, 1);

        accuracy = new QLabel(gridLayoutWidget_3);
        accuracy->setObjectName("accuracy");

        gridLayout_3->addWidget(accuracy, 4, 1, 1, 1);

        label_23 = new QLabel(gridLayoutWidget_3);
        label_23->setObjectName("label_23");

        gridLayout_3->addWidget(label_23, 6, 0, 1, 1);

        label_22 = new QLabel(gridLayoutWidget_3);
        label_22->setObjectName("label_22");

        gridLayout_3->addWidget(label_22, 5, 0, 1, 1);

        label_15 = new QLabel(gridLayoutWidget_3);
        label_15->setObjectName("label_15");

        gridLayout_3->addWidget(label_15, 0, 0, 1, 2);

        label_21 = new QLabel(gridLayoutWidget_3);
        label_21->setObjectName("label_21");

        gridLayout_3->addWidget(label_21, 4, 0, 1, 1);

        label_19 = new QLabel(gridLayoutWidget_3);
        label_19->setObjectName("label_19");

        gridLayout_3->addWidget(label_19, 2, 0, 1, 1);

        layersCount = new QLabel(gridLayoutWidget_3);
        layersCount->setObjectName("layersCount");

        gridLayout_3->addWidget(layersCount, 2, 1, 1, 1);

        label_24 = new QLabel(gridLayoutWidget_3);
        label_24->setObjectName("label_24");

        gridLayout_3->addWidget(label_24, 7, 0, 1, 1);

        f1Measure = new QLabel(gridLayoutWidget_3);
        f1Measure->setObjectName("f1Measure");

        gridLayout_3->addWidget(f1Measure, 7, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        hiddenLayersCount_4 = new QLabel(centralwidget);
        hiddenLayersCount_4->setObjectName("hiddenLayersCount_4");
        hiddenLayersCount_4->setGeometry(QRect(980, 340, 63, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 895, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        modelLoader->setText(QCoreApplication::translate("MainWindow", "Load model configuration from file", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Settings for training a model", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Hidden layers amount", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Hidden layers sizes", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "layer 4", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "layer 3", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "layer 2", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "layer 1", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "layer 5", nullptr));
        trainingDatasetDirectory->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        testingDatasetDirectory->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        chooseTestingDataset->setText(QCoreApplication::translate("MainWindow", "Choose testing dataset", nullptr));
        chooseTrainingDataset->setText(QCoreApplication::translate("MainWindow", "Choose training dataset", nullptr));
        graphMode->setText(QCoreApplication::translate("MainWindow", "graph", nullptr));
        matrixMode->setText(QCoreApplication::translate("MainWindow", "matrix", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Model type", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Batch size", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Epoch amount", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Learning constant", nullptr));
        evaluateCheckBox->setText(QCoreApplication::translate("MainWindow", "Evaluate model performance after each epoch", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "checking that box will significantly slow down performance", nullptr));
        trainModel->setText(QCoreApplication::translate("MainWindow", "TRAIN MODEL", nullptr));
        saveModel->setText(QCoreApplication::translate("MainWindow", "Save model to file", nullptr));
        runExperiment->setText(QCoreApplication::translate("MainWindow", "Run the experiment on the test sample", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "Test sample fraction:", nullptr));
        Research->setText(QCoreApplication::translate("MainWindow", "Research", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("MainWindow", "Train model", nullptr));
        classifyImage->setText(QCoreApplication::translate("MainWindow", "Classify", nullptr));
        answer->setText(QString());
        label_13->setText(QCoreApplication::translate("MainWindow", "Your letter is:", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        load_img->setText(QCoreApplication::translate("MainWindow", "Load Img", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Sizes of layers:", nullptr));
        precision->setText(QCoreApplication::translate("MainWindow", "empty", nullptr));
        layersSizes->setText(QCoreApplication::translate("MainWindow", "empty", nullptr));
        recall->setText(QCoreApplication::translate("MainWindow", "empty", nullptr));
        accuracy->setText(QCoreApplication::translate("MainWindow", "empty", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Recall:", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "Precision:", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Current model configuration", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Accuracy", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Layers count:", nullptr));
        layersCount->setText(QCoreApplication::translate("MainWindow", "empty", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "F1-measure:", nullptr));
        f1Measure->setText(QCoreApplication::translate("MainWindow", "empty", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Classify image", nullptr));
        hiddenLayersCount_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
