#include "mainwindow.h"
#include <QApplication>
#include <QComboBox>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QWidget *window = new QWidget();

    //Create the homework combo boxes
    QComboBox *hw1 = new QComboBox();
    QComboBox *hw2 = new QComboBox();
    QComboBox *hw3 = new QComboBox();
    QComboBox *hw4 = new QComboBox();
    QComboBox *hw5 = new QComboBox();
    QComboBox *hw6 = new QComboBox();
    QComboBox *hw7 = new QComboBox();
    QComboBox *hw8 = new QComboBox();
    QComboBox *hw9 = new QComboBox();
    QComboBox *hw10 = new QComboBox();
    QStringList hwChoices = (QStringList() << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "10");
    hw1->addItems(hwChoices);
    hw2->addItems(hwChoices);
    hw3->addItems(hwChoices);
    hw4->addItems(hwChoices);
    hw5->addItems(hwChoices);
    hw6->addItems(hwChoices);
    hw7->addItems(hwChoices);
    hw8->addItems(hwChoices);
    hw9->addItems(hwChoices);
    hw10->addItems(hwChoices);

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
    w.setCentralWidget(window);
    w.show();
    return a.exec();
}
