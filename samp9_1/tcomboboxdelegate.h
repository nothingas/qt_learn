#ifndef TCOMBOBOXDELEGATE_H
#define TCOMBOBOXDELEGATE_H

#include <QStyledItemDelegate>
#include <qcombobox.h>
class TComboBoxDelegate : public QStyledItemDelegate
{
    Q_OBJECT
private:
    QStringList m_itemList;
    bool m_editable;
public:
    explicit TComboBoxDelegate(QObject *parent = nullptr);
    void setItems(QStringList items, bool editable);

    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                          const QModelIndex &index)const;
    void setEditorData(QWidget *editor, const QModelIndex &index)const;
    void setModelData(QWidget *editor, QAbstractItemModel *model,
                      const QModelIndex &index)const;
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
                              const QModelIndex &index)const;
};

#endif // TCOMBOBOXDELEGATE_H
