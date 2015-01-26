#include "ConverterLogic.h"
#include <QDebug>

ConverterLogic::ConverterLogic(QString name, float rate)
{
	qDebug() << "Hi, my name is" << name << "and my rate is" << rate;

}

ConverterLogic::~ConverterLogic()
{

}

