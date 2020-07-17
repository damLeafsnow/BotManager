#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(this,SIGNAL(signal_send_command(QString)), ui->miraiWidget, SLOT(slot_recieve_command(QString)));
    connect(ui->miraiRefreshButton,SIGNAL(clicked()), ui->miraiWidget, SLOT(slot_recieve_refresh()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_miraiSendButton_clicked()
{
    QString str = ui->miraiLineEdit->text();
    if ( !str.isEmpty() ) {
        ui->miraiLineEdit->clear();
        emit signal_send_command(str);
    }
}
