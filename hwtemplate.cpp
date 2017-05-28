#include "hwtemplate.h"
#include <QComboBox>

hwtemplate::hwtemplate(QWidget *parent) : QWidget(parent)
{
    hwscore = new QComboBox();
    QStringList hwChoices = (QStringList() << "0" << "1" << "2" << "3" << "4" << "5" << "6" << "7" << "8" << "9" << "10");
    hwscore->addItems(hwChoices);
    hwscore->show();
}
