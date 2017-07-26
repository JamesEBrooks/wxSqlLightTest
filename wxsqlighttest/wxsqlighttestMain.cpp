/***************************************************************
 * Name:      wxsqlighttestMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    JamesBrooks ()
 * Created:   2017-01-29
 * Copyright: JamesBrooks ()
 * License:
 **************************************************************/

#include "wxsqlighttestMain.h"
#include <wx/msgdlg.h>
#include <wx/msgdlg.h>
#include <wx/bitmap.h>
#include <wx/filename.h>
#include <wx/dcmemory.h>
#include <wx/clipbrd.h>

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <cstring>
#include <iostream>
#include <fstream>
#include "sqlite3.h"
#include "header.h"
#include "other.h"

using namespace std;

#include <stdlib.h>
#include <stdint.h>

sqlite3_stmt *statement;


//(*InternalHeaders(wxsqlighttestFrame)
#include <wx/font.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat
{
    short_f, long_f
};

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(wxsqlighttestFrame)
const long wxsqlighttestFrame::ID_GRID1 = wxNewId();
const long wxsqlighttestFrame::ID_STATICTEXT1 = wxNewId();
const long wxsqlighttestFrame::ID_STATICTEXT2 = wxNewId();
const long wxsqlighttestFrame::ID_TEXTCTRL1 = wxNewId();
const long wxsqlighttestFrame::ID_TEXTCTRL2 = wxNewId();
const long wxsqlighttestFrame::ID_BUTTON1 = wxNewId();
const long wxsqlighttestFrame::ID_BUTTON2 = wxNewId();
const long wxsqlighttestFrame::ID_TEXTCTRL3 = wxNewId();
const long wxsqlighttestFrame::ID_STATICTEXT3 = wxNewId();
const long wxsqlighttestFrame::ID_STATICLINE1 = wxNewId();
const long wxsqlighttestFrame::ID_STATICTEXT4 = wxNewId();
const long wxsqlighttestFrame::ID_STATICTEXT5 = wxNewId();
const long wxsqlighttestFrame::ID_STATICTEXT6 = wxNewId();
const long wxsqlighttestFrame::ID_STATICTEXT7 = wxNewId();
const long wxsqlighttestFrame::ID_STATICTEXT8 = wxNewId();
const long wxsqlighttestFrame::ID_TEXTCTRL4 = wxNewId();
const long wxsqlighttestFrame::ID_TEXTCTRL5 = wxNewId();
const long wxsqlighttestFrame::ID_TEXTCTRL6 = wxNewId();
const long wxsqlighttestFrame::ID_TEXTCTRL7 = wxNewId();
const long wxsqlighttestFrame::ID_TEXTCTRL8 = wxNewId();
const long wxsqlighttestFrame::ID_BUTTON3 = wxNewId();
const long wxsqlighttestFrame::ID_BUTTON4 = wxNewId();
const long wxsqlighttestFrame::ID_BUTTON5 = wxNewId();
const long wxsqlighttestFrame::ID_BUTTON6 = wxNewId();
const long wxsqlighttestFrame::ID_BUTTON7 = wxNewId();
const long wxsqlighttestFrame::ID_GRID2 = wxNewId();
const long wxsqlighttestFrame::ID_BUTTON8 = wxNewId();
const long wxsqlighttestFrame::ID_STATICTEXT9 = wxNewId();
const long wxsqlighttestFrame::ID_STATICTEXT10 = wxNewId();
const long wxsqlighttestFrame::ID_STATICTEXT11 = wxNewId();
const long wxsqlighttestFrame::ID_STATICTEXT12 = wxNewId();
const long wxsqlighttestFrame::ID_STATICTEXT13 = wxNewId();
const long wxsqlighttestFrame::ID_STATICTEXT14 = wxNewId();
const long wxsqlighttestFrame::ID_STATICTEXT15 = wxNewId();
const long wxsqlighttestFrame::ID_STATICTEXT16 = wxNewId();
const long wxsqlighttestFrame::ID_STATICTEXT17 = wxNewId();
const long wxsqlighttestFrame::ID_STATICTEXT18 = wxNewId();
const long wxsqlighttestFrame::ID_STATICTEXT19 = wxNewId();
const long wxsqlighttestFrame::ID_STATICTEXT20 = wxNewId();
const long wxsqlighttestFrame::ID_STATICTEXT21 = wxNewId();
const long wxsqlighttestFrame::ID_STATICTEXT22 = wxNewId();
const long wxsqlighttestFrame::idMenuQuit = wxNewId();
const long wxsqlighttestFrame::idImport = wxNewId();
const long wxsqlighttestFrame::idMenuAbout = wxNewId();
const long wxsqlighttestFrame::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(wxsqlighttestFrame,wxFrame)
    //(*EventTable(wxsqlighttestFrame)
    //*)


END_EVENT_TABLE()

