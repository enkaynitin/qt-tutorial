#include "window.h"

#include <QApplication>
#include <QPushButton>

Window::Window(QWidget *parent) : QWidget(parent)
{
    // Set size of window
    setFixedSize(1000,500);

    // Create and position the button
    m_button = new QPushButton("Hello World",this);
    m_button->setGeometry(100,100,800,30);

    // NEW : Do connection
    connect(m_button, SIGNAL (clicked()), QApplication::instance(), SLOT (quit()));
}
