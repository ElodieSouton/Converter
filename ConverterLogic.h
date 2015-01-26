#ifndef CONVERTERLOGIC_H
#define CONVERTERLOGIC_H

#include <QObject>

class ConverterLogic : public QObject
{
	Q_OBJECT
public:
	explicit ConverterLogic(QString name, float rate);
	~ConverterLogic();

signals:

public slots:
};

#endif // CONVERTERLOGIC_H
