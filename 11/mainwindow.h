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

private:
    Ui::MainWindow *ui;
};
#endif
