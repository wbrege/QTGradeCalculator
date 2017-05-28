#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class hwtemplate;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    hwtemplate *hw1;
    hwtemplate *hw2;
    hwtemplate *hw3;
    hwtemplate *hw4;
    hwtemplate *hw5;
    hwtemplate *hw6;
    hwtemplate *hw7;
    hwtemplate *hw8;
    hwtemplate *hw9;
    hwtemplate *hw10;
};

#endif // MAINWINDOW_H
