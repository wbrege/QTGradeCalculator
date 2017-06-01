#include "scorelabel.h"

ScoreLabel::ScoreLabel(QWidget* parent) : QLabel(parent)
{

}

void ScoreLabel::increaseScoreHWK(int val){
    score += (val/4.);
}

void ScoreLabel::increaseScoreMT(int val){
    score += (val/45*mtMultiplier);
}

void ScoreLabel::increaseScoreFinal(int val){
    score += (val/100*finalMultiplier);
}

void ScoreLabel::updateValue(){
    setNum(score);
}
