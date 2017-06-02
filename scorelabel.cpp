#include "scorelabel.h"

ScoreLabel::ScoreLabel(QWidget* parent) : QLabel(parent)
{

}

void ScoreLabel::increaseScoreHWK(int val){
    HWKScore += val;
}

void ScoreLabel::increaseScoreMT1(int val){
    mt1Score = val;
}

void ScoreLabel::increaseScoreMT2(int val){
    mt2Score = val;
}

void ScoreLabel::increaseScoreFinal(int val){
    finalScore = val;
}

void ScoreLabel::schemeA(){
    schemeBChoice = false;
}

void ScoreLabel::schemeB(){
    schemeBChoice = true;
}

/** Calculates the final score using the chosen Scheme
 */
void ScoreLabel::calcValue(){
    if(schemeBChoice == true){
        //Grading Scheme B
        if(mt1Score > mt2Score){
            score = (HWKScore/4.) + (mt1Score/45.*30) + (finalScore/100.*45);
        }
        else{
            score = (HWKScore/4.) + (mt2Score/45.*30) + (finalScore/100.*45);
        }
    }
    else{
        //Grading Scheme A
        score = (HWKScore/4.) + (mt1Score/45.*20) + (mt2Score/45.*20) + (finalScore/100.*35);
    }

    setNum(score);
}
