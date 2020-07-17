#include "MiraiWidget.h"
#include <QTextBrowser>
#include <QLayout>

MiraiWidget::MiraiWidget(QWidget *parent) : QWidget(parent)
{
    browser = new QTextBrowser();
    QHBoxLayout* layout = new QHBoxLayout();
    layout->addWidget(browser);
    this->setLayout(layout);
}

void MiraiWidget::slot_recieve_command(QString str)
{
    browser->append(str);
}

void MiraiWidget::slot_recieve_refresh()
{
    browser->append("refresh.");
}
