/********************************************************************************
** Form generated from reading UI file 'Code.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CODE_H
#define UI_CODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CodeClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CodeClass)
    {
        if (CodeClass->objectName().isEmpty())
            CodeClass->setObjectName("CodeClass");
        CodeClass->resize(600, 400);
        menuBar = new QMenuBar(CodeClass);
        menuBar->setObjectName("menuBar");
        CodeClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CodeClass);
        mainToolBar->setObjectName("mainToolBar");
        CodeClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(CodeClass);
        centralWidget->setObjectName("centralWidget");
        CodeClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(CodeClass);
        statusBar->setObjectName("statusBar");
        CodeClass->setStatusBar(statusBar);

        retranslateUi(CodeClass);

        QMetaObject::connectSlotsByName(CodeClass);
    } // setupUi

    void retranslateUi(QMainWindow *CodeClass)
    {
        CodeClass->setWindowTitle(QCoreApplication::translate("CodeClass", "Code", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CodeClass: public Ui_CodeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CODE_H
