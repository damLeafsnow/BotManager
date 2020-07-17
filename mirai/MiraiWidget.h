#pragma once

#include <QWidget>

class QTextBrowser;

class MiraiWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MiraiWidget(QWidget *parent = nullptr);

signals:

public slots:
    void slot_recieve_command(QString str);
    void slot_recieve_refresh();

private:
    // debug
    QTextBrowser *browser;
};

