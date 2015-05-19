/********************************************************************************
** Form generated from reading UI file 'cautaripegrid.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAUTARIPEGRID_H
#define UI_CAUTARIPEGRID_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "CustomView.h"

QT_BEGIN_NAMESPACE

class Ui_CautariPeGridClass
{
public:
    QWidget *centralWidget;
    CustomView *graphicsView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CautariPeGridClass)
    {
        if (CautariPeGridClass->objectName().isEmpty())
            CautariPeGridClass->setObjectName(QStringLiteral("CautariPeGridClass"));
        CautariPeGridClass->resize(1151, 778);
        centralWidget = new QWidget(CautariPeGridClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graphicsView = new CustomView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 881, 721));
        CautariPeGridClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CautariPeGridClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1151, 21));
        CautariPeGridClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CautariPeGridClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CautariPeGridClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CautariPeGridClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CautariPeGridClass->setStatusBar(statusBar);

        retranslateUi(CautariPeGridClass);

        QMetaObject::connectSlotsByName(CautariPeGridClass);
    } // setupUi

    void retranslateUi(QMainWindow *CautariPeGridClass)
    {
        CautariPeGridClass->setWindowTitle(QApplication::translate("CautariPeGridClass", "CautariPeGrid", 0));
    } // retranslateUi

};

namespace Ui {
    class CautariPeGridClass: public Ui_CautariPeGridClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAUTARIPEGRID_H
