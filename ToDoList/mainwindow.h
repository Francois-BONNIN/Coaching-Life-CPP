#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "task.h"
#include "database.h"
#include "category.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlRecord>
#include <qlistwidget.h>




QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void populateList();
    void populateListRight();
    void populateListLeft();
    void intCountTodo();
    void intCountFinish();
    void fillCatList();
    void readItemTodo();
    void readItemFinished();


private slots:
    void on_addButton_clicked();

    void on_listTodo_itemClicked(QListWidgetItem *item);

    void on_editButton_clicked();

    void on_deleteButton_clicked();

    void on_syncButton_clicked();

    void on_coachButton_clicked();

    void on_listFinish_itemClicked(QListWidgetItem *item);

    void on_listFinish_itemPressed(QListWidgetItem *item);

    void on_listTodo_itemPressed(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;
    QList<Category*> listCat;
    QList<Task*> listTasksTodo;
    Task* selectedTask;
};
#endif // MAINWINDOW_H
