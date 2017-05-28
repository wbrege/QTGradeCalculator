#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "hwtemplate.h"
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWidget *window = new QWidget();

    //Create the homework combo boxes
    hwtemplate *hw1 = new hwtemplate(this);
    hwtemplate *hw2 = new hwtemplate(this);
    hwtemplate *hw3 = new hwtemplate(this);
    hwtemplate *hw4 = new hwtemplate(this);
    hwtemplate *hw5 = new hwtemplate(this);
    hwtemplate *hw6 = new hwtemplate(this);
    hwtemplate *hw7 = new hwtemplate(this);
    hwtemplate *hw8 = new hwtemplate(this);
    hwtemplate *hw9 = new hwtemplate(this);
    hwtemplate *hw10 = new hwtemplate(this);

    //Create the Layout
    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(hw1);
    layout->addWidget(hw2);
    layout->addWidget(hw3);
    layout->addWidget(hw4);
    layout->addWidget(hw5);
    layout->addWidget(hw6);
    layout->addWidget(hw7);
    layout->addWidget(hw8);
    layout->addWidget(hw9);
    layout->addWidget(hw10);

    window->setLayout(layout);
    setCentralWidget(window);
}

MainWindow::~MainWindow()
{
    delete ui;
}
