#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <qstatusbar.h>
#include <qvariant.h>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Database db;
    db.connect("database.sqlite");
    populateList();
    QStatusBar *statusBar = this->statusBar();
    fillCatList();
}

MainWindow::~MainWindow()
{

}

void MainWindow::populateListRight()
{
    QSqlQuery query ("SELECT * FROM tasks WHERE completed=1");
    int idtitle = query.record().indexOf("title");
    int iddescription = query.record().indexOf("description");
    int idcompleted = query.record().indexOf("completed");
    int idcategory = query.record().indexOf("id_category");
    listTasksTodo.clear();

    while (query.next()) {
        QString title = query.value(idtitle).toString();
        QString description = query.value(iddescription).toString();
        int completed = query.value(idcompleted).toInt();
        int id_category = query.value(idcategory).toInt();
        Task* newTask = new Task(title, description, completed, id_category);

        if(newTask != nullptr)
        {
          listTasksTodo.append(newTask);
        }
    }
    for(const auto task : listTasksTodo){
        ui->listFinish->addItem(task->titre());
    }
}

void MainWindow::populateListLeft()
{
    QSqlQuery query ("SELECT * FROM tasks WHERE completed=0");
    int idtitle = query.record().indexOf("title");
    int iddescription = query.record().indexOf("description");
    int idcompleted = query.record().indexOf("completed");
    int idcategory = query.record().indexOf("id_category");
    listTasksTodo.clear();

    while (query.next()) {
        QString title = query.value(idtitle).toString();
        QString description = query.value(iddescription).toString();
        int completed = query.value(idcompleted).toInt();
        int id_category = query.value(idcategory).toInt();
        Task* newTask = new Task(title, description, completed, id_category);

        if(newTask != nullptr)
        {
          listTasksTodo.append(newTask);
        }
    }
    for(const auto task : listTasksTodo){
        ui->listTodo->addItem(task->titre());
    }
}

void MainWindow::intCountTodo()
{
    QString count = QVariant(Database::countToDo()).toString();
    ui->countTodoInt->setText(count);
}

void MainWindow::intCountFinish()
{
    QString count = QVariant(Database::countFinish()).toString();
    ui->countFinishInt->setText(count);

}

void MainWindow::fillCatList()
{
    QSqlQuery query("SELECT * FROM categories");
    query.exec();
    int idID = query.record().indexOf("id");
    int idtitle = query.record().indexOf("title");

    while (query.next()){
        int id = query.value(idID).toInt();
        QString title = query.value(idtitle).toString();
        Category* newCat = new Category(id, title);

        if(newCat != nullptr){
            listCat.append(newCat);
        }
    }
    for(const auto cat : listCat){
        ui->catListWidget->addItem(cat->title());
    }

}

void MainWindow::readItemTodo()
{
    for(int i = 0; i < ui->listTodo->count(); ++i)
    {
        QString title = ui->listTodo->item(i)->text();
        if(Database::updateTodo(title)){
            statusBar()->showMessage("Tâches actualisé");
        }
    }
}

void MainWindow::readItemFinished()
{
    for(int i = 0; i < ui->listFinish->count(); ++i)
    {
        QString title = ui->listFinish->item(i)->text();
        if(Database::updateFinish(title)){
            statusBar()->showMessage("Tâches actualisé");
        }
    }
}

void MainWindow::populateList(){
    readItemTodo();
    readItemFinished();

    ui->listTodo->clear();
    ui->listFinish->clear();

    populateListLeft();
    populateListRight();
    intCountTodo();
    intCountFinish();
}

void MainWindow::on_addButton_clicked()
{
    QString title = ui->nomEdit->text();
    QString description = ui->descriptionEdit->toPlainText();
    int completed = 0;
    //int id = ui->catListWidget->currentItem()->text();
    int id = 1;

    if(Database::insertTask(title, description, completed, id)){
        statusBar()->showMessage("Tâche créée", 4000);
        ui->nomEdit->clear();
        ui->descriptionEdit->clear();
    }
    populateList();
}

void MainWindow::on_listTodo_itemClicked(QListWidgetItem *item)
{
    Task itemSelected = Database::search(item->text());

    ui->nomEdit->setText(itemSelected.titre());
    ui->descriptionEdit->setPlainText(itemSelected.description());

    QString titleCat = Category::idToTitle(itemSelected.id_categorie());

}

void MainWindow::on_editButton_clicked()
{
    QString title = ui->nomEdit->text();
    QString description = ui->descriptionEdit->toPlainText();
    int completed = 0;
    int id = 2;

    if(Database::update(title, description, completed, id)){
        statusBar()->showMessage("Tâche modifié");
    }
    populateList();
}

void MainWindow::on_deleteButton_clicked()
{
    QString title = ui->nomEdit->text();

    if(Database::remove(title)){
        statusBar()->showMessage("Tâche supprimée", 4000);
    }
    populateList();
}

void MainWindow::on_syncButton_clicked()
{
    populateList();
    statusBar()->showMessage("Tâches synchronisée", 4000);
}

void MainWindow::on_coachButton_clicked()
{
    Database::findCoach();
    populateList();
}

void MainWindow::on_listFinish_itemClicked(QListWidgetItem *item)
{
    Task itemSelected = Database::search(item->text());

    ui->nomEdit->setText(itemSelected.titre());
    ui->descriptionEdit->setPlainText(itemSelected.description());

    QString titleCat = Category::idToTitle(itemSelected.id_categorie());
}

void MainWindow::on_listFinish_itemPressed(QListWidgetItem *item)
{
    readItemTodo();
    readItemFinished();
}

void MainWindow::on_listTodo_itemPressed(QListWidgetItem *item)
{
    readItemTodo();
    readItemFinished();
}
