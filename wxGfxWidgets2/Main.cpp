//// Main.cpp ///////////////////////////////////////////////////////////
//
//
////////////////////////////////////////////////////////////////////////////

#include "Main.h"

///////////////////////////////////////////////////////
MyFrame::MyFrame(wxFrame *frame, const wxString& title) 
		: wxFrame(frame, -1, title, wxDefaultPosition, wxSize(1050, 800), wxDEFAULT_FRAME_STYLE )
{ 
	mainPanel = new MainPanel(this);
}

///////////////////
MyFrame::~MyFrame() 
{ 
	delete mainPanel;
}




















