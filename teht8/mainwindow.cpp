#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    pQTimer = new QTimer(this);


    ui->setupUi(this);
    ui->progressBar1->setValue(0);
    ui->progressBar2->setValue(0);

    ui->stopButton->setEnabled(false);
    ui->startButton->setEnabled(false);
    ui->switchButton1->setEnabled(false);
    ui->switchButton2->setEnabled(false);

    ui->kurkkisVoittaja->setVisible(false);
    ui->kisulabelVoittaja->setVisible(false);



    setGameInfoText("Shakkiajastin. Valitse pelin kesto alhaalta", 15);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startButton_clicked()
{
    setGameInfoText("Peli alkaa! Pelaajan 1 vuoro.", 15);
    pQTimer->start(1000);
    currentPlayer = 1;
    connect(pQTimer,SIGNAL(timeout()), this, SLOT(timeout()));

    ui->stopButton->setEnabled(true);
    ui->startButton->setEnabled(false);
    ui->switchButton1->setEnabled(true);
    ui->switchButton2->setEnabled(false);
    ui->aikaButton1->setEnabled(false);
    ui->aikaButton2->setEnabled(false);
    ui->kurkkis->setVisible(false);

}


void MainWindow::on_aikaButton1_clicked() //120 sek ajastin
{
    tila = 1;
    setGameInfoText("2 min ajastin valittu. Klikkaa start game aloittaaksesi", 15);


    ui->startButton->setEnabled(true);
    player1Time = 120;
    player2Time = 120;

    updatePlayer1Time();
    updatePlayer2Time();

    ui->progressBar1->setRange(0,120);
    ui->progressBar1->setValue(120);

    ui->progressBar2->setRange(0,120);
    ui->progressBar2->setValue(120);
}

void MainWindow::on_aikaButton2_clicked()
{
    setGameInfoText("5 min ajastin valittu. Klikkaa start game aloittaaksesi", 15);

    tila = 2;
    ui->startButton->setEnabled(true);
    player1Time = 300;
    player2Time = 300;

    updatePlayer1Time();
    updatePlayer2Time();


    ui->progressBar2->setRange(0,300);
    ui->progressBar2->setValue(300);

    ui->progressBar1->setRange(0,300);
    ui->progressBar1->setValue(300);


}

void MainWindow::timeout()
{
    updateProgressBar();
}

void MainWindow::updateProgressBar()
{

    if(tila == 1 & currentPlayer == 1){
        player1Time--;
        ui->progressBar1->setValue(player1Time);

        updatePlayer1Time();
    }

    else if (tila == 1 & currentPlayer == 2) {
        player2Time--;
        ui->progressBar2->setValue(player2Time);
        updatePlayer2Time();
    }
    else if(tila == 2 & currentPlayer == 1){
        player1Time--;
        ui->progressBar1->setValue(player1Time);
        updatePlayer1Time();
    }

    else if (tila == 2 & currentPlayer == 2) {
        player2Time--;
        ui->progressBar2->setValue(player2Time);
        updatePlayer2Time();
    }

    if(player1Time == 0){
        endTimer();
        setGameInfoText("Pelaaja 2 voitti!", 15);
        ui->switchButton1->setEnabled(false);
        ui->switchButton2->setEnabled(false);

        ui->kurkkis->setVisible(true);
        ui->kisulabel->setVisible(true);

        ui->kurkkisVoittaja->setVisible(true);
    }

    if(player2Time == 0){
        endTimer();
        setGameInfoText("Pelaaja 1 voitti!", 15);
        ui->switchButton1->setEnabled(false);
        ui->switchButton2->setEnabled(false);

        ui->kurkkis->setVisible(true);
        ui->kisulabel->setVisible(true);

        ui->kisulabelVoittaja->setVisible(true);
    }

}

void MainWindow::updatePlayer1Time()
{
    QString str = QString::number(player1Time);
    str.toInt();
    ui->p1Aika->setText(str);
}

void MainWindow::updatePlayer2Time()
{
    QString str = QString::number(player2Time);
    str.toInt();
    ui->p2Aika->setText(str);
}

void MainWindow::endTimer()
{
    disconnect(pQTimer,SIGNAL(timeout()), this, SLOT(timeout()));
}

void MainWindow::setGameInfoText(QString t, short n)
{


    QFont font = ui->gameText->font();
    font.setPointSize(n);

    ui->gameText->setText(t);
    ui->gameText->setFont(font);

}







void MainWindow::on_stopButton_clicked()
{
    endTimer();

    setGameInfoText("Peli lopetettu. Valitse uuden pelin kesto alhaalta", 15);
    ui->stopButton->setEnabled(false);
    ui->startButton->setEnabled(false);
    ui->switchButton1->setEnabled(false);
    ui->switchButton2->setEnabled(false);
    ui->aikaButton1->setEnabled(true);
    ui->aikaButton2->setEnabled(true);
    ui->kurkkisVoittaja->setVisible(false);
    ui->kisulabelVoittaja->setVisible(false);
    ui->kurkkis->setVisible(true);
    ui->kisulabel->setVisible(true);
}


void MainWindow::on_switchButton1_clicked()
{
    currentPlayer = 2;
    ui->switchButton1->setEnabled(false);
    ui->switchButton2->setEnabled(true);
    ui->kurkkis->setVisible(true);
    ui->kisulabel->setVisible(false);
    setGameInfoText("Pelaajan 2 vuoro.", 15);
}


void MainWindow::on_switchButton2_clicked()
{
    currentPlayer = 1;
    ui->switchButton2->setEnabled(false);
    ui->switchButton1->setEnabled(true);
    ui->kurkkis->setVisible(false);
    ui->kisulabel->setVisible(true);
    setGameInfoText("Pelaajan 1 vuoro.", 15);
}

