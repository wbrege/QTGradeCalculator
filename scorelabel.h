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
    void increaseScoreMT(int);
    void increaseScoreFinal(int);
    void updateValue();
private:
    double score = 0;
    double mtMultiplier = 20;
    double finalMultiplier = 35;
};

#endif // SCORELABEL_H
