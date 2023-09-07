/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_4;
    QLabel *label_11;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_4;
    QLineEdit *log_domain;
    QLabel *log_txt3;
    QLineEdit *log_name;
    QLabel *label_2;
    QPushButton *cp3_btn;
    QLabel *log_txt1;
    QLineEdit *log_pass;
    QPushButton *cp1_btn;
    QPushButton *cp2_btn;
    QLineEdit *log_pem;
    QPushButton *log_url_btn;
    QLabel *log_txt2;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_3;
    QPushButton *log_btn;
    QPushButton *help_btn;
    QGroupBox *add_group;
    QGridLayout *gridLayout_2;
    QLineEdit *add_domain;
    QLabel *add_txt;
    QLabel *label_8;
    QLabel *label_6;
    QLineEdit *add_name;
    QPushButton *cp1_btn_2;
    QLineEdit *add_pass;
    QPushButton *add_btn;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *del_group;
    QGridLayout *gridLayout_3;
    QLabel *label_7;
    QLabel *label_10;
    QLabel *del_txt;
    QPushButton *cp1_btn_3;
    QLabel *label_9;
    QLineEdit *del_domain;
    QSpacerItem *verticalSpacer;
    QPushButton *del_btn;
    QLineEdit *del_name;
    QLineEdit *del_pass;
    QPushButton *list_btn;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(893, 780);
        Widget->setMinimumSize(QSize(0, 780));
        Widget->setMaximumSize(QSize(893, 780));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Widget->setWindowIcon(icon);
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 245, 203);"));
        gridLayout_4 = new QGridLayout(Widget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_11 = new QLabel(Widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(0, 150));
        QFont font;
        font.setPointSize(30);
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255, 255);\n"
"border-radius : 30px;"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_11, 0, 0, 1, 2);

        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font1;
        font1.setPointSize(13);
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QString::fromUtf8("background-image: \"\";\n"
"background-color: rgba(255, 255, 255,180);\n"
"font-size : 13pt;\n"
"border-radius : 7px;\n"
"\n"
""));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,0);"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        log_domain = new QLineEdit(groupBox);
        log_domain->setObjectName(QString::fromUtf8("log_domain"));
        log_domain->setMinimumSize(QSize(0, 35));
        log_domain->setMaximumSize(QSize(16777215, 35));
        log_domain->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue"));

        gridLayout->addWidget(log_domain, 2, 1, 1, 2);

        log_txt3 = new QLabel(groupBox);
        log_txt3->setObjectName(QString::fromUtf8("log_txt3"));
        log_txt3->setMinimumSize(QSize(100, 41));
        log_txt3->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue;\n"
"max-height : 35px;\n"
"min-height : 35px"));

        gridLayout->addWidget(log_txt3, 4, 3, 1, 1);

        log_name = new QLineEdit(groupBox);
        log_name->setObjectName(QString::fromUtf8("log_name"));
        log_name->setMinimumSize(QSize(300, 35));
        log_name->setMaximumSize(QSize(300, 35));
        log_name->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue"));

        gridLayout->addWidget(log_name, 1, 1, 1, 2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        cp3_btn = new QPushButton(groupBox);
        cp3_btn->setObjectName(QString::fromUtf8("cp3_btn"));
        cp3_btn->setMinimumSize(QSize(0, 35));
        cp3_btn->setMaximumSize(QSize(16777215, 35));
        cp3_btn->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue;\n"
"background-color: qlineargradient(spread:pad, x1:0.483, y1:1, x2:0.5, y2:0, stop:0 rgba(57, 111, 189, 255), stop:0.295455 rgba(201, 212, 236, 255), stop:0.505682 rgba(216, 223, 236, 255), stop:0.710227 rgba(203, 222, 255, 255), stop:1 rgba(52, 101, 255, 255));\n"
""));

        gridLayout->addWidget(cp3_btn, 4, 4, 1, 1);

        log_txt1 = new QLabel(groupBox);
        log_txt1->setObjectName(QString::fromUtf8("log_txt1"));
        log_txt1->setMinimumSize(QSize(100, 41));
        log_txt1->setMaximumSize(QSize(400, 41));
        log_txt1->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue;\n"
