/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *titleTodo;
    QListWidget *listTodo;
    QHBoxLayout *horizontalLayout_5;
    QLabel *countTodoLabel;
    QLabel *countTodoInt;
    QFrame *line_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *titleFinish;
    QListWidget *listFinish;
    QHBoxLayout *horizontalLayout_6;
    QLabel *countFinishLabel;
    QLabel *countFinishInt;
    QFrame *line_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *syncButton;
    QPushButton *coachButton;
    QFormLayout *formLayout;
    QSpacerItem *verticalSpacer;
    QLabel *nomLabel;
    QLineEdit *nomEdit;
    QLabel *descriptionLabel;
    QPlainTextEdit *descriptionEdit;
    QLabel *categorieLabel;
    QListWidget *catListWidget;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QPushButton *addButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(813, 491);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setBaseSize(QSize(0, 0));
        MainWindow->setStyleSheet(QString::fromUtf8(" background-color :#525252;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 0, -1);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Roboto"));
        font.setPointSize(19);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:#FFF;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 60);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(20);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, -1);
        titleTodo = new QLabel(centralwidget);
        titleTodo->setObjectName(QString::fromUtf8("titleTodo"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Roboto"));
        font1.setPointSize(14);
        titleTodo->setFont(font1);
        titleTodo->setStyleSheet(QString::fromUtf8("color:#d62b5c;"));
        titleTodo->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(titleTodo);

        listTodo = new QListWidget(centralwidget);
        listTodo->setObjectName(QString::fromUtf8("listTodo"));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        listTodo->setFont(font2);
        listTodo->setAcceptDrops(true);
        listTodo->setStyleSheet(QString::fromUtf8("QListView { background-color :#313131; color : #FFF; font-size: 15pt; font-weight: bold; }\n"
"QListView::item { background-color: #d62b5c; padding: 7%;}\n"
"QListView::item::hover { background-color: #c12753 }"));
        listTodo->setProperty("showDropIndicator", QVariant(true));
        listTodo->setDragEnabled(true);
        listTodo->setDragDropMode(QAbstractItemView::DragDrop);
        listTodo->setDefaultDropAction(Qt::MoveAction);

        verticalLayout_3->addWidget(listTodo);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, -1, 0);
        countTodoLabel = new QLabel(centralwidget);
        countTodoLabel->setObjectName(QString::fromUtf8("countTodoLabel"));
        QFont font3;
        font3.setPointSize(10);
        countTodoLabel->setFont(font3);
        countTodoLabel->setStyleSheet(QString::fromUtf8("color : #FFFFFF;"));
        countTodoLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(countTodoLabel);

        countTodoInt = new QLabel(centralwidget);
        countTodoInt->setObjectName(QString::fromUtf8("countTodoInt"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Roboto"));
        font4.setPointSize(10);
        countTodoInt->setFont(font4);
        countTodoInt->setStyleSheet(QString::fromUtf8("color : #FFF;"));

        horizontalLayout_5->addWidget(countTodoInt);


        verticalLayout_3->addLayout(horizontalLayout_5);


        horizontalLayout_2->addLayout(verticalLayout_3);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(20);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, -1, 0, -1);
        titleFinish = new QLabel(centralwidget);
        titleFinish->setObjectName(QString::fromUtf8("titleFinish"));
        titleFinish->setFont(font1);
        titleFinish->setStyleSheet(QString::fromUtf8("color :#00ef75;"));
        titleFinish->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(titleFinish);

        listFinish = new QListWidget(centralwidget);
        listFinish->setObjectName(QString::fromUtf8("listFinish"));
        listFinish->setFont(font2);
        listFinish->setAcceptDrops(true);
        listFinish->setStyleSheet(QString::fromUtf8("QListView { background-color :#313131; color : #FFF; font-size: 15pt; font-weight: bold; }\n"
"QListView::item { background-color: #00ef75; padding: 7%; }\n"
"QListView::item::hover { background-color: #00d769 }"));
        listFinish->setProperty("showDropIndicator", QVariant(true));
        listFinish->setDragEnabled(true);
        listFinish->setDragDropMode(QAbstractItemView::DragDrop);
        listFinish->setDefaultDropAction(Qt::MoveAction);

        verticalLayout_4->addWidget(listFinish);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(10);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        countFinishLabel = new QLabel(centralwidget);
        countFinishLabel->setObjectName(QString::fromUtf8("countFinishLabel"));
        countFinishLabel->setFont(font3);
        countFinishLabel->setStyleSheet(QString::fromUtf8("color : #FFFFFF;"));
        countFinishLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(countFinishLabel);

        countFinishInt = new QLabel(centralwidget);
        countFinishInt->setObjectName(QString::fromUtf8("countFinishInt"));
        countFinishInt->setFont(font4);
        countFinishInt->setStyleSheet(QString::fromUtf8("color : #FFF;"));

        horizontalLayout_6->addWidget(countFinishInt);


        verticalLayout_4->addLayout(horizontalLayout_6);


        horizontalLayout_2->addLayout(verticalLayout_4);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout);

        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_4);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, 0, 0);
        syncButton = new QPushButton(centralwidget);
        syncButton->setObjectName(QString::fromUtf8("syncButton"));
        QFont font5;
        font5.setPointSize(11);
        font5.setBold(true);
        font5.setWeight(75);
        syncButton->setFont(font5);
        syncButton->setLayoutDirection(Qt::LeftToRight);
        syncButton->setAutoFillBackground(false);
        syncButton->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"	color : #FFF;\n"
