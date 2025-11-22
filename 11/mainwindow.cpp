#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)


{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Plus_clicked()
{
    QString s;
    double x1, x2, x3;
    x1 = ui->lineEdit->text().toDouble();
    x2 = ui->lineEdit_2->text().toDouble();
    x3=x1+x2;
    s.sprintf("%10.5lf",x3); ui->lineEdit_3->setText(s);
}


void MainWindow::on_pushButton_Min_clicked()
{
    QString s;
    double x1, x2, x3;
    x1 = ui->lineEdit->text().toDouble();
    x2 = ui->lineEdit_2->text().toDouble();
    x3=x1-x2;
    s.sprintf("%10.5lf",x3); ui->lineEdit_3->setText(s);
}


void MainWindow::on_pushButton_um_clicked()
{
    QString s;
    double x1, x2, x3;
    x1 = ui->lineEdit->text().toDouble();
    x2 = ui->lineEdit_2->text().toDouble();
    x3=x1*x2;
    s.sprintf("%10.5lf",x3); ui->lineEdit_3->setText(s);
}


void MainWindow::on_pushButton_r_clicked()
{
    QString s;
    double x1, x2, x3;
    x1 = ui->lineEdit->text().toDouble();
    x2 = ui->lineEdit_2->text().toDouble();
    x3=x1/x2;
    s.sprintf("%10.5lf",x3); ui->lineEdit_3->setText(s);
}


void MainWindow::on_pushButton_kvk_clicked()
{
    QString s;
    double x1, x2, x3;
    x1 = ui->lineEdit_4->text().toDouble();
    x2 = sqrt(x1);
    s.sprintf("%10.5lf",x2); ui->lineEdit_5->setText(s);
}


void MainWindow::on_pushButton_tan_clicked()
{
    QString s;
    double x1, x2, x3;
    x1 = ui->lineEdit_4->text().toDouble();
    x2 = tan(x1);
    s.sprintf("%10.5lf",x2); ui->lineEdit_5->setText(s);
}

void MainWindow::on_pushButton_log_clicked()
{
    QString s;
    double x1, x2, x3;
    x1 = ui->lineEdit_4->text().toDouble();
    x2 = log(x1);
    s.sprintf("%10.5lf",x2); ui->lineEdit_5->setText(s);
}

void MainWindow::on_pushButton_factorial_clicked()
{
    QString s;
    int n;
    long long result = 1;

    // Получаем число из lineEdit
    n = ui->lineEdit_4->text().toInt();

    // Проверяем, что число неотрицательное
    if (n < 0) {
        ui->lineEdit_5->setText("Ошибка: отрицательное число");
        return;
    }

    // Вычисляем факториал
    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    // Форматируем результат и выводим
    s.sprintf("%lld", result);
    ui->lineEdit_5->setText(s);
}

