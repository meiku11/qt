#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>

namespace Ui {
    class MainWindow;
}
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_Plus_clicked();

    void on_pushButton_Min_clicked();

    void on_pushButton_um_clicked();

    void on_pushButton_r_clicked();

    void on_pushButton_kvk_clicked();

    void on_pushButton_tan_clicked();

    void on_pushButton_log_clicked();

    void on_pushButton_factorial_clicked();

    void on_pushButton_dot_clicked();

    void on_pushButton_equals_clicked();

    void on_pushButton_clear_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::MainWindow *ui;
    double firstNumber;
    QString pendingOperation;
};
#endif
