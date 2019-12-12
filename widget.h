#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "console.h"

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

public slots:
    void dealQuit();

private:
    Console *console;
};

#endif // WIDGET_H
