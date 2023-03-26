#include "MyMainFrame.h"

MyMainFrame::MyMainFrame(wxWindow* parent) :MainFrame(parent) {
	m_staticText1->SetLabel(wxString("你的名字"));
}

void MyMainFrame::OnButtonClick(wxCommandEvent& event) {
	if (input->GetValue() != _T("")) {
		wxMessageBox(input->GetValue() + _T("是一个sb"));
	}
	else { wxMessageBox(_T("名字呢")); }
}
void MyMainFrame::ShowSb1(wxCommandEvent& event) {
	wxMessageBox(_T("No files,sb!!"));
}
void MyMainFrame::ShowSb2(wxCommandEvent& event) {
	wxMessageBox(_T("Help yourself,sb!!"));
}