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
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_15_clicked();

    void on_plus_clicked();

    void on_miinus_clicked();

    void on_jako_clicked();

    void on_kerto_clicked();

    void on_pushButton_3_clicked();

    void on_n1_clicked();

    void on_n2_clicked();

    void on_n3_clicked();

    void on_numero1_clicked();

    void on_numero2_clicked();

    void on_numero3_clicked();

    void on_enter_clicked();

    void on_clear_clicked();

    void on_numero4_clicked();

    void on_numero5_clicked();

    void on_numero6_clicked();

    void on_numero7_clicked();

    void on_numero8_clicked();

    void on_numero9_clicked();

    void on_numero0_clicked();

private:
    void numberClickHandler(int);
    Ui::MainWindow *ui;
    int tila = 1;
    void setActiveControls();

};
#endif // MAINWINDOW_H
