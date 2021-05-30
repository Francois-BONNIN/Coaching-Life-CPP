#ifndef TASK_H
#define TASK_H

#include <QString>
#include <QtDebug>


class Task
{
    private:
        QString m_titre;
        QString m_description;
        int m_id_category;
        int m_completed;

    public:
        Task(QString titre, QString description, int completed, int id_category);

        QString titre() const;
        void setTitre(const QString &titre);

        QString description() const;
        void setDescription(const QString &description);

        int id_categorie() const;
        void setId_categorie(const int id_cat);
        QString titleCat(int id_cat) const;



};

#endif // TASK_H
