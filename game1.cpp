#include "game1.h"

game1::game1(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant game1::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex game1::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex game1::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int game1::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int game1::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant game1::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
