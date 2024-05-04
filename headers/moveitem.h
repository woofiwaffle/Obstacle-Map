#ifndef MOVEITEM_H
#define MOVEITEM_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>



class MoveItem : public QObject, public QGraphicsItem {
    Q_OBJECT

public:
    explicit MoveItem(QObject *parent = 0);
    ~MoveItem();

    //int passIndex() const;

signals:
    void pointAdded();

private:
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);

    //void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    //void mousePressEvent(QGraphicsSceneMouseEvent *event);
    //void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);

    //int passIndex_;

};

#endif // MOVEITEM_H
