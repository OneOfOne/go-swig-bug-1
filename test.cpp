#pragma once
#include "test.hpp"

CoreApp::CoreApp(int argc, char *argv[]) {
	app = new QCoreApplication(argc, argv);
}

CoreApp::~CoreApp() {
	delete app;
}
void CoreApp::Exec() {
	app->exec();
}