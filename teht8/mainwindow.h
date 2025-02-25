#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_startButton_clicked();

    void on_aikaButton1_clicked();

    void on_aikaButton2_clicked();

    void on_stopButton_clicked();

    void on_switchButton1_clicked();

    void on_switchButton2_clicked();

public slots:
    void timeout();

private:
    Ui::MainWindow *ui;
    short player1Time;
    short player2Time;
    short currentPlayer = 0;
    short gameTime;
    short tila = 0;

    QTimer *pQTimer;

    void updateProgressBar();
    void updatePlayer1Time();
    void updatePlayer2Time();
    void endTimer();
    void setGameInfoText(QString, short);
};
#endif // MAINWINDOW_H
