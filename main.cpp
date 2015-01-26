#include "ConverterWindow.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
	qDebug() << "start";
	QApplication a(argc, argv);
	// instanciation
	ConverterWindow w;
	w.show();
	return a.exec();

//	qDebug() << "déclaration d'un pointeur";
//	ConverterWindow *w;
//	qDebug() << "instanciation d'un pointeur";
//	w = new ConverterWindow();

//	qDebug() << "affichage de la fenêtre";
//	w->show();


//	qDebug() << "lancement de la boucle d'evenement";
//	int ret = a.exec();

//	qDebug() << "fin de la boucle d'evenement";

//	qDebug() << "desallocation du pointeur";

//	delete w;

//	qDebug() << "sortie";

//	return ret;

	qDebug() << "ce code n'est jamais executé";

}
