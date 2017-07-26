/***************************************************************
 * Name:      wxsqlighttestMain.h
 * Purpose:   Defines Application Frame
 * Author:    JamesBrooks ()
 * Created:   2017-01-29
 * Copyright: JamesBrooks ()
 * License:
 **************************************************************/

#ifndef WXSQLIGHTTESTMAIN_H
#define WXSQLIGHTTESTMAIN_H


//(*Headers(wxsqlighttestFrame)
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/statline.h>
#include <wx/grid.h>
#include <wx/filedlg.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class wxsqlighttestFrame: public wxFrame
{
    public:

        wxsqlighttestFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~wxsqlighttestFrame();

    private:

        //(*Handlers(wxsqlighttestFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton3Click(wxCommandEvent& event);
        void OnButton4Click(wxCommandEvent& event);
        void OnButton7Click(wxCommandEvent& event);
        void OnButton5Click(wxCommandEvent& event);
        void OnButton6Click(wxCommandEvent& event);
        void OnButton4Click1(wxCommandEvent& event);
        void OnButton8Click(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        void OnGrid2CellSelect(wxGridEvent& event);
        void OnGrid2LabelLeftClick(wxGridEvent& event);
        void OnGrid2LabelLeftDClick(wxGridEvent& event);
        void OnGrid1LabelLeftClick(wxGridEvent& event);
        void OnGrid1CellLeftClick(wxGridEvent& event);
        void OnMenuItem3Selected(wxCommandEvent& event);
        void OnMenuItem3Selected1(wxCommandEvent& event);
        //*)

        void CreateDataTable(void);
        void update_DataTable(void);
        void update_MainTable(void);
        void DataTable_ToData(void);



        //(*Identifiers(wxsqlighttestFrame)
        static const long ID_GRID1;
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long ID_TEXTCTRL1;
        static const long ID_TEXTCTRL2;
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_TEXTCTRL3;
        static const long ID_STATICTEXT3;
        static const long ID_STATICLINE1;
        static const long ID_STATICTEXT4;
        static const long ID_STATICTEXT5;
        static const long ID_STATICTEXT6;
        static const long ID_STATICTEXT7;
        static const long ID_STATICTEXT8;
        static const long ID_TEXTCTRL4;
        static const long ID_TEXTCTRL5;
        static const long ID_TEXTCTRL6;
        static const long ID_TEXTCTRL7;
        static const long ID_TEXTCTRL8;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long ID_BUTTON5;
        static const long ID_BUTTON6;
        static const long ID_BUTTON7;
        static const long ID_GRID2;
        static const long ID_BUTTON8;
        static const long ID_STATICTEXT9;
        static const long ID_STATICTEXT10;
        static const long ID_STATICTEXT11;
        static const long ID_STATICTEXT12;
        static const long ID_STATICTEXT13;
        static const long ID_STATICTEXT14;
        static const long ID_STATICTEXT15;
        static const long ID_STATICTEXT16;
        static const long ID_STATICTEXT17;
        static const long ID_STATICTEXT18;
        static const long ID_STATICTEXT19;
        static const long ID_STATICTEXT20;
        static const long ID_STATICTEXT21;
        static const long ID_STATICTEXT22;
        static const long idMenuQuit;
        static const long idImport;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(wxsqlighttestFrame)
        wxStaticText* StaticText10;
        wxStaticText* StaticText22;
        wxStaticText* StaticText9;
        wxStaticText* StaticText20;
        wxTextCtrl* TextCtrl4;
        wxButton* Button4;
        wxFileDialog* FileDialogLoad;
        wxStaticText* StaticText13;
        wxStaticText* StaticText2;
        wxStaticText* StaticText14;
        wxButton* Button1;
        wxStaticText* StaticText6;
        wxTextCtrl* TextCtrl6;
        wxStaticText* StaticText19;
        wxStaticText* StaticText8;
        wxStaticText* StaticText11;
        wxStaticText* StaticText18;
        wxStaticText* StaticText1;
        wxStaticText* StaticText3;
        wxGrid* Grid1;
        wxButton* Button2;
        wxStaticText* StaticText21;
        wxButton* Button6;
        wxButton* Button5;
        wxGrid* Grid2;
        wxMenuItem* MenuItem3;
        wxButton* Button3;
        wxStaticText* StaticText5;
        wxButton* Button7;
        wxStaticText* StaticText7;
        wxStatusBar* StatusBar1;
        wxTextCtrl* TextCtrl8;
        wxStaticLine* StaticLine1;
        wxTextCtrl* TextCtrl2;
        wxTextCtrl* TextCtrl7;
        wxTextCtrl* TextCtrl1;
        wxStaticText* StaticText15;
        wxStaticText* StaticText12;
        wxTextCtrl* TextCtrl5;
        wxStaticText* StaticText17;
        wxStaticText* StaticText4;
        wxTextCtrl* TextCtrl3;
        wxStaticText* StaticText16;
        wxButton* Button8;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // WXSQLIGHTTESTMAIN_H
