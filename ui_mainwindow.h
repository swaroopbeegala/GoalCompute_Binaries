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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *x_coordinate;
    QLabel *y_coordinate;
    QLabel *Theta_Goal;
    QLineEdit *x_value;
    QLineEdit *y_value;
    QLineEdit *theta_value;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QCheckBox *checkBox;
    QLabel *Goal_Distance;
    QLabel *Angle;
    QLabel *label_4;
    QLabel *pose;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(601, 277);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        formLayoutWidget = new QWidget(centralWidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 20, 195, 131));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        x_coordinate = new QLabel(formLayoutWidget);
        x_coordinate->setObjectName(QStringLiteral("x_coordinate"));
        x_coordinate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, x_coordinate);

        y_coordinate = new QLabel(formLayoutWidget);
        y_coordinate->setObjectName(QStringLiteral("y_coordinate"));
        y_coordinate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, y_coordinate);

        Theta_Goal = new QLabel(formLayoutWidget);
        Theta_Goal->setObjectName(QStringLiteral("Theta_Goal"));
        Theta_Goal->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, Theta_Goal);

        x_value = new QLineEdit(formLayoutWidget);
        x_value->setObjectName(QStringLiteral("x_value"));

        formLayout->setWidget(0, QFormLayout::FieldRole, x_value);

        y_value = new QLineEdit(formLayoutWidget);
        y_value->setObjectName(QStringLiteral("y_value"));

        formLayout->setWidget(1, QFormLayout::FieldRole, y_value);

        theta_value = new QLineEdit(formLayoutWidget);
        theta_value->setObjectName(QStringLiteral("theta_value"));

        formLayout->setWidget(2, QFormLayout::FieldRole, theta_value);

        pushButton = new QPushButton(formLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout->setWidget(3, QFormLayout::LabelRole, pushButton);

        pushButton_2 = new QPushButton(formLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        formLayout->setWidget(3, QFormLayout::FieldRole, pushButton_2);

        formLayoutWidget_2 = new QWidget(centralWidget);
        formLayoutWidget_2->setObjectName(QStringLiteral("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(330, 20, 221, 131));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(formLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_3);

        label = new QLabel(formLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        checkBox = new QCheckBox(formLayoutWidget_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, checkBox);

        Goal_Distance = new QLabel(formLayoutWidget_2);
        Goal_Distance->setObjectName(QStringLiteral("Goal_Distance"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, Goal_Distance);

        Angle = new QLabel(formLayoutWidget_2);
        Angle->setObjectName(QStringLiteral("Angle"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, Angle);

        label_4 = new QLabel(formLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_4);

        pose = new QLabel(formLayoutWidget_2);
        pose->setObjectName(QStringLiteral("pose"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, pose);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 601, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        x_coordinate->setText(QApplication::translate("MainWindow", "X:", 0));
        y_coordinate->setText(QApplication::translate("MainWindow", "Y:", 0));
        Theta_Goal->setText(QApplication::translate("MainWindow", "Theta:", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Send", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Finish", 0));
        label_2->setText(QApplication::translate("MainWindow", "GoalDistance:", 0));
        label_3->setText(QApplication::translate("MainWindow", "Turn Goal Angle:", 0));
        label->setText(QApplication::translate("MainWindow", "Reverse", 0));
        checkBox->setText(QApplication::translate("MainWindow", "if True", 0));
        Goal_Distance->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        Angle->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_4->setText(QApplication::translate("MainWindow", "Pose:", 0));
        pose->setText(QApplication::translate("MainWindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