"max-height : 35px;\n"
"min-height : 35px"));

        gridLayout->addWidget(log_txt1, 2, 3, 1, 1);

        log_pass = new QLineEdit(groupBox);
        log_pass->setObjectName(QString::fromUtf8("log_pass"));
        log_pass->setMinimumSize(QSize(0, 35));
        log_pass->setMaximumSize(QSize(16777215, 35));
        log_pass->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue"));

        gridLayout->addWidget(log_pass, 4, 1, 1, 2);

        cp1_btn = new QPushButton(groupBox);
        cp1_btn->setObjectName(QString::fromUtf8("cp1_btn"));
        cp1_btn->setMinimumSize(QSize(0, 35));
        cp1_btn->setMaximumSize(QSize(16777215, 35));
        cp1_btn->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue;\n"
"background-color: qlineargradient(spread:pad, x1:0.483, y1:1, x2:0.5, y2:0, stop:0 rgba(57, 111, 189, 255), stop:0.295455 rgba(201, 212, 236, 255), stop:0.505682 rgba(216, 223, 236, 255), stop:0.710227 rgba(203, 222, 255, 255), stop:1 rgba(52, 101, 255, 255));\n"
""));

        gridLayout->addWidget(cp1_btn, 2, 4, 1, 1);

        cp2_btn = new QPushButton(groupBox);
        cp2_btn->setObjectName(QString::fromUtf8("cp2_btn"));
        cp2_btn->setMinimumSize(QSize(0, 35));
        cp2_btn->setMaximumSize(QSize(16777215, 35));
        cp2_btn->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue;\n"
"background-color: qlineargradient(spread:pad, x1:0.483, y1:1, x2:0.5, y2:0, stop:0 rgba(57, 111, 189, 255), stop:0.295455 rgba(201, 212, 236, 255), stop:0.505682 rgba(216, 223, 236, 255), stop:0.710227 rgba(203, 222, 255, 255), stop:1 rgba(52, 101, 255, 255));\n"
""));

        gridLayout->addWidget(cp2_btn, 3, 4, 1, 1);

        log_pem = new QLineEdit(groupBox);
        log_pem->setObjectName(QString::fromUtf8("log_pem"));
        log_pem->setEnabled(false);
        log_pem->setMinimumSize(QSize(0, 35));
        log_pem->setMaximumSize(QSize(16777215, 35));
        log_pem->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue"));

        gridLayout->addWidget(log_pem, 3, 2, 1, 1);

        log_url_btn = new QPushButton(groupBox);
        log_url_btn->setObjectName(QString::fromUtf8("log_url_btn"));
        log_url_btn->setMinimumSize(QSize(0, 35));
        log_url_btn->setMaximumSize(QSize(16777215, 35));
        log_url_btn->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue;\n"
"background-color: qlineargradient(spread:pad, x1:0.483, y1:1, x2:0.5, y2:0, stop:0 rgba(57, 111, 189, 255), stop:0.295455 rgba(201, 212, 236, 255), stop:0.505682 rgba(216, 223, 236, 255), stop:0.710227 rgba(203, 222, 255, 255), stop:1 rgba(52, 101, 255, 255));\n"
""));

        gridLayout->addWidget(log_url_btn, 3, 1, 1, 1);

        log_txt2 = new QLabel(groupBox);
        log_txt2->setObjectName(QString::fromUtf8("log_txt2"));
        log_txt2->setMinimumSize(QSize(100, 41));
        log_txt2->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue;\n"
"max-height : 35px;\n"
"min-height : 35px"));

        gridLayout->addWidget(log_txt2, 3, 3, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 0, 1, 1, 1);

        log_btn = new QPushButton(groupBox);
        log_btn->setObjectName(QString::fromUtf8("log_btn"));
        log_btn->setMinimumSize(QSize(0, 35));
        log_btn->setMaximumSize(QSize(16777215, 35));
        log_btn->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue;\n"
"background-color: qlineargradient(spread:pad, x1:0.483, y1:1, x2:0.5, y2:0, stop:0 rgba(57, 111, 189, 255), stop:0.295455 rgba(201, 212, 236, 255), stop:0.505682 rgba(216, 223, 236, 255), stop:0.710227 rgba(203, 222, 255, 255), stop:1 rgba(52, 101, 255, 255));\n"
""));

        gridLayout->addWidget(log_btn, 1, 3, 1, 1);

        help_btn = new QPushButton(groupBox);
        help_btn->setObjectName(QString::fromUtf8("help_btn"));
        help_btn->setMinimumSize(QSize(0, 35));
        help_btn->setMaximumSize(QSize(16777215, 35));
        help_btn->setFont(font1);
        help_btn->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightgrey;\n"
