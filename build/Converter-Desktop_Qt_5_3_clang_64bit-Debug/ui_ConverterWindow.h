/********************************************************************************
** Form generated from reading UI file 'ConverterWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONVERTERWINDOW_H
#define UI_CONVERTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConverterWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *euroValueLineEdit;
    QLineEdit *bitcoinValueLineEdit;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ConverterWindow)
    {
        if (ConverterWindow->objectName().isEmpty())
            ConverterWindow->setObjectName(QStringLiteral("ConverterWindow"));
        ConverterWindow->resize(400, 300);
        centralWidget = new QWidget(ConverterWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        euroValueLineEdit = new QLineEdit(centralWidget);
        euroValueLineEdit->setObjectName(QStringLiteral("euroValueLineEdit"));
        euroValueLineEdit->setGeometry(QRect(30, 90, 113, 21));
        bitcoinValueLineEdit = new QLineEdit(centralWidget);
        bitcoinValueLineEdit->setObjectName(QStringLiteral("bitcoinValueLineEdit"));
        bitcoinValueLineEdit->setGeometry(QRect(240, 90, 113, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 90, 59, 16));
        label->setAlignment(Qt::AlignCenter);
        ConverterWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ConverterWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        ConverterWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ConverterWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ConverterWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ConverterWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ConverterWindow->setStatusBar(statusBar);

        retranslateUi(ConverterWindow);

        QMetaObject::connectSlotsByName(ConverterWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ConverterWindow)
    {
        ConverterWindow->setWindowTitle(QApplication::translate("ConverterWindow", "ConverterWindow", 0));
        label->setText(QApplication::translate("ConverterWindow", "->", 0));
    } // retranslateUi

};

namespace Ui {
    class ConverterWindow: public Ui_ConverterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONVERTERWINDOW_H
