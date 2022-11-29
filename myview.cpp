#include "myview.h"


MyView::MyView(QWidget* parent):
    QLabel(parent)
{
    this->setMinimumSize(55,55);
}

void MyView::paintEvent(QPaintEvent* q)
{
    Q_UNUSED(q);

      QPainter qp(this);
      doPainting(&qp);
}

void MyView::doPainting(QPainter* painter)
{

    first.setX(3);
    first.setY(3);
    painter->setPen(QPen(Qt::black, 2));
    painter->setBrush(QBrush(Qt::green));
    painter->setRenderHint(QPainter::Antialiasing);
    painter->drawRect(first.x(),first.y(),50,50);
    second.setX(first.x()+50);
    second.setY(first.y()+50);
}


