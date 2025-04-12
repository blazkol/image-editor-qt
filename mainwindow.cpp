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
}
