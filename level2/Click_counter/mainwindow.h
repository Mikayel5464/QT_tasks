#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>

class Counterapp : public QWidget
{
    Q_OBJECT

public:
    Counterapp(QWidget *parent = nullptr);
    ~Counterapp();

private slots:
    void Counter();

private:
    int counter;
    QLabel *counter_label;
    QPushButton *button;

};
#endif
