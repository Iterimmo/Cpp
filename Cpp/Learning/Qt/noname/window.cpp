#include "window.h"
#include <qpushbutton>

Window::Window(QWidget *parent)
    : QWidget{parent}
{
    setFixedSize(100,50);
    m_button = new QPushButton("Hello", this);
    m_button->setGeometry(10,10,50,30);
}
