#include "tab1devcontrol.h"
#include "ui_tab1devcontrol.h"

Tab1DevControl::Tab1DevControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tab1DevControl)
{
    ui->setupUi(this);
    lcdData = 0;
    int itemCnt =ui->gridLayout_2->rowCount() * ui->gridLayout_2->columnCount();

    pQButtonGroup = new QButtonGroup(this);
    for(int i =0; i<ui->gridLayout_2->rowCount();i++)
    {
        for(int j=0; j<ui->gridLayout_2->columnCount(); j++)
        {
           pQCheckBoxArray[--itemCnt] = dynamic_cast<QCheckBox*>(ui->gridLayout_2->itemAtPosition(i,j)->widget());
        }
    }
    itemCnt =ui->gridLayout_2->rowCount() * ui->gridLayout_2->columnCount();
    for(int i=0; i<itemCnt; i++)
    {
        pQButtonGroup->addButton(pQCheckBoxArray[i],i+1);
    }
    pQButtonGroup->setExclusive(false);
    connect(pQButtonGroup,SIGNAL(buttonClicked(int)),this, SLOT(slotKeyCheckBoxUpdateMouse(int)));

    pKeyLed = new KeyLed(this);
    pQTimer = new QTimer(this);
    connect(ui->pDialLed,SIGNAL(valueChanged(int)),pKeyLed,SLOT(writeLedData(int)));
    connect(ui->pDialLed,SIGNAL(valueChanged(int)),ui->pLcdNumberLed,SLOT(display(int)));
    connect(ui->pPBtimerStart,SIGNAL(clicked(bool)),this,SLOT(slotTimerStartButton(bool)));
    connect(pQTimer,SIGNAL(timeout()),this,SLOT(slotDialSetValue()));
    connect(pKeyLed,SIGNAL(updateKeyDataSig(int)),this,SLOT(slotKeyCheckBoxUpdate(int)));
    connect(this,SIGNAL(writeLedDataSig(int)),pKeyLed,SLOT(writeLedData(int)));
}

Tab1DevControl::~Tab1DevControl()
{
    delete ui;
}

void Tab1DevControl::on_pPBQuit_clicked()
{
    qApp->quit();
}
void Tab1DevControl::slotTimerStartButton(bool bCheck)
{
    if(bCheck)
    {
        QString strValue = ui->pCBtimerValue->currentText();
        pQTimer->start(strValue.toInt());
        ui->pPBtimerStart->setText("TimerStop");
    }
    else
    {
        pQTimer->stop();
        ui->pPBtimerStart->setText("TimerStart");

    }
}

void Tab1DevControl:: slotDialSetValue()
{
    int dialValue = ui ->pDialLed->value();

    dialValue++;

    if(dialValue > ui->pDialLed->maximum())
        dialValue = 0;

    ui -> pDialLed->setValue(dialValue);
}

void Tab1DevControl::on_pCBtimerValue_currentIndexChanged(const QString &arg1)
{
    if(pQTimer->isActive())
    {
        pQTimer->stop();
        pQTimer->start((arg1.toInt()));
    }
}

void Tab1DevControl:: slotKeyCheckBoxUpdate(int keyNo)
{
    //static int lcdData;
    lcdData = lcdData ^ (0x01 << (keyNo -1));
    ui->pLcdNumberLed_2->display(lcdData);

 //   QCheckBox *pQCheckBoxArray[8] = {ui->pCBkey1,ui->pCBkey2,ui->pCBkey3,ui->pCBkey4, \
                                            ui->pCBkey5,ui->pCBkey6,ui->pCBkey7,ui->pCBkey8};
    for(int i =0; i<8; i++)
    {
     if(keyNo == i+1)
     {
         if(pQCheckBoxArray[i]->isChecked())
             pQCheckBoxArray[i]->setChecked(false);
         else
             pQCheckBoxArray[i]->setChecked(true);
     }
    }
    //pKeyLed->writeLedData(lcdData);
    emit writeLedDataSig(lcdData);
    ui->pDialLed->setValue(lcdData);
}
void Tab1DevControl:: slotKeyCheckBoxUpdateMouse(int keyNo)
{
    lcdData =lcdData ^ (0x01<< (keyNo -1));
    ui->pLcdNumberLed_2->display(lcdData);
}
