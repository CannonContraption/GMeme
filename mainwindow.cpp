#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  qpx = new QPixmap("/home/jim/Documents/Programs/GMeme/gm_banner_1.jpg");
  ui->mainImage->setText("This will have a path.");
  ui->gm_ban1->setPixmap(*qpx);
  ui->gm_ban2->setPixmap(*qpx);
  //ui->mainImage->setPixmap(*qpx);
  connect(ui->openImage, &QAction::triggered, this, &MainWindow::on_openImage_clicked);
}

void MainWindow::on_openImage_clicked(){
    filedia = new QFileDialog(this, tr("Open Image"), "~", tr("Image Files (*.png *.jpg *.bmp);;All Files (*)"));
    filedia->setFileMode(QFileDialog::ExistingFile);
    QStringList fnames;
    if(filedia->exec()){
        fnames = filedia->selectedFiles();
        qpx->load(fnames[0]);
        ui->mainImage->setPixmap(*qpx);
        //ui->mainImage->setText(fnames[0]);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
