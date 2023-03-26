#include "main.h"
wxIMPLEMENT_APP(MyApp);
bool MyApp::OnInit() {
	MyMainFrame* frame = new MyMainFrame(NULL);
	frame->Show();
	return true;
}