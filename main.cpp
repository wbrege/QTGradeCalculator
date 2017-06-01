#include "mainwindow.h"
#include <QApplication>
#include <QComboBox>
#include <QGridLayout>
#include <QLabel>
#include <QSlider>
#include <QRadioButton>
#include <QPushButton>
#include "scorelabel.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QWidget *window = new QWidget();

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

    //totalScore += hw1->currentIndex();

    //Create the Midterm and Final input
    QSlider *mt1slide = new QSlider(Qt::Horizontal);
    mt1slide->setMaximum(45);
    QSlider *mt2slide = new QSlider(Qt::Horizontal);
    mt2slide->setMaximum(45);
    QSlider *finalSlide = new QSlider(Qt::Horizontal);
    finalSlide->setMaximum(100);
    QLabel *mt1text = new QLabel("Midterm 1:");
    QLabel *mt2text = new QLabel("Midterm 2:");
    QLabel *finalText = new QLabel("Final:");
    QLabel *mt1display = new QLabel("0");
    QLabel *mt2display = new QLabel("0");
    QLabel *finalDisplay = new QLabel("0");
    //Connect our signals and slots
    QObject::connect(mt1slide, SIGNAL(valueChanged(int)), mt1display, SLOT(setNum(int)));
    QObject::connect(mt2slide, SIGNAL(valueChanged(int)), mt2display, SLOT(setNum(int)));
    QObject::connect(finalSlide, SIGNAL(valueChanged(int)), finalDisplay, SLOT(setNum(int)));

    //Create the Grading input and ouput
    QRadioButton *choice1 = new QRadioButton("Scheme 1");
    QRadioButton *choice2 = new QRadioButton("Scheme 2");
    QLabel *scoreText = new QLabel("Total Score out of 100:");
    ScoreLabel *score = new ScoreLabel();
    QPushButton *calculate = new QPushButton("Calculate!");
    QObject::connect(calculate, SIGNAL(clicked(bool)), score, SLOT(updateValue()));

    //Finish our connections to the total score
    QObject::connect(hw1, SIGNAL(currentIndexChanged(int)), score, SLOT(increaseScoreHWK(int)));
    QObject::connect(hw2, SIGNAL(currentIndexChanged(int)), score, SLOT(increaseScoreHWK(int)));
    QObject::connect(hw3, SIGNAL(currentIndexChanged(int)), score, SLOT(increaseScoreHWK(int)));
    QObject::connect(hw4, SIGNAL(currentIndexChanged(int)), score, SLOT(increaseScoreHWK(int)));
    QObject::connect(hw5, SIGNAL(currentIndexChanged(int)), score, SLOT(increaseScoreHWK(int)));
    QObject::connect(hw6, SIGNAL(currentIndexChanged(int)), score, SLOT(increaseScoreHWK(int)));
    QObject::connect(hw7, SIGNAL(currentIndexChanged(int)), score, SLOT(increaseScoreHWK(int)));
    QObject::connect(hw8, SIGNAL(currentIndexChanged(int)), score, SLOT(increaseScoreHWK(int)));
    QObject::connect(hw9, SIGNAL(currentIndexChanged(int)), score, SLOT(increaseScoreHWK(int)));
    QObject::connect(hw10, SIGNAL(currentIndexChanged(int)), score, SLOT(increaseScoreHWK(int)));
    QObject::connect(mt1slide, SIGNAL(valueChanged(int)), score, SLOT(increaseScoreMT(int)));
    QObject::connect(mt2slide, SIGNAL(valueChanged(int)), score, SLOT(increaseScoreMT(int)));
    QObject::connect(finalSlide, SIGNAL(valueChanged(int)), score, SLOT(increaseScoreFinal(int)));

    //Create the Layout
    QGridLayout *layout = new QGridLayout;
    //Add the Homework labels
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
    //Add the Homework score selection
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
    //Add the midterm information
    layout->addWidget(mt1text, 0, 2);
    layout->addWidget(mt1slide, 1, 2);
    layout->addWidget(mt1display, 2, 2);
    layout->addWidget(mt2text, 3, 2);
    layout->addWidget(mt2slide, 4, 2);
    layout->addWidget(mt2display, 5, 2);
    layout->addWidget(finalText, 6, 2);
    layout->addWidget(finalSlide, 7, 2);
    layout->addWidget(finalDisplay, 8, 2);
    //Finally add the grading information
    layout->addWidget(choice1, 10, 0);
    layout->addWidget(choice2, 11, 0);
    layout->addWidget(scoreText, 10, 1);
    layout->addWidget(score, 11, 1);
    layout->addWidget(calculate, 10, 2);

    window->setLayout(layout);
    w.setCentralWidget(window);
    w.show();
    return a.exec();
}
