#include "database.h"

Database::Database()
{

}

bool Database::connect(QString bdd_name)
{
    const QString DRIVER("QSQLITE");

    if (QSqlDatabase::isDriverAvailable(DRIVER)) {
        QSqlDatabase db = QSqlDatabase::addDatabase(DRIVER);

        db.setDatabaseName(bdd_name);

        if (!db.open()) {
            qWarning() << __FUNCTION__ << "  ERROR: " << db.lastError().text();
            return false;
        }
    }
    else {
        qWarning() << __FUNCTION__ << " ERROR: no driver " << DRIVER << " available";
        return false;
    }
    return true;
}


Task Database::search(QString search)
{
    QSqlQuery query;
    QString sql_query = QString("SELECT * FROM tasks WHERE title = '%1'").arg(search);

    query.exec(sql_query);
    int idtitle = query.record().indexOf("title");
    int iddescription = query.record().indexOf("description");
    int idcompleted = query.record().indexOf("completed");
    int idcategory = query.record().indexOf("id_category");

    while (query.next()) {
        QString title = query.value(idtitle).toString();
        QString description = query.value(iddescription).toString();
        int completed = query.value(idcompleted).toInt();
        int id_cat = query.value(idcategory).toInt();
        qDebug() << title << description << completed <<id_cat;
        Task* newTask = new Task(title, description, completed, id_cat);
        return *newTask;
    }
}

bool Database::findCoach()
{
    QSqlQuery query;
    QString sql_query = QString("INSERT OR IGNORE INTO tasks SELECT * FROM coaches ORDER BY RANDOM() LIMIT 1");

    if (!query.exec(sql_query)){
        qWarning() <<  __FUNCTION__ << "   ERROR: " << query.lastError().text();
        return false;
    }
    return true;
}


bool Database::insertTask(QString title, QString description, int completed, int id_category)
{
    QSqlQuery query;
    QString sql_query = QString("INSERT INTO tasks(title, description, completed, id_category) VALUES('%1', '%2', '%3', '%4')").arg(title).arg(description).arg(completed).arg(id_category);

    if (!query.exec(sql_query)){
        qWarning() <<  __FUNCTION__ << "   ERROR: " << query.lastError().text();
        return false;
    }
    return true;
}


bool Database::update(QString title, QString description, int completed, int id_category)
{
    QSqlQuery query;

    QString sql_query = QString("UPDATE tasks SET title = '%1', description = '%2', completed = '%3', id_category = '%4' WHERE title = '%1'")
                        .arg(title).arg(description).arg(completed).arg(id_category);

    if (!query.exec(sql_query)){
        qWarning() <<  __FUNCTION__ << "   ERROR: " << query.lastError().text();
        return false;
    }

    return true;
}

bool Database::updateTodo(QString title)
{
    QSqlQuery query;
    QString sql_query = QString("UPDATE tasks SET completed = 0 WHERE title = '%1'").arg(title);

    if (!query.exec(sql_query)){
        qWarning() <<  __FUNCTION__ << "   ERROR: " << query.lastError().text();
        return false;
    }
    return true;
}

bool Database::updateFinish(QString title)
{
    QSqlQuery query;
    QString sql_query = QString("UPDATE tasks SET completed = 1 WHERE title = '%1'").arg(title);

    if (!query.exec(sql_query)){
        qWarning() <<  __FUNCTION__ << "   ERROR: " << query.lastError().text();
        return false;
    }
    return true;
}


bool Database::remove(QString title)
{
    QSqlQuery query;

    QString sql_query = QString("DELETE FROM tasks WHERE title = '%1' ").arg(title);

    if (!query.exec(sql_query)){
        qWarning() <<  __FUNCTION__ << "   ERROR: " << query.lastError().text();
        return false;
    }

    return true;
}

int Database::countToDo()
{
    QSqlQuery query("SELECT COUNT (*) FROM tasks WHERE completed=0");

    if (query.first())
        return query.value(0).toInt();

    return -1;
}

int Database::countFinish()
{
    QSqlQuery query("SELECT COUNT (*) FROM tasks WHERE completed=1");

    if (query.first())
        return query.value(0).toInt();

    return -1;
}



