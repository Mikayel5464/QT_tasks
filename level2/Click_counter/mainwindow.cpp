#include "mainwindow.h"

Counterapp::Counterapp(QWidget *parent) : QWidget(parent), counter(0)
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    counter_label = new QLabel("Counter: 0", this);
    layout->addWidget(counter_label);

    button = new QPushButton("My Button", this);
    connect(button, &QPushButton::clicked, this, &Counterapp::Counter);
    layout->addWidget(button);

    setLayout(layout);
}

void Counterapp::Counter()
{
    counter++;
    std::string cnt = std::to_string(counter);
    QString str{cnt.c_str()};
    counter_label->setText("Counter: " + str);
}

Counterapp::~Counterapp()
{
    delete counter_label;
    delete button;
}

