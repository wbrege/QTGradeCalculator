#include "mainwindow.h"
#include <QApplication>
#include <QComboBox>
#include <QGridLayout>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QWidget *window = new QWidget();
    //QWidget *windowText = new QWidget();

    //Create the Text Boxes
    QLabel *hw1Text = new QLabel("HW1: ");
    QLabel *hw2Text = new QLabel("HW2: ");
    QLabel *hw3Text = new QLabel("HW3: ");
    QLabel *hw4Text = new QLabel("HW4: ");
    QLabel *hw5Text = new QLabel("HW5: ");
    QLabel *hw6Text = new QLabel("HW6: ");
    QLabel *hw7Text = new QLabel("HW7: ");
    QLabel *hw8Text = new QLabel("HW8: ");
    QLabel *hw9Text = new QLabel("HW9: ");
    QLabel *hw10Text = new QLabel("HW10: ");

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
    QGridLayout *layout = new QGridLayout;
    //Add the text
    layout->addWidget(hw1Text, 0 , 0);
    layout->addWidget(hw2Text, 1 , 0);
    layout->addWidget(hw3Text, 2 , 0);
    layout->addWidget(hw4Text, 3 , 0);
    layout->addWidget(hw5Text, 4 , 0);
    layout->addWidget(hw6Text, 5 , 0);
    layout->addWidget(hw7Text, 6 , 0);
    layout->addWidget(hw8Text, 7 , 0);
    layout->addWidget(hw9Text, 8 , 0);
    layout->addWidget(hw10Text, 9 , 0);
    //Add the score selection
    layout->addWidget(hw1, 0 , 1);
    layout->addWidget(hw2, 1 , 1);
    layout->addWidget(hw3, 2 , 1);
    layout->addWidget(hw4, 3 , 1);
    layout->addWidget(hw5, 4 , 1);
    layout->addWidget(hw6, 5 , 1);
    layout->addWidget(hw7, 6 , 1);
    layout->addWidget(hw8, 7 , 1);
    layout->addWidget(hw9, 8 , 1);
    layout->addWidget(hw10, 9 , 1);

    window->setLayout(layout);
    w.setCentralWidget(window);
    w.show();
    return a.exec();
}
