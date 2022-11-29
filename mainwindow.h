#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QHBoxLayout>
#include <QMainWindow>
#include <QPainter>
#include <QPoint>
#include <QLabel>
#include <QGraphicsView>
#include "myview.h"

class MyWindow: public QMainWindow
{
public:
    MyWindow(QWidget* parent=0);
private:
    MyView* view;
    QHBoxLayout* hbox;
    QRect rect;
    bool isHere(QMouseEvent* e, QRect);
    bool checker;

signals:
    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);
    void mouseReleaseEvent(QMouseEvent* event);

};

#endif // MAINWINDOW_H
