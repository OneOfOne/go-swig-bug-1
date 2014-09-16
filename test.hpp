#ifndef CoreApp_H
#define CoreApp_H
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
class CoreApp {
	QApplication *app;
public:
	CoreApp(int argc, char *argv[]);
	void Exec();
	~CoreApp();
};
#endif
