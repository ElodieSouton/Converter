#ifndef CONVERTERWINDOW_H
#define CONVERTERWINDOW_H

#include <QMainWindow>

#include "ConverterLogic.h"

namespace Ui {
class ConverterWindow;
}

// public -> préservations des methode publique de QMain
class ConverterWindow : public QMainWindow
{
	// pour toute classe heritat de QObjetct, l'appel de cette macro permet d'utilser les signaux et slots
	Q_OBJECT

public:
	explicit ConverterWindow();
	~ConverterWindow();

private slots:
	void on_euroValueLineEdit_textChanged(const QString &arg1);

private:
	int _count;
	ConverterLogic _converter;
	Ui::ConverterWindow *ui;
};

#endif // CONVERTERWINDOW_H
