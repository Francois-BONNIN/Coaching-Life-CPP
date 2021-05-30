#ifndef CATEGORY_H
#define CATEGORY_H

#include <qstring.h>

#include <qsqlquery.h>
#include <qdebug.h>
#include <qvariant.h>
#include <qradiobutton.h>

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlDriver>
#include <QSqlError>
#include <QSqlRecord>

class Category
{


public:
    int m_id;
    QString m_title;
    void fillListCat();

    Category(int id, QString title);
    static QString idToTitle(int id);

    QString title();
};

#endif // CATEGORY_H
