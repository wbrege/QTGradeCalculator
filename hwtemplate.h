#ifndef HWTEMPLATE_H
#define HWTEMPLATE_H

#include <QWidget>

class QComboBox;

class hwtemplate : public QWidget
{
    Q_OBJECT
public:
    explicit hwtemplate(QWidget *parent = 0);
private:
    QComboBox *hwscore;
signals:

public slots:
};

#endif // HWTEMPLATE_H
