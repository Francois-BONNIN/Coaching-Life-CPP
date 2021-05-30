#include "category.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <qsqlquery.h>
#include <qdebug.h>
#include <qvariant.h>
#include <qradiobutton.h>



Category::Category(int id, QString title)
{
    m_id = id;
    m_title = title;
}


QString Category::idToTitle(int id)
{
    QSqlQuery query;
    QString sql_query = QString("SELECT title FROM categories WHERE id = '%1'").arg(id);

    query.exec(sql_query);
    int idtitle = query.record().indexOf("title");

    while (query.next()){
        QString title = query.value(idtitle).toString();
        Category* newCat = new Category(id, title);
        return newCat->m_title;
    }
}

QString Category::title()
{
    return m_title;
}
