#include <QDebug>

#include "ConverterWindow.h"
#include "ui_ConverterWindow.h"

ConverterWindow::ConverterWindow() :
	ui(new Ui::ConverterWindow),
	_converter("bitcoin", 200)
{
	ui->setupUi(this);
}

ConverterWindow::~ConverterWindow()
{
	delete ui;
}

void ConverterWindow::on_euroValueLineEdit_textChanged(const QString &arg1)
{
	qDebug() << _count;
	float euroValue = arg1.toFloat();
	float bitcoinValue = euroValue/200;
	qDebug() << euroValue;
	ui->bitcoinValueLineEdit->setText(QString("%1 bitcoins").arg(bitcoinValue));
}
