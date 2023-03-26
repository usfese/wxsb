#pragma once
#include "ui/ui.h"
#include <wx/wx.h>

class MyMainFrame :public MainFrame {
public:
	void OnButtonClick(wxCommandEvent& event);
	void ShowSb1(wxCommandEvent& event);
	void ShowSb2(wxCommandEvent& event);
	MyMainFrame(wxWindow* parent);
};