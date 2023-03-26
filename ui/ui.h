///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/statusbr.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame
{
	private:

	protected:
		wxMenuBar* m_menubar6;
		wxMenu* m_menu1;
		wxMenu* m_menu2;
		wxStaticText* m_staticText1;
		wxTextCtrl* input;
		wxButton* m_button1;
		wxStatusBar* m_statusBar1;

		// Virtual event handlers, override them in your derived class
		virtual void ShowSb1( wxCommandEvent& event ) { event.Skip(); }
		virtual void ShowSb2( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnButtonClick( wxCommandEvent& event ) { event.Skip(); }


	public:

		MainFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("sb-gui"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 521,305 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MainFrame();

};

