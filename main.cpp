#include "Headers/logger.h"

// print log in console
// RE::ConsoleLog::GetSingleton()->Print("Hello, world!");
// print log in log file
// logger::info("hello world");
// show notification in top-left corner
// RE::DebugNotification("hello world");
// popup a message box with ok button
// RE::DebugMessageBox("hello world");

//SKSE plugin main function
SKSEPluginLoad(const SKSE::LoadInterface* skse) {
	SKSE::Init(skse);
	SetupLog();

	return true;
}