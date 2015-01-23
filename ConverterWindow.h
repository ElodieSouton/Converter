#ifndef CONVERTERWINDOW_H
#define CONVERTERWINDOW_H

#include <QMainWindow>

namespace Ui {
class ConverterWindow;
}

class ConverterWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit ConverterWindow(QWidget *parent = 0);
	~ConverterWindow();

private:
	Ui::ConverterWindow *ui;
};

#endif // CONVERTERWINDOW_H
