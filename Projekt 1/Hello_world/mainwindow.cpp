#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    qDebug() << "Connect się powiódł?" << connect(ui->pushButtonTest, SIGNAL(clicked()), this, SLOT(myCustomSlot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    qDebug() << "Wcisnąłeś przycisk OK";
}


void MainWindow::myCustomSlot() {
  qDebug() << "Wcisnales przycisk Test i wykorzystałeś mechanizm sygnałów i slotów";
}
