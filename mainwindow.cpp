#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    drawArea = new DrawArea;
    setCentralWidget(drawArea);
    setWindowTitle(tr("Image Editor"));
    resize(500, 500);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete drawArea;
}

void MainWindow::on_actionNew_triggered()
{

}


void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), QDir::currentPath());

    if (!fileName.isEmpty())
        drawArea->openImage(fileName);
}

void MainWindow::on_actionSave_triggered()
{

}

void MainWindow::on_actionSave_as_triggered()
{

}

void MainWindow::on_actionPrint_triggered()
{

}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

