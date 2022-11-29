#include "mainwindow.h"
#include <QMouseEvent>
#include <QPixmap>


MyWindow::MyWindow(QWidget* parent):
    QMainWindow(parent)
{

    view = new MyView(this);
    view->show();
    rect.setTopLeft(QPoint(0,0));
    rect.setBottomRight(QPoint(52,52));
}

bool MyWindow::isHere(QMouseEvent* e, QRect r)
{
    if(view->geometry().topLeft().x() <= e->pos().x() && e->pos().x()<= view->geometry().bottomRight().x()
            && view->geometry().topLeft().y()<=e->pos().y() and e->pos().x()<=view->geometry().bottomRight().y())
    {
        checker = true;
    }
    else
    {
        checker = false;
    }
    return checker;
}

void MyWindow::mousePressEvent(QMouseEvent* event)
{
    isHere(event,rect);
}

void MyWindow::mouseMoveEvent(QMouseEvent* event)
{
    if(checker)
    {
        rect.setTop(event->pos().y()-25);
        rect.setLeft(event->pos().x()-25);
        view->setGeometry(rect);
    }
}

void MyWindow::mouseReleaseEvent(QMouseEvent* event)
{
    rect.setTopLeft(QPoint(0,0));
    rect.setBottomRight(QPoint(52,52));
    view->setGeometry(rect);
}