"     border: 2px solid #8f8f91;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #2B2B2B, stop: 1 #333333);\n"
"     padding: 5%;\n"
" }\n"
"\n"
" QPushButton:hover {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #333333, stop: 1 #2B2B2B);\n"
" } \n"
"\n"
" QPushButton:pressed {\n"
"	color : #000;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
" \n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }\n"
" \n"
" QPushButton:default {\n"
"     border-color: navy; /* make the default button prominent */\n"
" }"));
        syncButton->setCheckable(false);
        syncButton->setAutoDefault(false);

        verticalLayout_2->addWidget(syncButton);

        coachButton = new QPushButton(centralwidget);
        coachButton->setObjectName(QString::fromUtf8("coachButton"));
        coachButton->setFont(font5);
        coachButton->setLayoutDirection(Qt::LeftToRight);
        coachButton->setAutoFillBackground(false);
        coachButton->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"	color : #FFF;\n"
"     border: 2px solid #8f8f91;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #3CB371, stop: 1 #2E8B57	);\n"
"     padding: 5%;\n"
" }\n"
"\n"
" QPushButton:hover {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #2E8B57, stop: 1 #3CB371);\n"
" } \n"
"\n"
" QPushButton:pressed {\n"
"	color : #000;\n"
"    background-color:#20B2AA;\n"
" }\n"
" \n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }\n"
" \n"
" QPushButton:default {\n"
"     border-color: navy; /* make the default button prominent */\n"
" }"));
        coachButton->setCheckable(false);
        coachButton->setAutoDefault(false);

        verticalLayout_2->addWidget(coachButton);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setHorizontalSpacing(11);
        formLayout->setVerticalSpacing(15);
        formLayout->setContentsMargins(-1, -1, 0, -1);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(3, QFormLayout::FieldRole, verticalSpacer);

        nomLabel = new QLabel(centralwidget);
        nomLabel->setObjectName(QString::fromUtf8("nomLabel"));
        nomLabel->setFont(font4);
        nomLabel->setStyleSheet(QString::fromUtf8("color : #FFF;"));

        formLayout->setWidget(4, QFormLayout::LabelRole, nomLabel);

        nomEdit = new QLineEdit(centralwidget);
        nomEdit->setObjectName(QString::fromUtf8("nomEdit"));
        nomEdit->setFont(font3);
        nomEdit->setStyleSheet(QString::fromUtf8("color: #FFF;"));
        nomEdit->setFrame(true);
        nomEdit->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(4, QFormLayout::FieldRole, nomEdit);

        descriptionLabel = new QLabel(centralwidget);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));
        descriptionLabel->setFont(font4);
        descriptionLabel->setStyleSheet(QString::fromUtf8("color : #FFF;"));

        formLayout->setWidget(5, QFormLayout::LabelRole, descriptionLabel);

        descriptionEdit = new QPlainTextEdit(centralwidget);
        descriptionEdit->setObjectName(QString::fromUtf8("descriptionEdit"));
        QFont font6;
        font6.setPointSize(10);
        font6.setBold(false);
        font6.setWeight(50);
        descriptionEdit->setFont(font6);
        descriptionEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        descriptionEdit->setMouseTracking(true);
        descriptionEdit->setStyleSheet(QString::fromUtf8("color: #FFF;"));
        descriptionEdit->setFrameShape(QFrame::Box);
        descriptionEdit->setFrameShadow(QFrame::Plain);
        descriptionEdit->setLineWidth(2);
        descriptionEdit->setMidLineWidth(5);
        descriptionEdit->setTabStopWidth(79);

        formLayout->setWidget(5, QFormLayout::FieldRole, descriptionEdit);

        categorieLabel = new QLabel(centralwidget);
        categorieLabel->setObjectName(QString::fromUtf8("categorieLabel"));
        categorieLabel->setFont(font4);
        categorieLabel->setStyleSheet(QString::fromUtf8("color : #FFF;"));

        formLayout->setWidget(6, QFormLayout::LabelRole, categorieLabel);

        catListWidget = new QListWidget(centralwidget);
        catListWidget->setObjectName(QString::fromUtf8("catListWidget"));
        catListWidget->setFont(font4);
        catListWidget->setStyleSheet(QString::fromUtf8("color: #FFF;"));
        catListWidget->setFrameShape(QFrame::Box);
        catListWidget->setFrameShadow(QFrame::Plain);
        catListWidget->setLineWidth(2);
        catListWidget->setMidLineWidth(5);
        catListWidget->setSpacing(2);

        formLayout->setWidget(6, QFormLayout::FieldRole, catListWidget);


        verticalLayout_2->addLayout(formLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, -1, 10);
        editButton = new QPushButton(centralwidget);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setLayoutDirection(Qt::LeftToRight);
        editButton->setAutoFillBackground(false);
        editButton->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"	color : #000;\n"