"background-color: grey;\n"
"color : white;\n"
""));

        gridLayout->addWidget(help_btn, 1, 4, 1, 1);


        gridLayout_4->addWidget(groupBox, 1, 0, 1, 1);

        add_group = new QGroupBox(Widget);
        add_group->setObjectName(QString::fromUtf8("add_group"));
        add_group->setFont(font1);
        add_group->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,180);\n"
"font-size : 13pt;\n"
"border-radius : 7px;\n"
"background-image: none"));
        gridLayout_2 = new QGridLayout(add_group);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        add_domain = new QLineEdit(add_group);
        add_domain->setObjectName(QString::fromUtf8("add_domain"));
        add_domain->setMinimumSize(QSize(0, 35));
        add_domain->setMaximumSize(QSize(16777215, 35));
        add_domain->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue"));

        gridLayout_2->addWidget(add_domain, 2, 1, 1, 2);

        add_txt = new QLabel(add_group);
        add_txt->setObjectName(QString::fromUtf8("add_txt"));
        add_txt->setMinimumSize(QSize(100, 41));
        add_txt->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue;\n"
"max-height : 35px;\n"
"min-height : 35px"));

        gridLayout_2->addWidget(add_txt, 2, 3, 1, 1);

        label_8 = new QLabel(add_group);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout_2->addWidget(label_8, 3, 0, 1, 1);

        label_6 = new QLabel(add_group);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout_2->addWidget(label_6, 2, 0, 1, 1);

        add_name = new QLineEdit(add_group);
        add_name->setObjectName(QString::fromUtf8("add_name"));
        add_name->setMinimumSize(QSize(0, 35));
        add_name->setMaximumSize(QSize(16777215, 35));
        add_name->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue"));

        gridLayout_2->addWidget(add_name, 1, 1, 1, 2);

        cp1_btn_2 = new QPushButton(add_group);
        cp1_btn_2->setObjectName(QString::fromUtf8("cp1_btn_2"));
        cp1_btn_2->setMinimumSize(QSize(0, 35));
        cp1_btn_2->setMaximumSize(QSize(16777215, 35));
        cp1_btn_2->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue;\n"
"background-color: qlineargradient(spread:pad, x1:0.483, y1:1, x2:0.5, y2:0, stop:0 rgba(57, 111, 189, 255), stop:0.295455 rgba(201, 212, 236, 255), stop:0.505682 rgba(216, 223, 236, 255), stop:0.710227 rgba(203, 222, 255, 255), stop:1 rgba(52, 101, 255, 255));\n"
""));

        gridLayout_2->addWidget(cp1_btn_2, 3, 3, 1, 1);

        add_pass = new QLineEdit(add_group);
        add_pass->setObjectName(QString::fromUtf8("add_pass"));
        add_pass->setMinimumSize(QSize(0, 35));
        add_pass->setMaximumSize(QSize(16777215, 35));
        add_pass->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue"));

        gridLayout_2->addWidget(add_pass, 3, 1, 1, 2);

        add_btn = new QPushButton(add_group);
        add_btn->setObjectName(QString::fromUtf8("add_btn"));
        add_btn->setMinimumSize(QSize(0, 35));
        add_btn->setMaximumSize(QSize(16777215, 35));
        add_btn->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue;\n"
"background-color: qlineargradient(spread:pad, x1:0.483, y1:1, x2:0.5, y2:0, stop:0 rgba(57, 111, 189, 255), stop:0.295455 rgba(201, 212, 236, 255), stop:0.505682 rgba(216, 223, 236, 255), stop:0.710227 rgba(203, 222, 255, 255), stop:1 rgba(52, 101, 255, 255));\n"
""));

        gridLayout_2->addWidget(add_btn, 1, 3, 1, 1);

        label_5 = new QLabel(add_group);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 0, 0, 1, 1);


        gridLayout_4->addWidget(add_group, 2, 0, 1, 1);

        del_group = new QGroupBox(Widget);
        del_group->setObjectName(QString::fromUtf8("del_group"));
        del_group->setFont(font1);
        del_group->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255,180);\n"
"font-size : 13pt;\n"
"border-radius : 7px;\n"
""));
        gridLayout_3 = new QGridLayout(del_group);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_7 = new QLabel(del_group);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        label_10 = new QLabel(del_group);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout_3->addWidget(label_10, 3, 0, 1, 1);

        del_txt = new QLabel(del_group);
        del_txt->setObjectName(QString::fromUtf8("del_txt"));
        del_txt->setMinimumSize(QSize(100, 41));
        del_txt->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue;\n"
