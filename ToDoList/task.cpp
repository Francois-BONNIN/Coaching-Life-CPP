#include "task.h"

Task::Task(QString titre, QString description, int completed, int id_category)
{
    m_titre = titre;
    m_description = description;
    m_completed = completed;
    m_id_category = id_category;

}

QString Task::titre() const
{
    return m_titre;
}

void Task::setTitre(const QString &titre)
{
    m_titre = titre;
}

QString Task::description() const
{
    return m_description;
}

void Task::setDescription(const QString &description)
{
    m_description = description;
}

int Task::id_categorie() const
{
    return m_id_category;
}

void Task::setId_categorie(const int id_cat)
{
    m_id_category = id_cat;
}



