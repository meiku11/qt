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
    firstNumber = ui->lineEdit->text().toDouble();
    pendingOperation = "+";
    ui->lineEdit->clear();
}

void MainWindow::on_pushButton_Min_clicked()
{
    firstNumber = ui->lineEdit->text().toDouble();
    pendingOperation = "-";
    ui->lineEdit->clear();
}

void MainWindow::on_pushButton_um_clicked()
{
    firstNumber = ui->lineEdit->text().toDouble();
    pendingOperation = "*";
    ui->lineEdit->clear();
}

void MainWindow::on_pushButton_r_clicked()
{
    firstNumber = ui->lineEdit->text().toDouble();
    pendingOperation = "/";
    ui->lineEdit->clear();
}



void MainWindow::on_pushButton_kvk_clicked()
{
    QString s;
    double x = ui->lineEdit->text().toDouble();
    double r = sqrt(x);
    s.sprintf("%10.5lf", r);
    ui->lineEdit->setText(s);
}


void MainWindow::on_pushButton_tan_clicked()
{
    QString s;
    double x = ui->lineEdit->text().toDouble();
    double r = tan(x);
    s.sprintf("%10.5lf", r);
    ui->lineEdit->setText(s);
}

void MainWindow::on_pushButton_log_clicked()
{
    QString s;
    double x = ui->lineEdit->text().toDouble();
    double r = log(x);
    s.sprintf("%10.5lf", r);
    ui->lineEdit->setText(s);
}


void MainWindow::on_pushButton_factorial_clicked()
{
    QString s;
    int n = ui->lineEdit->text().toInt();
    long long result = 1;

    if (n < 0) {
        ui->lineEdit->setText("Ошибка");
        return;
    }

    for (int i = 1; i <= n; i++)
        result *= i;

    s.sprintf("%lld", result);
    ui->lineEdit->setText(s);
}


void MainWindow::on_pushButton_0_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit->setText(ui->lineEdit->text() + "0");
}

void MainWindow::on_pushButton_1_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit->setText(ui->lineEdit->text() + "1");
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit->setText(ui->lineEdit->text() + "2");
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit->setText(ui->lineEdit->text() + "3");
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit->setText(ui->lineEdit->text() + "4");
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit->setText(ui->lineEdit->text() + "5");
}

void MainWindow::on_pushButton_6_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit->setText(ui->lineEdit->text() + "6");
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit->setText(ui->lineEdit->text() + "7");
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit->setText(ui->lineEdit->text() + "8");
}

void MainWindow::on_pushButton_9_clicked()
{
    ui->lineEdit->setText("");
    ui->lineEdit->setText(ui->lineEdit->text() + "9");
}


void MainWindow::on_pushButton_dot_clicked()
{
    QString text = ui->lineEdit->text();
    if (!text.contains("."))
        ui->lineEdit->setText(text + ".");
}


void MainWindow::on_pushButton_equals_clicked()
{
    QString s;
    double secondNumber = ui->lineEdit->text().toDouble();
    double result = 0;

    if (pendingOperation == "+") result = firstNumber + secondNumber;
    if (pendingOperation == "-") result = firstNumber - secondNumber;
    if (pendingOperation == "*") result = firstNumber * secondNumber;
    if (pendingOperation == "/") result = firstNumber / secondNumber;

    s.sprintf("%10.5lf", result);
    ui->lineEdit->setText(s);
}

void MainWindow::on_pushButton_clear_clicked()
{
    ui->lineEdit->setText("");
}
