#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  QPixmap px("/home/jim/Documents/Programs/GMeme/gm_banner_1.jpg");
  ui->mainImage->setPixmap(px);
}

MainWindow::~MainWindow()
{
    delete ui;
}
