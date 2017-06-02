#ifndef SCORELABEL_H
#define SCORELABEL_H

#include <QLabel>

class ScoreLabel: public QLabel
{
    Q_OBJECT
public:
    ScoreLabel(QWidget* parent=0);
public slots:
    void increaseScoreHWK(int);
    void increaseScoreMT1(int);
    void increaseScoreMT2(int);
    void increaseScoreFinal(int);
    void calcValue();
    void schemeA();
    void schemeB();
private:
    bool schemeBChoice = false;
    double score = 0;
    int HWKScore = 0;
    int mt1Score = 0;
    int mt2Score = 0;
    int finalScore = 0;
    double mtMultiplier = 20;
    double finalMultiplier = 35;
};

#endif // SCORELABEL_H