"max-height : 35px;\n"
"min-height : 35px"));

        gridLayout_3->addWidget(del_txt, 3, 3, 1, 1);

        cp1_btn_3 = new QPushButton(del_group);
        cp1_btn_3->setObjectName(QString::fromUtf8("cp1_btn_3"));
        cp1_btn_3->setMinimumSize(QSize(0, 35));
        cp1_btn_3->setMaximumSize(QSize(16777215, 35));
        cp1_btn_3->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue;\n"
"background-color: qlineargradient(spread:pad, x1:0.483, y1:1, x2:0.5, y2:0, stop:0 rgba(57, 111, 189, 255), stop:0.295455 rgba(201, 212, 236, 255), stop:0.505682 rgba(216, 223, 236, 255), stop:0.710227 rgba(203, 222, 255, 255), stop:1 rgba(52, 101, 255, 255));\n"
""));

        gridLayout_3->addWidget(cp1_btn_3, 4, 3, 1, 1);

        label_9 = new QLabel(del_group);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 0);"));

        gridLayout_3->addWidget(label_9, 4, 0, 1, 1);

        del_domain = new QLineEdit(del_group);
        del_domain->setObjectName(QString::fromUtf8("del_domain"));
        del_domain->setMinimumSize(QSize(0, 35));
        del_domain->setMaximumSize(QSize(16777215, 35));
        del_domain->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue"));

        gridLayout_3->addWidget(del_domain, 3, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer, 0, 0, 1, 1);

        del_btn = new QPushButton(del_group);
        del_btn->setObjectName(QString::fromUtf8("del_btn"));
        del_btn->setMinimumSize(QSize(0, 35));
        del_btn->setMaximumSize(QSize(16777215, 35));
        del_btn->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue;\n"
