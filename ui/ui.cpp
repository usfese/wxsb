///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ui.h"

///////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);
	this->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));

	m_menubar6 = new wxMenuBar(0);
	m_menu1 = new wxMenu();
	wxMenuItem* m_menuItem1;
	m_menuItem1 = new wxMenuItem(m_menu1, wxID_ANY, wxString(wxT("sb")), wxEmptyString, wxITEM_NORMAL);
	m_menu1->Append(m_menuItem1);

	m_menubar6->Append(m_menu1, wxT("File"));

	m_menu2 = new wxMenu();
	wxMenuItem* m_menuItem2;
	m_menuItem2 = new wxMenuItem(m_menu2, wxID_ANY, wxString(wxT("sb")), wxEmptyString, wxITEM_NORMAL);
	m_menu2->Append(m_menuItem2);

	m_menubar6->Append(m_menu2, wxT("Help"));

	this->SetMenuBar(m_menubar6);

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer(wxVERTICAL);

	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer(0, 2, 0, 0);
	fgSizer1->SetFlexibleDirection(wxBOTH);
	fgSizer1->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

	m_staticText1 = new wxStaticText(this, wxID_ANY, wxString::FromUTF8("你的名字"), wxDefaultPosition, wxDefaultSize, 0);
	m_staticText1->Wrap(-1);
	fgSizer1->Add(m_staticText1, 0, wxALL, 5);

	input = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(300, -1), 0);
#ifdef __WXGTK__
	if (!input->HasFlag(wxTE_MULTILINE))
	{
		input->SetMaxLength(30);
	}
#else
	input->SetMaxLength(30);
#endif
	fgSizer1->Add(input, 0, wxALL, 5);

	bSizer1->Add(fgSizer1, 1, wxEXPAND, 5);

	m_button1 = new wxButton(this, wxID_ANY, wxT("sbButton"), wxDefaultPosition, wxDefaultSize, 0);
	m_button1->SetFont(wxFont(24, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("宋体")));
	m_button1->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_INACTIVECAPTION));

	bSizer1->Add(m_button1, 1, wxEXPAND | wxALL, 5);

	this->SetSizer(bSizer1);
	this->Layout();
	m_statusBar1 = this->CreateStatusBar(1, wxSTB_SIZEGRIP, wxID_ANY);

	this->Centre(wxBOTH);

	// Connect Events
	m_menu1->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::ShowSb1), this, m_menuItem1->GetId());
	m_menu2->Bind(wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::ShowSb2), this, m_menuItem2->GetId());
	m_button1->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::OnButtonClick), NULL, this);
}

MainFrame::~MainFrame()
{
	// Disconnect Events
	m_button1->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::OnButtonClick), NULL, this);
}