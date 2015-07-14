#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTranslator>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    SetupFindToolbar();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::SetupFindToolbar()
{
    edQuery = new QLineEdit(ui->tbFind);
    edQuery->setFixedSize(200,24);
    ui->tbFind->addWidget(edQuery);
    lbShow = new QLabel(ui->tbFind);
    lbShow->setText("   Show: ");
    ui->tbFind->addWidget(lbShow);
    cbFilter = new QComboBox(ui->tbFind);
    cbFilter->setFixedSize(200,24);
    ui->tbFind->addWidget(cbFilter);
}