"background-color: qlineargradient(spread:pad, x1:0.483, y1:1, x2:0.5, y2:0, stop:0 rgba(57, 111, 189, 255), stop:0.295455 rgba(201, 212, 236, 255), stop:0.505682 rgba(216, 223, 236, 255), stop:0.710227 rgba(203, 222, 255, 255), stop:1 rgba(52, 101, 255, 255));\n"
""));

        gridLayout_3->addWidget(del_btn, 2, 3, 1, 1);

        del_name = new QLineEdit(del_group);
        del_name->setObjectName(QString::fromUtf8("del_name"));
        del_name->setMinimumSize(QSize(0, 35));
        del_name->setMaximumSize(QSize(16777215, 35));
        del_name->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue"));

        gridLayout_3->addWidget(del_name, 2, 1, 1, 2);

        del_pass = new QLineEdit(del_group);
        del_pass->setObjectName(QString::fromUtf8("del_pass"));
        del_pass->setMinimumSize(QSize(0, 35));
        del_pass->setMaximumSize(QSize(16777215, 35));
        del_pass->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue"));

        gridLayout_3->addWidget(del_pass, 4, 1, 1, 2);

        list_btn = new QPushButton(del_group);
        list_btn->setObjectName(QString::fromUtf8("list_btn"));
        list_btn->setMinimumSize(QSize(0, 35));
        list_btn->setMaximumSize(QSize(16777215, 35));
        list_btn->setStyleSheet(QString::fromUtf8("border-radius : 5px;\n"
"border : 3px solid lightblue;\n"
"background-color: qlineargradient(spread:pad, x1:0.483, y1:1, x2:0.5, y2:0, stop:0 rgba(57, 111, 189, 255), stop:0.295455 rgba(201, 212, 236, 255), stop:0.505682 rgba(216, 223, 236, 255), stop:0.710227 rgba(203, 222, 255, 255), stop:1 rgba(52, 101, 255, 255));\n"
""));

        gridLayout_3->addWidget(list_btn, 1, 1, 1, 2);


        gridLayout_4->addWidget(del_group, 3, 0, 1, 1);

        QWidget::setTabOrder(log_name, log_domain);
        QWidget::setTabOrder(log_domain, log_url_btn);
        QWidget::setTabOrder(log_url_btn, log_pass);
        QWidget::setTabOrder(log_pass, log_btn);
        QWidget::setTabOrder(log_btn, cp1_btn);
        QWidget::setTabOrder(cp1_btn, cp2_btn);
        QWidget::setTabOrder(cp2_btn, cp3_btn);
        QWidget::setTabOrder(cp3_btn, add_name);
        QWidget::setTabOrder(add_name, add_domain);
        QWidget::setTabOrder(add_domain, add_pass);
        QWidget::setTabOrder(add_pass, add_btn);
        QWidget::setTabOrder(add_btn, cp1_btn_2);
        QWidget::setTabOrder(cp1_btn_2, del_name);
        QWidget::setTabOrder(del_name, del_domain);
        QWidget::setTabOrder(del_domain, del_pass);
        QWidget::setTabOrder(del_pass, del_btn);
        QWidget::setTabOrder(del_btn, cp1_btn_3);
        QWidget::setTabOrder(cp1_btn_3, log_pem);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        label_11->setText(QApplication::translate("Widget", "Aisleschool \343\203\254\343\203\203\343\202\271\343\203\263 \343\202\265\343\203\274\343\203\220\343\203\274 \343\202\242\343\202\253\343\202\246\343\203\263\343\203\210 \343\203\236\343\203\215\343\203\274\343\202\270\343\203\243\343\203\274", nullptr));
        groupBox->setTitle(QApplication::translate("Widget", "\343\200\220VPS\343\203\255\343\202\260\343\202\244\343\203\263\343\200\221", nullptr));
        label->setText(QApplication::translate("Widget", "\343\203\246\343\203\274\343\202\266\343\203\274\345\220\215", nullptr));
        label_4->setText(QApplication::translate("Widget", "\343\203\221\343\202\271\343\203\257\343\203\274\343\203\211", nullptr));
        log_txt3->setText(QString());
        label_2->setText(QApplication::translate("Widget", "\343\203\211\343\203\241\343\202\244\343\203\263", nullptr));
        cp3_btn->setText(QApplication::translate("Widget", "\343\202\263\343\203\224\343\203\2743", nullptr));
        log_txt1->setText(QString());
        cp1_btn->setText(QApplication::translate("Widget", "\343\202\263\343\203\224\343\203\2741", nullptr));
        cp2_btn->setText(QApplication::translate("Widget", "\343\202\263\343\203\224\343\203\2742", nullptr));
        log_url_btn->setText(QApplication::translate("Widget", "\343\203\225\343\202\241\343\202\244\343\203\253\343\202\222\351\226\213\343\201\217", nullptr));
        log_txt2->setText(QString());
        label_3->setText(QApplication::translate("Widget", "pem\343\203\225\343\202\241\343\202\244\343\203\253\343\201\256URL", nullptr));
        log_btn->setText(QApplication::translate("Widget", "\347\224\237\346\210\220", nullptr));
        help_btn->setText(QApplication::translate("Widget", "(?)", nullptr));
        add_group->setTitle(QApplication::translate("Widget", "\343\200\220\343\203\246\343\203\274\343\202\266\343\203\274\343\202\222\350\277\275\345\212\240\343\200\221", nullptr));
        add_txt->setText(QString());
        label_8->setText(QApplication::translate("Widget", "\343\203\221\343\202\271\343\203\257\343\203\274\343\203\211", nullptr));
        label_6->setText(QApplication::translate("Widget", "\343\203\211\343\203\241\343\202\244\343\203\263", nullptr));
        cp1_btn_2->setText(QApplication::translate("Widget", "\343\202\263\343\203\224\343\203\274", nullptr));
        add_btn->setText(QApplication::translate("Widget", "\347\224\237\346\210\220", nullptr));
        label_5->setText(QApplication::translate("Widget", "\343\203\246\343\203\274\343\202\266\343\203\274\345\220\215", nullptr));
        del_group->setTitle(QApplication::translate("Widget", "\343\200\220\343\203\246\343\203\274\343\202\266\343\203\274\343\201\256\345\211\212\351\231\244\343\200\221", nullptr));
        label_7->setText(QApplication::translate("Widget", "\343\203\246\343\203\274\343\202\266\343\203\274\345\220\215", nullptr));
        label_10->setText(QApplication::translate("Widget", "\343\203\211\343\203\241\343\202\244\343\203\263", nullptr));
        del_txt->setText(QString());
        cp1_btn_3->setText(QApplication::translate("Widget", "\343\202\263\343\203\224\343\203\274", nullptr));
        label_9->setText(QApplication::translate("Widget", "\343\203\221\343\202\271\343\203\257\343\203\274\343\203\211", nullptr));
        del_btn->setText(QApplication::translate("Widget", "\347\224\237\346\210\220", nullptr));
        list_btn->setText(QApplication::translate("Widget", "\343\203\246\343\203\274\343\202\266\343\203\274\343\203\252\343\202\271\343\203\210\343\202\263\343\203\236\343\203\263\343\203\211\343\201\256\343\202\263\343\203\224\343\203\274", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
