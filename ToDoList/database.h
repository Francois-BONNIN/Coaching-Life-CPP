#ifndef DATABASE_H
#define DATABASE_H

#include "task.h"
#include "mainwindow.h"
#include "task.h"
#include <ui_mainwindow.h>

#include <QString>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>

#include <typeinfo>
#include <QStatusBar>

class Database
{
public:
    Database();
    bool connect(QString bdd_name);

    static Task search(QString search);
    static bool findCoach();
    static bool insertTask(QString title, QString description, int completed, int id_category);
    static bool update(QString title, QString description, int completed, int id_category);
    static bool updateTodo(QString title);
    static bool updateFinish(QString title);
    void show(QString title);
    static bool remove(QString title);
    static int countToDo();
    static int countFinish();

};

#endif // DATABASE_H
