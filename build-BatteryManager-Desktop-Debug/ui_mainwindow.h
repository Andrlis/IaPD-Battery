/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QProgressBar *chargeindicator;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *ConLayout;
    QLabel *conType;
    QLineEdit *connectionEdit;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *TimeLayout;
    QLabel *Timelabel;
    QLineEdit *timeEdit;
    QFrame *line;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *timeToOff;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(530, 280);
        MainWindow->setMinimumSize(QSize(530, 280));
        MainWindow->setMaximumSize(QSize(530, 280));
        MainWindow->setBaseSize(QSize(530, 280));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        chargeindicator = new QProgressBar(centralWidget);
        chargeindicator->setObjectName(QStringLiteral("chargeindicator"));
        chargeindicator->setGeometry(QRect(450, 30, 51, 191));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(20, 222, 26, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(101, 255, 105, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(60, 238, 65, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(10, 111, 13, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(13, 148, 17, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush7(QColor(137, 238, 140, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush7);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        chargeindicator->setPalette(palette);
        chargeindicator->setAutoFillBackground(false);
        chargeindicator->setStyleSheet(QStringLiteral(""));
        chargeindicator->setValue(24);
        chargeindicator->setOrientation(Qt::Vertical);
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 60, 391, 41));
        ConLayout = new QHBoxLayout(horizontalLayoutWidget);
        ConLayout->setSpacing(6);
        ConLayout->setContentsMargins(11, 11, 11, 11);
        ConLayout->setObjectName(QStringLiteral("ConLayout"));
        ConLayout->setContentsMargins(0, 0, 0, 0);
        conType = new QLabel(horizontalLayoutWidget);
        conType->setObjectName(QStringLiteral("conType"));

        ConLayout->addWidget(conType);

        connectionEdit = new QLineEdit(horizontalLayoutWidget);
        connectionEdit->setObjectName(QStringLiteral("connectionEdit"));
        connectionEdit->setReadOnly(true);

        ConLayout->addWidget(connectionEdit);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(30, 100, 391, 41));
        TimeLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        TimeLayout->setSpacing(6);
        TimeLayout->setContentsMargins(11, 11, 11, 11);
        TimeLayout->setObjectName(QStringLiteral("TimeLayout"));
        TimeLayout->setContentsMargins(0, 0, 0, 0);
        Timelabel = new QLabel(horizontalLayoutWidget_2);
        Timelabel->setObjectName(QStringLiteral("Timelabel"));

        TimeLayout->addWidget(Timelabel);

        timeEdit = new QLineEdit(horizontalLayoutWidget_2);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setEnabled(true);
        timeEdit->setMinimumSize(QSize(300, 0));
        timeEdit->setBaseSize(QSize(300, 0));
        timeEdit->setReadOnly(true);

        TimeLayout->addWidget(timeEdit);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(30, 160, 391, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        horizontalLayoutWidget_4 = new QWidget(centralWidget);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(30, 180, 391, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_4);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        timeToOff = new QComboBox(horizontalLayoutWidget_4);
        timeToOff->setObjectName(QStringLiteral("timeToOff"));

        horizontalLayout->addWidget(timeToOff);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        conType->setText(QApplication::translate("MainWindow", "Connection type:", 0));
        Timelabel->setText(QApplication::translate("MainWindow", "Time left:", 0));
        label->setText(QApplication::translate("MainWindow", "Turn off display when inactive for:", 0));
        timeToOff->clear();
        timeToOff->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Never", 0)
         << QApplication::translate("MainWindow", "5 min", 0)
         << QApplication::translate("MainWindow", "10 min", 0)
         << QApplication::translate("MainWindow", "15 min", 0)
         << QApplication::translate("MainWindow", "30 min", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
