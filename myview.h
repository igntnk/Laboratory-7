#ifndef MYVIEW_H
#define MYVIEW_H

#include <QGraphicsView>
#include <QLabel>

class MyView: public QLabel
{
public:
    MyView(QWidget* parent=0);

private:
    void paintEvent(QPaintEvent* q);
    void doPainting(QPainter* painter);
    QPointF first;
    QPointF second;
    void rePaint();

};

#endif // MYVIEW_H
