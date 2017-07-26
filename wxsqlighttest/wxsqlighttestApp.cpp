/***************************************************************
 * Name:      wxsqlighttestApp.cpp
 * Purpose:   Code for Application Class
 * Author:    JamesBrooks ()
 * Created:   2017-01-29
 * Copyright: JamesBrooks ()
 * License:
 **************************************************************/

#include "wxsqlighttestApp.h"

//(*AppHeaders
#include "wxsqlighttestMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(wxsqlighttestApp);

bool wxsqlighttestApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	wxsqlighttestFrame* Frame = new wxsqlighttestFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
