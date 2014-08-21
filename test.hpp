#pragma once
#include <QtCore/QCoreApplication>

class CoreApp {
	QCoreApplication *app;
public:
	CoreApp(int argc, char *argv[]);
	void Exec();
	~CoreApp();
};