wxsqlighttestFrame::wxsqlighttestFrame(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(wxsqlighttestFrame)
    wxMenuItem* MenuItem2;
    wxMenuItem* MenuItem1;
    wxMenu* Menu1;
    wxMenuBar* MenuBar1;
    wxMenu* Menu2;

    Create(parent, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE|wxNO_BORDER, _T("wxID_ANY"));
    SetClientSize(wxSize(996,692));
    SetBackgroundColour(wxColour(44,88,84));
    Grid1 = new wxGrid(this, ID_GRID1, wxPoint(16,328), wxSize(448,264), wxFULL_REPAINT_ON_RESIZE, _T("ID_GRID1"));
    Grid1->CreateGrid(1000,6);
    Grid1->SetForegroundColour(wxColour(48,48,48));
    Grid1->SetBackgroundColour(wxColour(48,48,48));
    Grid1->EnableEditing(false);
    Grid1->EnableGridLines(true);
    Grid1->SetRowLabelSize(40);
    Grid1->SetDefaultColSize(50, true);
    Grid1->SetLabelTextColour(wxColour(64,64,64));
    Grid1->SetColLabelValue(0, _("AB"));
    Grid1->SetColLabelValue(1, _("Curve"));
    Grid1->SetColLabelValue(2, _("Pos"));
    Grid1->SetColLabelValue(3, _("Red"));
    Grid1->SetColLabelValue(4, _("Green"));
    Grid1->SetColLabelValue(5, _("Blue"));
    Grid1->SetDefaultCellFont( Grid1->GetFont() );
    Grid1->SetDefaultCellTextColour( Grid1->GetForegroundColour() );
    StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Querry"), wxPoint(16,56), wxDefaultSize, 0, _T("ID_STATICTEXT1"));
    StaticText1->SetForegroundColour(wxColour(255,255,128));
    StaticText2 = new wxStaticText(this, ID_STATICTEXT2, _("Select"), wxPoint(16,88), wxDefaultSize, 0, _T("ID_STATICTEXT2"));
    StaticText2->SetForegroundColour(wxColour(255,255,128));
    TextCtrl1 = new wxTextCtrl(this, ID_TEXTCTRL1, wxEmptyString, wxPoint(104,48), wxSize(208,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrl2 = new wxTextCtrl(this, ID_TEXTCTRL2, _("SELECT * FROM user;"), wxPoint(104,80), wxSize(208,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    Button1 = new wxButton(this, ID_BUTTON1, _("Open"), wxPoint(384,80), wxSize(80,23), 0, wxDefaultValidator, _T("ID_BUTTON1"));
    Button2 = new wxButton(this, ID_BUTTON2, _("Querry"), wxPoint(384,48), wxSize(80,23), 0, wxDefaultValidator, _T("ID_BUTTON2"));
    TextCtrl3 = new wxTextCtrl(this, ID_TEXTCTRL3, _("LightScreen"), wxPoint(104,16), wxSize(208,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    TextCtrl3->Disable();
    StaticText3 = new wxStaticText(this, ID_STATICTEXT3, _("db Name"), wxPoint(16,24), wxDefaultSize, 0, _T("ID_STATICTEXT3"));
    StaticText3->SetForegroundColour(wxColour(255,255,128));
    StaticLine1 = new wxStaticLine(this, ID_STATICLINE1, wxPoint(16,120), wxSize(448,1), wxLI_HORIZONTAL|wxNO_BORDER, _T("ID_STATICLINE1"));
    StaticLine1->SetForegroundColour(wxColour(0,170,170));
    StaticLine1->SetBackgroundColour(wxColour(0,128,128));
    StaticText4 = new wxStaticText(this, ID_STATICTEXT4, _("Swatch Name"), wxPoint(16,160), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    StaticText4->SetForegroundColour(wxColour(255,255,128));
    StaticText5 = new wxStaticText(this, ID_STATICTEXT5, _("Thumb"), wxPoint(16,192), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    StaticText5->SetForegroundColour(wxColour(255,255,128));
    StaticText6 = new wxStaticText(this, ID_STATICTEXT6, _("Size"), wxPoint(16,224), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    StaticText6->SetForegroundColour(wxColour(255,255,128));
    StaticText7 = new wxStaticText(this, ID_STATICTEXT7, _("Other 1"), wxPoint(16,256), wxDefaultSize, 0, _T("ID_STATICTEXT7"));
    StaticText7->SetForegroundColour(wxColour(255,255,128));
    StaticText8 = new wxStaticText(this, ID_STATICTEXT8, _("Other 2"), wxPoint(16,288), wxDefaultSize, 0, _T("ID_STATICTEXT8"));
    StaticText8->SetForegroundColour(wxColour(255,255,128));
    TextCtrl4 = new wxTextCtrl(this, ID_TEXTCTRL4, wxEmptyString, wxPoint(104,152), wxSize(208,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    TextCtrl5 = new wxTextCtrl(this, ID_TEXTCTRL5, wxEmptyString, wxPoint(104,184), wxSize(208,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
    TextCtrl6 = new wxTextCtrl(this, ID_TEXTCTRL6, wxEmptyString, wxPoint(104,216), wxSize(208,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
    TextCtrl7 = new wxTextCtrl(this, ID_TEXTCTRL7, wxEmptyString, wxPoint(104,248), wxSize(208,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL7"));
    TextCtrl8 = new wxTextCtrl(this, ID_TEXTCTRL8, wxEmptyString, wxPoint(104,280), wxSize(208,21), 0, wxDefaultValidator, _T("ID_TEXTCTRL8"));
    Button3 = new wxButton(this, ID_BUTTON3, _("Add"), wxPoint(384,152), wxSize(80,23), 0, wxDefaultValidator, _T("ID_BUTTON3"));
    Button4 = new wxButton(this, ID_BUTTON4, _("Delete"), wxPoint(384,192), wxSize(80,23), 0, wxDefaultValidator, _T("ID_BUTTON4"));
    Button5 = new wxButton(this, ID_BUTTON5, _("<"), wxPoint(384,232), wxSize(32,23), 0, wxDefaultValidator, _T("ID_BUTTON5"));
    Button6 = new wxButton(this, ID_BUTTON6, _(">"), wxPoint(432,232), wxSize(32,23), 0, wxDefaultValidator, _T("ID_BUTTON6"));
    Button7 = new wxButton(this, ID_BUTTON7, _("Edit"), wxPoint(384,272), wxSize(80,23), 0, wxDefaultValidator, _T("ID_BUTTON7"));
    Grid2 = new wxGrid(this, ID_GRID2, wxPoint(512,16), wxSize(448,576), wxFULL_REPAINT_ON_RESIZE, _T("ID_GRID2"));
    Grid2->CreateGrid(100,6);
    Grid2->EnableEditing(false);
    Grid2->EnableGridLines(true);
    Grid2->SetRowLabelSize(50);
    Grid2->SetDefaultColSize(65, true);
    Grid2->SetColLabelValue(0, _("ID"));
    Grid2->SetColLabelValue(1, _("Name"));
    Grid2->SetColLabelValue(2, _("Thumb"));
    Grid2->SetColLabelValue(3, _("Size"));
    Grid2->SetColLabelValue(4, _("Other 1"));
    Grid2->SetColLabelValue(5, _("Other 2"));
    Grid2->SetDefaultCellFont( Grid2->GetFont() );
    Grid2->SetDefaultCellTextColour( Grid2->GetForegroundColour() );
    Button8 = new wxButton(this, ID_BUTTON8, _("Create DB"), wxPoint(384,16), wxSize(80,23), 0, wxDefaultValidator, _T("ID_BUTTON8"));
    Button8->Disable();
    StaticText9 = new wxStaticText(this, ID_STATICTEXT9, _("Label"), wxPoint(992,504), wxDefaultSize, 0, _T("ID_STATICTEXT9"));
    StaticText10 = new wxStaticText(this, ID_STATICTEXT10, _("CRUD"), wxPoint(16,600), wxDefaultSize, 0, _T("ID_STATICTEXT10"));
    StaticText10->SetForegroundColour(wxColour(255,255,128));
    wxFont StaticText10Font(14,wxFONTFAMILY_SWISS,wxFONTSTYLE_NORMAL,wxFONTWEIGHT_NORMAL,false,_T("Moonbeam"),wxFONTENCODING_DEFAULT);
    StaticText10->SetFont(StaticText10Font);
    StaticText11 = new wxStaticText(this, ID_STATICTEXT11, _("Row : "), wxPoint(832,600), wxDefaultSize, 0, _T("ID_STATICTEXT11"));
    StaticText11->SetForegroundColour(wxColour(255,255,128));
    StaticText12 = new wxStaticText(this, ID_STATICTEXT12, _("Col : "), wxPoint(904,600), wxDefaultSize, 0, _T("ID_STATICTEXT12"));
    StaticText12->SetForegroundColour(wxColour(255,255,128));
    StaticText13 = new wxStaticText(this, ID_STATICTEXT13, wxEmptyString, wxPoint(872,600), wxSize(24,13), wxALIGN_CENTRE, _T("ID_STATICTEXT13"));
    StaticText13->SetForegroundColour(wxColour(255,255,128));
    StaticText13->SetBackgroundColour(wxColour(0,83,83));
    StaticText14 = new wxStaticText(this, ID_STATICTEXT14, wxEmptyString, wxPoint(936,600), wxSize(24,13), wxALIGN_CENTRE, _T("ID_STATICTEXT14"));
    StaticText14->SetForegroundColour(wxColour(255,255,128));
    StaticText14->SetBackgroundColour(wxColour(0,83,83));
    StaticText15 = new wxStaticText(this, ID_STATICTEXT15, _("Selected Swatch"), wxPoint(512,600), wxDefaultSize, 0, _T("ID_STATICTEXT15"));
    StaticText15->SetForegroundColour(wxColour(255,255,128));
    StaticText16 = new wxStaticText(this, ID_STATICTEXT16, wxEmptyString, wxPoint(608,600), wxSize(80,13), wxALIGN_CENTRE, _T("ID_STATICTEXT16"));
    StaticText16->SetForegroundColour(wxColour(255,255,128));
    StaticText16->SetBackgroundColour(wxColour(0,83,83));
    StaticText17 = new wxStaticText(this, ID_STATICTEXT17, _("Size"), wxPoint(704,600), wxDefaultSize, 0, _T("ID_STATICTEXT17"));
    StaticText17->SetForegroundColour(wxColour(255,255,128));
    StaticText18 = new wxStaticText(this, ID_STATICTEXT18, wxEmptyString, wxPoint(736,600), wxSize(24,13), wxALIGN_CENTRE, _T("ID_STATICTEXT18"));
    StaticText18->SetForegroundColour(wxColour(255,255,128));
    StaticText18->SetBackgroundColour(wxColour(0,83,83));
    StaticText19 = new wxStaticText(this, ID_STATICTEXT19, _("Row : "), wxPoint(336,600), wxDefaultSize, 0, _T("ID_STATICTEXT19"));
    StaticText19->SetForegroundColour(wxColour(255,255,128));
    StaticText20 = new wxStaticText(this, ID_STATICTEXT20, wxEmptyString, wxPoint(376,600), wxSize(24,13), 0, _T("ID_STATICTEXT20"));
    StaticText20->SetForegroundColour(wxColour(255,255,128));
    StaticText20->SetBackgroundColour(wxColour(0,83,83));
    StaticText21 = new wxStaticText(this, ID_STATICTEXT21, _("Col : "), wxPoint(408,600), wxDefaultSize, 0, _T("ID_STATICTEXT21"));
    StaticText21->SetForegroundColour(wxColour(255,255,128));
    StaticText22 = new wxStaticText(this, ID_STATICTEXT22, wxEmptyString, wxPoint(440,600), wxSize(24,13), 0, _T("ID_STATICTEXT22"));
    StaticText22->SetForegroundColour(wxColour(255,255,128));
    StaticText22->SetBackgroundColour(wxColour(0,83,83));
    MenuBar1 = new wxMenuBar();
    Menu1 = new wxMenu();
    MenuItem1 = new wxMenuItem(Menu1, idMenuQuit, _("Quit\tAlt-F4"), _("Quit the application"), wxITEM_NORMAL);
    Menu1->Append(MenuItem1);
    MenuItem3 = new wxMenuItem(Menu1, idImport, _("Import"), wxEmptyString, wxITEM_NORMAL);
    Menu1->Append(MenuItem3);
    MenuBar1->Append(Menu1, _("&File"));
    Menu2 = new wxMenu();
    MenuItem2 = new wxMenuItem(Menu2, idMenuAbout, _("About\tF1"), _("Show info about this application"), wxITEM_NORMAL);
    Menu2->Append(MenuItem2);
    MenuBar1->Append(Menu2, _("Help"));
    SetMenuBar(MenuBar1);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, 0, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -1 };
    int __wxStatusBarStyles_1[1] = { wxSB_NORMAL };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);
    FileDialogLoad = new wxFileDialog(this, _("Select file"), wxEmptyString, wxEmptyString, wxFileSelectorDefaultWildcardStr, wxFD_DEFAULT_STYLE, wxDefaultPosition, wxDefaultSize, _T("wxFileDialog"));

    Connect(ID_GRID1,wxEVT_GRID_CELL_LEFT_CLICK,(wxObjectEventFunction)&wxsqlighttestFrame::OnGrid1CellLeftClick);
    Connect(ID_GRID1,wxEVT_GRID_LABEL_LEFT_CLICK,(wxObjectEventFunction)&wxsqlighttestFrame::OnGrid1LabelLeftClick);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&wxsqlighttestFrame::OnButton1Click);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&wxsqlighttestFrame::OnButton2Click);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&wxsqlighttestFrame::OnButton3Click);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&wxsqlighttestFrame::OnButton4Click1);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&wxsqlighttestFrame::OnButton5Click);
    Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&wxsqlighttestFrame::OnButton6Click);
    Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&wxsqlighttestFrame::OnButton7Click);
    Connect(ID_GRID2,wxEVT_GRID_LABEL_LEFT_CLICK,(wxObjectEventFunction)&wxsqlighttestFrame::OnGrid2LabelLeftClick);
    Connect(ID_GRID2,wxEVT_GRID_LABEL_LEFT_DCLICK,(wxObjectEventFunction)&wxsqlighttestFrame::OnGrid2LabelLeftDClick);
    Connect(ID_GRID2,wxEVT_GRID_SELECT_CELL,(wxObjectEventFunction)&wxsqlighttestFrame::OnGrid2CellSelect);
    Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&wxsqlighttestFrame::OnButton8Click);
    Connect(idMenuQuit,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&wxsqlighttestFrame::OnQuit);
    Connect(idImport,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&wxsqlighttestFrame::OnMenuItem3Selected1);
    Connect(idMenuAbout,wxEVT_COMMAND_MENU_SELECTED,(wxObjectEventFunction)&wxsqlighttestFrame::OnAbout);
    //*)

    Grid1->DisableDragGridSize();
    Grid2->DisableDragGridSize();

    Grid1->DisableDragColSize();
    Grid2->DisableDragColSize();

    Grid1->DisableDragRowSize();
    Grid2->DisableDragRowSize();

}

wxsqlighttestFrame::~wxsqlighttestFrame()
{
    //(*Destroy(wxsqlighttestFrame)
    //*)
}

void wxsqlighttestFrame::OnQuit(wxCommandEvent& event)
{
    Close();
}

void wxsqlighttestFrame::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void wxsqlighttestFrame::OnButton1Click(wxCommandEvent& event)
{

    update_MainTable();

}

///< This function is the handler for the DELETE button.
void wxsqlighttestFrame::OnButton4Click1(wxCommandEvent& event)
{
    sqlite3 *db;
    char *zErrMsg = 0;
    int  rc;
    const char *sql;
    char *dbname;

    wxString dbName=((TextCtrl3->GetValue())+".db");
    wxCharBuffer buffer=dbName.ToAscii();
    dbname = ( buffer.data() );

    rc = sqlite3_open(dbname, &db);
    if (!rc)
    {
        TextCtrl2->SetLabel("Opened successfully~lklk");
    }

    wxString SQLCommand=TextCtrl1->GetValue();
    buffer=SQLCommand.ToAscii();
    //sql = ( buffer.data() );
    sql = "DELETE from LIGHTSCREEN_DATABASE where Name='"+TextCtrl4->GetValue()+"';";

    rc = sqlite3_exec(db, sql,NULL,NULL, &zErrMsg);

    if(rc!=SQLITE_OK)
    {
        wxString mystring = wxString::Format(wxT("%i"),rc);
        TextCtrl1->SetLabel("SQL error  : ");
        TextCtrl1->AppendText(mystring);
        sqlite3_free(zErrMsg);
    }
    else
    {
        TextCtrl1->SetLabel("Query successful");
        remove((TextCtrl4->GetValue())+".db");  // This works but needs error checking I think to be on safe side.

    }
    sqlite3_close(db);
    SwatchSelect=0;
    update_MainTable();

}


///< This function is the handler for the ADD button.
void wxsqlighttestFrame::OnButton3Click(wxCommandEvent& event)
{
    sqlite3 *db;
    char *zErrMsg = 0;
    int  rc;
    const char *sql;
    char *dbname;

    wxString dbName=((TextCtrl3->GetValue())+".db");
    wxCharBuffer buffer=dbName.ToAscii();
    dbname = ( buffer.data() );

    rc = sqlite3_open(dbname, &db);
    if (!rc)
    {
        TextCtrl2->SetLabel("dbcreated successfull**y");
    }

    int test=99;
    sql = "INSERT INTO LIGHTSCREEN_DATABASE (Name,Thumb,Size,Other1,Other2) VALUES ('"+TextCtrl4->GetValue()+"' ,'"+TextCtrl5->GetValue()+"','"+TextCtrl6->GetValue()+"', 0, 0 );";

    rc = sqlite3_exec(db, sql,NULL,NULL, &zErrMsg);

    if(rc!=SQLITE_OK)
    {
        wxString mystring = wxString::Format(wxT("%i"),rc);
        TextCtrl1->SetLabel("SQL error  : ");
        TextCtrl1->AppendText(mystring);
        sqlite3_free(zErrMsg);
    }
    else
    {
        TextCtrl1->SetLabel("Table Created");

    }
    sqlite3_close(db);
    update_MainTable();
    CreateDataTable();

}

///< This function creates and then populates a Light Screen db.
void wxsqlighttestFrame::CreateDataTable(void)

{
    sqlite3 *db;
    char *zErrMsg = 0;
    int  rc;
    const char *sql;
    char *dbname;

    wxString dbName=((TextCtrl4->GetValue())+".db");
    wxCharBuffer buffer=dbName.ToAscii();
    dbname = ( buffer.data() );

    rc = sqlite3_open(dbname, &db);
    if (!rc)
    {
        TextCtrl2->SetLabel("dbcreated successfull**y");
    }

    int test=99;
    sql = "CREATE TABLE LIGHTSCREEN_SWATCH(ABness INT,CurveVal INT,Position INT,Red INT,Green INT,Blue INT)";

    rc = sqlite3_exec(db, sql,NULL,NULL, &zErrMsg);

    if(rc!=SQLITE_OK)
    {
        wxString mystring = wxString::Format(wxT("%i"),rc);
        TextCtrl1->SetLabel("SQL error  : ");
        TextCtrl1->AppendText(mystring);
        sqlite3_free(zErrMsg);
    }
    else
    {
        TextCtrl1->SetLabel("Table Created");

    }

    for(unsigned int i = 0; i < FullTable_FadeData.size(); ++i)
    {
sql = "INSERT INTO LIGHTSCREEN_SWATCH (ABness,CurveVal,Position,Red,Green,Blue) VALUES ('"+Grid1->GetCellValue(i,0)+"' ,'"+Grid1->GetCellValue(i,1)+"','"+Grid1->GetCellValue(i,2)+"','"+Grid1->GetCellValue(i,3)+"','"+Grid1->GetCellValue(i,4)+"','"+Grid1->GetCellValue(i,5)+"' );";

//sql = "INSERT INTO LIGHTSCREEN_SWATCH (ABness,CurveVal,Position,Red,Green,Blue) VALUES ('"+Grid1->GetCellValue(i,0)+"' ,'"+Grid1->GetCellValue(i,0)+"','"+Grid1->GetCellValue(i,0)"','"+Grid1->GetCellValue(i,0)"', '"+Grid1->GetCellValue(i,0)"', '"+Grid1->GetCellValue(i,0)"' );" ;

            rc = sqlite3_exec(db, sql,NULL,NULL, &zErrMsg);

            if(rc!=SQLITE_OK)
            {
                wxString mystring = wxString::Format(wxT("%i"),rc);
                TextCtrl1->SetLabel("SQL error  : ");
                TextCtrl1->AppendText(mystring);
                sqlite3_free(zErrMsg);
            }
            else
            {
                TextCtrl1->SetLabel("Data Created");
            }

  //  }

    }
    sqlite3_close(db);
}

///< Blank
void wxsqlighttestFrame::OnButton4Click(wxCommandEvent& event)
{
}

///< This function is the handler for the EDIT button, it is yet to be defined.
void wxsqlighttestFrame::OnButton7Click(wxCommandEvent& event)
{
}

///< This function is the handler for the < button.
void wxsqlighttestFrame::OnButton5Click(wxCommandEvent& event)
{
    SwatchSelect-=1;
    update_MainTable();
}

///< This function is the handler for the > button.
void wxsqlighttestFrame::OnButton6Click(wxCommandEvent& event)
{
    SwatchSelect+=1;
    update_MainTable();

}

///< This function is the handler for the Create DB button. The button is greyed out so the code is non working.
void wxsqlighttestFrame::OnButton8Click(wxCommandEvent& event)
{
    sqlite3 *db;
    char *zErrMsg = 0;
    int  rc;
    const char *sql;
    char *dbname;

    wxString dbName=((TextCtrl3->GetValue())+".db");
    wxCharBuffer buffer=dbName.ToAscii();
    dbname = ( buffer.data() );

    rc = sqlite3_open(dbname, &db);
    if (!rc)
    {
        TextCtrl2->SetLabel("dbcreated successfully");
    }

    sql = "CREATE TABLE LIGHTSCREEN_DATABASE(id INTEGER PRIMARY KEY ASC,Name TEXT,Thumb TEXT,Size INT,Other1 INT,Other2 INT)";

    rc = sqlite3_exec(db, sql,NULL,NULL, &zErrMsg);

    if(rc!=SQLITE_OK)
    {
        wxString mystring = wxString::Format(wxT("%i"),rc);
        TextCtrl1->SetLabel("SQL error  : ");
        TextCtrl1->AppendText(mystring);
        sqlite3_free(zErrMsg);
    }
    else
    {
        TextCtrl1->SetLabel("Table Created");
    }
    sqlite3_close(db);
}

///< This function is the handler for the Query DB button. It has no real purpose at the moment.
void wxsqlighttestFrame::OnButton2Click(wxCommandEvent& event)
{
    sqlite3 *db;
    char *zErrMsg = 0;
    int  rc;
    char *sql;
    char *dbname;


    wxString dbName=((TextCtrl3->GetValue())+".db");
    wxCharBuffer buffer=dbName.ToAscii();
    dbname = ( buffer.data() );

    rc = sqlite3_open(dbname, &db);
    if (!rc)
    {
        TextCtrl2->SetLabel("Opened successfully");
    }

    wxString SQLCommand=TextCtrl1->GetValue();
    buffer=SQLCommand.ToAscii();
    sql = ( buffer.data() );

    /* Execute SQL statement */
    rc = sqlite3_exec(db, sql,NULL,NULL, &zErrMsg);
//   callback(); // do this straight away after and CREATE_callback collecdata that call basck populates drid with
    if(rc!=SQLITE_OK)
    {
        wxString mystring = wxString::Format(wxT("%i"),rc);
        // fprintf(stderr, "SQL error: %s\n", zErrMsg);
        TextCtrl1->SetLabel("SQL error  : ");
        TextCtrl1->AppendText(mystring);
        sqlite3_free(zErrMsg);
    }
    else
    {
        //  fprintf(stdout, "Table created successfully\n");
        TextCtrl1->SetLabel("Query successful");

    }
    sqlite3_close(db);

}

///< This function updates the display depending on the cell selected in Grind 2. The library grid.
void wxsqlighttestFrame::OnGrid2CellSelect(wxGridEvent& event)
{
    std::string Cell_Contects;
    int Col=event.GetCol();
    int Row=event.GetRow();
    SwatchSelect=Row;
    update_MainTable();

    Cell_Contects = FullTable_Header[Row][1];

    StaticText14->SetLabel( wxString::Format(wxT("%d"), (int)Col));
    StaticText13->SetLabel( wxString::Format(wxT("%d"), (int)Row));
    StaticText16->SetLabel( Cell_Contects);

}

///< This function updates the display depending on the cell selected in the label section of Grid2.
///< It also uses the vector as the source of the information. It also calls update_DataTable() to update Grid 1.
void wxsqlighttestFrame::OnGrid2LabelLeftClick(wxGridEvent& event)
{
    vector<std::string> Cell_Contects;
    std::string Size;
    int Col=event.GetCol();
    int Row=event.GetRow();
    SwatchSelect=Row;
    update_MainTable();

    if(SwatchSelect>=0)
    {
        Size = FullTable_Header[SwatchSelect][3];
        CurrantSize = atoi(Size.c_str());

        Cell_Contects.push_back( FullTable_Header[SwatchSelect][1]);
        StaticText16->SetLabel( Cell_Contects[0]);
        TextCtrl4->SetLabel(Cell_Contects[0]);  // Temporary.

        Cell_Contects.push_back( FullTable_Header[SwatchSelect][2]);
        TextCtrl5->SetLabel(Cell_Contects[1]);  // Temporary.

        Cell_Contects.push_back( FullTable_Header[SwatchSelect][3]);
        TextCtrl6->SetLabel(Cell_Contects[2]);  // Temporary.

        Cell_Contects.push_back( FullTable_Header[SwatchSelect][4]);
        TextCtrl7->SetLabel(Cell_Contects[3]);  // Temporary.

        Cell_Contects.push_back( FullTable_Header[SwatchSelect][5]);
        TextCtrl8->SetLabel(Cell_Contects[4]);  // Temporary.

    }
    StaticText14->SetLabel( wxString::Format(wxT("%d"), (int)Col));
    StaticText13->SetLabel( wxString::Format(wxT("%d"), (int)Row));
    StaticText16->SetLabel( Cell_Contects[0]);
    TextCtrl4->SetLabel(Cell_Contects[0]);  // Temporary.
    StaticText18->SetLabel(Size);  // Temporary.

    update_DataTable();
}

///< Double click on label in Grid 2. Not used Yes.
void wxsqlighttestFrame::OnGrid2LabelLeftDClick(wxGridEvent& event)
{
    // Actual select option.
}

///< This function loads a selected db and populates Grid 1 with the Fade Point data set.
void wxsqlighttestFrame::update_DataTable(void)
{
    vector<vector<string>> FullTable_Data;
    std::string Cell_Contects;
    Grid1->SetCellHighlightColour(*wxWHITE);
    sqlite3 *db;
    int  rc;
    char *dbname;

    wxString dbName=((TextCtrl4->GetValue())+".db");
    wxCharBuffer buffer=dbName.ToAscii();
    dbname = ( buffer.data() );

    rc = sqlite3_open(dbname, &db);
    if (!rc)
    {
        TextCtrl2->SetLabel("Opened successfully");
    }
    if(sqlite3_prepare_v2(db, "SELECT * FROM LIGHTSCREEN_SWATCH;", -1, &statement, 0) == SQLITE_OK)

    {
        TextCtrl2->SetLabel("SELECT * successfully");
        int cols = sqlite3_column_count(statement);
        int result = 0;

        while(true)
        {
            result = sqlite3_step(statement);

            if(result == SQLITE_ROW)
            {
                vector<string>  TableData_Row;
                for(int col = 0; col < cols; col++)
                {
                    std::string val;
                    char *msg = (char*)sqlite3_column_text(statement, col);

                    if(msg)
                    {
                        val=msg;
                    }
                    else
                    {
                        val = "";
                    }
                    TableData_Row.push_back(val);
                }

                FullTable_Data.push_back(TableData_Row);
            }
            else
            {
                break;
            }
        }
        sqlite3_finalize(statement);
    }

    int NumRows=FullTable_Data.size(); // Get size of table and resize.
    Grid1->ClearGrid();

    FullTable_FadeData=FullTable_Data; // All other vectors go out of scope FullTable_Headers persists and is used to convert to int.

    for(unsigned int i = 0; i < FullTable_Data.size(); ++i)
    {
        for(unsigned int j = 0; j < FullTable_Data[i].size(); ++j)
        {
            Cell_Contects = FullTable_Data[i][j];
            Grid1->SetCellValue(i,j,Cell_Contects);
        }
    }

    sqlite3_close(db);
}

///< This function potentially is for turning the sql grid data into actual real Fade Point
void wxsqlighttestFrame::DataTable_ToData(void)
{
    int Count=0;
    std::string Word[500];

    int temp=atoi(Word[1].c_str());
    Fades.resize(temp);

    for(unsigned int j=0; j<Fades.size(); j++)
    {

        temp=atoi(Word[2+Count].c_str());
        Fades[j].ABnes=temp;
        temp=atof(Word[3+Count].c_str());
        Fades[j].CurveVal=temp;
        temp=atoi(Word[4+Count].c_str());
        Fades[j].Position=temp;
        temp=atoi(Word[5+Count].c_str());
        Fades[j].red=temp;
        temp=atoi(Word[6+Count].c_str());
        Fades[j].green=temp;
        temp=atoi(Word[7+Count].c_str());
        Fades[j].blue=temp;
        Count+=6;
    }
}

///< This function updates the display depending on the cell selected in the label section of Grid2.
void wxsqlighttestFrame::OnGrid1LabelLeftClick(wxGridEvent& event)
{
    int Col=event.GetCol();
    int Row=event.GetRow();

    StaticText22->SetLabel( wxString::Format(wxT("%d"), (int)Col));
    StaticText20->SetLabel( wxString::Format(wxT("%d"), (int)Row));

}

///< This function updates the display depending on the cell selected in the grid section of Grid2.
void wxsqlighttestFrame::OnGrid1CellLeftClick(wxGridEvent& event)
{
    int Col=event.GetCol();
    int Row=event.GetRow();

    StaticText22->SetLabel( wxString::Format(wxT("%d"), (int)Col));
    StaticText20->SetLabel( wxString::Format(wxT("%d"), (int)Row));
}

///<  Blank.
void wxsqlighttestFrame::OnMenuItem3Selected(wxCommandEvent& event)
{

}
///< This function is for importing saved Fade Point data from the Light Screen app.
///< It populates Grid 1 with the data and also the Vector FullTable_Data , this will be used to convert to a sql db.
void wxsqlighttestFrame::OnMenuItem3Selected1(wxCommandEvent& event)
{
    vector<vector<string>> FullTable_Data;
    vector<string>  TableData_Row;
    std::string Cell_Contects;

    int Count=0;
    int dialog=FileDialogLoad->ShowModal();
    if(dialog==wxID_OK)
    {
        wxFileName my_file(FileDialogLoad->GetPath());
        wxString my_file_ext=my_file.GetFullPath();
        wxString name=my_file.GetName();
        std::string Line;
        std::string Word[500];
        std::ifstream OpenFile (my_file_ext);

        if (!OpenFile)
        {
            wxMessageBox(_("File does Not Exist"), _("Warning"),wxICON_WARNING);
            return ;
        }

        int i=0;
        while( OpenFile.good() )
        {
            getline ( OpenFile, Line, '\n');
            if (Line!="")
            {
                Word[i]=Line;
                i++;
            }
        }

        this->SetTitle(Word[0]);
        FileName=Word[0];
        int temp=atoi(Word[1].c_str());
        Fades.resize(temp);

        wxString mystring = wxString::Format(wxT("%i"),Fades.size());
        TextCtrl4->SetLabel(name);
        TextCtrl6->SetLabel(Word[1]);

        for(unsigned int j=0; j<Fades.size(); j++)
        {
            temp=atoi(Word[2+Count].c_str());
            Fades[j].ABnes=temp;
            TableData_Row.push_back(Word[2+Count]);

            temp=atof(Word[3+Count].c_str());
            Fades[j].CurveVal=temp;
            TableData_Row.push_back(Word[3+Count]);

            temp=atoi(Word[4+Count].c_str());
            Fades[j].Position=temp;
            TableData_Row.push_back(Word[4+Count]);

            temp=atoi(Word[5+Count].c_str());
            Fades[j].red=temp;
            TableData_Row.push_back(Word[5+Count]);

            temp=atoi(Word[6+Count].c_str());
            Fades[j].green=temp;
            TableData_Row.push_back(Word[6+Count]);

            temp=atoi(Word[7+Count].c_str());
            Fades[j].blue=temp;
            TableData_Row.push_back(Word[7+Count]);

            FullTable_Data.push_back(TableData_Row);
            Count+=6;
            TableData_Row.clear();
        }
        CurrentPosition=0;
    }

    Grid1->ClearGrid();

    for(unsigned int i = 0; i < FullTable_Data.size(); ++i)
    {
        for(unsigned int j = 0; j < FullTable_Data[i].size(); ++j)
        {

            Cell_Contects = FullTable_Data[i][j];
            Grid1->SetCellValue(i,j,Cell_Contects);
        }

    }
    FullTable_FadeData=FullTable_Data;
}

///< This function loads the main Library db, populates Grid 2 and the Vector FullTable.
void wxsqlighttestFrame::update_MainTable(void)
{

    vector<vector<string>> FullTable;
    std::string Cell_Contects;

    Grid2->SetCellHighlightColour(*wxWHITE);
    sqlite3 *db;
    //char *zErrMsg = 0;
    int  rc;
    // char *sql;
    char *dbname;


    wxString dbName=((TextCtrl3->GetValue())+".db");
    wxCharBuffer buffer=dbName.ToAscii();
    dbname = ( buffer.data() );

    rc = sqlite3_open(dbname, &db);
    if (!rc)
    {
        TextCtrl2->SetLabel("Opened successfully");
    }


    if(sqlite3_prepare_v2(db, "SELECT * FROM LIGHTSCREEN_DATABASE;", -1, &statement, 0) == SQLITE_OK)

    {
        TextCtrl2->SetLabel("SELECT * successfully");
        int cols = sqlite3_column_count(statement);
        int result = 0;

        while(true)
        {
            result = sqlite3_step(statement);

            if(result == SQLITE_ROW)
            {
                vector<string>  TableData_Row;
                for(int col = 0; col < cols; col++)
                {
                    std::string val;
                    char *msg = (char*)sqlite3_column_text(statement, col);

                    if(msg)
                    {
                        val=msg;
                    }
                    else
                    {
                        val = "";
                    }

                    TableData_Row.push_back(val);
                }

                FullTable.push_back(TableData_Row);
            }
            else
            {
                break;
            }
        }
        sqlite3_finalize(statement);
    }

    int NumRows=FullTable.size(); // Get size of table and resize.
    Grid2->ClearGrid();

    FullTable_Header=FullTable; // All other vectors go out of scope FullTable_Headers persists and is used to convert to int.

    for(unsigned int i = 0; i < FullTable.size(); ++i)
    {
        for(unsigned int j = 0; j < FullTable[i].size(); ++j)
        {
            Cell_Contects = FullTable[i][j];
            if(i==SwatchSelect)
            {
                Grid2->SetCellBackgroundColour(i,j, *wxLIGHT_GREY);
            }
            else
            {
                Grid2->SetCellBackgroundColour(i,j, *wxWHITE);
            }
            Grid2->SetCellValue(i,j,Cell_Contects);
        }
    }
}