"     border: 2px solid #8f8f91;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"     padding: 5%;\n"
" }\n"
" \n"
" QPushButton:hover {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"	color : #FFF;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #2B2B2B, stop: 1 #333333);\n"
" }\n"
" \n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }\n"
" \n"
" QPushButton:default {\n"
"     border-color: navy; /* make the default button prominent */\n"
" }"));
        editButton->setCheckable(false);
        editButton->setAutoDefault(false);

        horizontalLayout_3->addWidget(editButton);

        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setLayoutDirection(Qt::LeftToRight);
        deleteButton->setAutoFillBackground(false);
        deleteButton->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"	color : #000;\n"
"     border: 2px solid #8f8f91;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"     padding: 5%;\n"
" }\n"
" \n"
" QPushButton:hover {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"	color : #FFF;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #2B2B2B, stop: 1 #333333);\n"
" }\n"
" \n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }\n"
" \n"
" QPushButton:default {\n"
"     border-color: navy; /* make the default button prominent */\n"
" }"));
        deleteButton->setCheckable(false);
        deleteButton->setAutoDefault(false);

        horizontalLayout_3->addWidget(deleteButton);


        verticalLayout_2->addLayout(horizontalLayout_3);

        addButton = new QPushButton(centralwidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setLayoutDirection(Qt::LeftToRight);
        addButton->setAutoFillBackground(false);
        addButton->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"	color : #000;\n"
"     border: 2px solid #8f8f91;\n"
"     border-radius: 6px;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"     padding: 5%;\n"
" }\n"
" \n"
" QPushButton:hover {\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
" }\n"
"\n"
" QPushButton:pressed {\n"
"	color : #FFF;\n"
"     background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                       stop: 0 #2B2B2B, stop: 1 #333333);\n"
" }\n"
" \n"
" QPushButton:flat {\n"
"     border: none; /* no border for a flat push button */\n"
" }\n"
" \n"
" QPushButton:default {\n"
"     border-color: navy; /* make the default button prominent */\n"
" }"));
        addButton->setCheckable(false);
        addButton->setAutoDefault(false);

        verticalLayout_2->addWidget(addButton);


        horizontalLayout->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 813, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(statusbar->sizePolicy().hasHeightForWidth());
        statusbar->setSizePolicy(sizePolicy1);
        QFont font7;
        font7.setPointSize(11);
        font7.setBold(true);
        font7.setUnderline(true);
        font7.setWeight(75);
        statusbar->setFont(font7);
        statusbar->setStyleSheet(QString::fromUtf8("color : #FFF;"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "T\303\242ches", nullptr));
        titleTodo->setText(QCoreApplication::translate("MainWindow", "A r\303\251aliser", nullptr));
        countTodoLabel->setText(QCoreApplication::translate("MainWindow", "Nombre de t\303\242ches restantes : ", nullptr));
        countTodoInt->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        titleFinish->setText(QCoreApplication::translate("MainWindow", "Termin\303\251e", nullptr));
        countFinishLabel->setText(QCoreApplication::translate("MainWindow", "Nombre de t\303\242ches finis : ", nullptr));
        countFinishInt->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        syncButton->setText(QCoreApplication::translate("MainWindow", "Synchroniser", nullptr));
        coachButton->setText(QCoreApplication::translate("MainWindow", "Ajouter une t\303\242che - Coaching Life", nullptr));
        nomLabel->setText(QCoreApplication::translate("MainWindow", "Nom :", nullptr));
        nomEdit->setText(QString());
        descriptionLabel->setText(QCoreApplication::translate("MainWindow", "Description :", nullptr));
        descriptionEdit->setPlainText(QString());
        categorieLabel->setText(QCoreApplication::translate("MainWindow", "Cat\303\251gorie :", nullptr));
        editButton->setText(QCoreApplication::translate("MainWindow", "Editer", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "Ajouter", nullptr));
#if QT_CONFIG(accessibility)
        statusbar->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
