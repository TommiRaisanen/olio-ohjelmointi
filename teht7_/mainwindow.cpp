#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent)

    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{

    ui->setupUi(this);

    setActiveControls();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // 1. lue numero elementistä
    QString str = ui->lineEdit->text();
    int num = str.toInt();
    qDebug() << "Numero on  " << num;
    // 2. kasvata numeroa yhdellä
    num++;
    // 3. aseta numero takaisin elementtiin
    QString newStr = QString::number(num);
    ui->lineEdit->setText(newStr);
    qDebug() << "uusi numero " << newStr;
}


void MainWindow::on_pushButton_2_clicked() //reset
{
    // 1. aseta numero 0 elementtiin
    int num = 0;
    QString newStr = QString::number(num);
    ui->lineEdit->setText(newStr);
    qDebug() << "uusi numero " << newStr;

}





void MainWindow::on_plus_clicked()
{
    if(tila == 3){
        QString num1Str = ui->num1->text();
        int num1 = num1Str.toInt();

        QString num2Str = ui->num2->text();
        int num2 = num2Str.toInt();

        int result = num1+num2;

        QString resStr = QString::number(result);
        ui->result->setText(resStr);
        qDebug() << " " << resStr;

        tila = 0;

    } else {
        tila = 0;
        qDebug() << "ei toimi ";
    }


}


void MainWindow::on_miinus_clicked()
{
    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1-num2;

    QString resStr = QString::number(result);
    ui->result->setText(resStr);
    qDebug() << " " << resStr;
}


void MainWindow::on_jako_clicked()
{
    QString num1Str = ui->num1->text();
    float num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    float num2 = num2Str.toInt();

    float result = num1/num2;

    QString resStr = QString::number(result);
    ui->result->setText(resStr);
    qDebug() << " " << resStr;
}


void MainWindow::on_kerto_clicked()
{
    QString num1Str = ui->num1->text();
    int num1 = num1Str.toInt();

    QString num2Str = ui->num2->text();
    int num2 = num2Str.toInt();

    int result = num1*num2;

    QString resStr = QString::number(result);
    ui->result->setText(resStr);
    qDebug() << " " << resStr;
}




void MainWindow::numberClickHandler(int n)
{
    qDebug() << "valittu numero: " << n;
    QString str = QString::number(n);
    if (tila == 1) {
        ui->num1->setText(ui->num1->text() + str);
        //laita n -> num1

    } else if(tila == 2){
        ui->num2->setText(ui->num2->text() + str);
        //laita n -> num2
    }
}

void MainWindow::setActiveControls()
{

    if(tila == 1){
        ui->num1->setEnabled(true);

        ui->num2->setEnabled(false);
        ui->result->setEnabled(false);
        ui->plus->setEnabled(false);
        ui->miinus->setEnabled(false);
        ui->jako->setEnabled(false);
        ui->kerto->setEnabled(false);


    } else if (tila == 2){
        ui->num2->setEnabled(true);

        ui->num1->setEnabled(false);
        ui->result->setEnabled(false);
        ui->plus->setEnabled(false);
        ui->miinus->setEnabled(false);
        ui->jako->setEnabled(false);
        ui->kerto->setEnabled(false);

    }   else if (tila == 3){
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(true);
        ui->plus->setEnabled(true);
        ui->miinus->setEnabled(true);
        ui->jako->setEnabled(true);
        ui->kerto->setEnabled(true);
    }
}


void MainWindow::on_numero1_clicked()
{
    QString str = ui->numero1->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_numero2_clicked()
{
    QString str = ui->numero2->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_numero3_clicked()
{
    QString str = ui->numero3->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_enter_clicked()
{
    /*

      tila 1: syötä numero 1
      tila 2: syötä numero 2
      tila 3: laske tulos
      palataan tila 1

    */

    if(tila > 3){
        tila = 3;
    } else {
        tila++;
    }

    setActiveControls();

    qDebug() << "valittu tila: " << tila;
}


void MainWindow::on_clear_clicked()
{
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
    tila = 1;
    setActiveControls();
}


void MainWindow::on_numero4_clicked()
{
    QString str = ui->numero4->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::on_numero5_clicked()
{
    QString str = ui->numero5->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_numero6_clicked()
{
    QString str = ui->numero6->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_numero7_clicked()
{
    QString str = ui->numero7->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_numero8_clicked()
{
    QString str = ui->numero8->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_numero9_clicked()
{
    QString str = ui->numero9->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_numero0_clicked()
{
    QString str = ui->numero0->text();
    int n = str.toInt();
    numberClickHandler(n);
}

