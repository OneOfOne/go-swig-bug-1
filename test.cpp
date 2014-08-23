#include "test.hpp"

CoreApp::CoreApp(int argc, char *argv[]) {
	app = new QApplication(argc, argv);
}

CoreApp::~CoreApp() {
	delete app;
}
void CoreApp::Exec() {
	QLabel *label = new QLabel("Hello Qt!"); label->show(); 
	app->exec();
}