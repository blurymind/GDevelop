#ifndef CREDITS_H
#define CREDITS_H

//(*Headers(Credits)
#include <wx/notebook.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/panel.h>
#include <wx/hyperlink.h>
#include <wx/bmpbuttn.h>
#include <wx/statbmp.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/html/htmlwin.h>
//*)

class Credits: public wxDialog
{
	public:

		Credits(wxWindow* parent);
		virtual ~Credits();

		//(*Declarations(Credits)
		wxButton* OkBt;
		wxStaticBitmap* StaticBitmap2;
		wxStaticBitmap* StaticBitmap8;
		wxBitmapButton* BitmapButton5;
		wxNotebook* Notebook1;
		wxStaticText* StaticText2;
		wxPanel* Panel4;
		wxStaticBitmap* StaticBitmap1;
		wxHyperlinkCtrl* HyperlinkCtrl5;
		wxStaticText* StaticText8;
		wxBitmapButton* BitmapButton2;
		wxPanel* Panel1;
		wxStaticText* StaticText1;
		wxBitmapButton* BitmapButton8;
		wxStaticText* StaticText3;
		wxHyperlinkCtrl* HyperlinkCtrl1;
		wxBitmapButton* BitmapButton1;
		wxHyperlinkCtrl* florianRival;
		wxPanel* Panel3;
		wxStaticText* StaticText5;
		wxHtmlWindow* HtmlWindow1;
		wxBitmapButton* BitmapButton6;
		wxBitmapButton* BitmapButton7;
		wxBitmapButton* BitmapButton4;
		wxTextCtrl* TextCtrl1;
		wxBitmapButton* BitmapButton3;
		wxPanel* Panel2;
		wxStaticText* StaticText4;
		//*)

	protected:

		//(*Identifiers(Credits)
		static const long ID_STATICBITMAP1;
		static const long ID_STATICTEXT1;
		static const long ID_STATICTEXT4;
		static const long ID_HYPERLINKCTRL1;
		static const long ID_STATICBITMAP2;
		static const long ID_STATICTEXT5;
		static const long ID_HYPERLINKCTRL2;
		static const long ID_STATICBITMAP8;
		static const long ID_STATICTEXT2;
		static const long ID_HYPERLINKCTRL16;
		static const long ID_PANEL1;
		static const long ID_TEXTCTRL1;
		static const long ID_PANEL2;
		static const long ID_HTMLWINDOW1;
		static const long ID_PANEL3;
		static const long ID_STATICTEXT3;
		static const long ID_BITMAPBUTTON8;
		static const long ID_BITMAPBUTTON2;
		static const long ID_BITMAPBUTTON9;
		static const long ID_BITMAPBUTTON10;
		static const long ID_STATICTEXT8;
		static const long ID_BITMAPBUTTON11;
		static const long ID_BITMAPBUTTON1;
		static const long ID_BITMAPBUTTON12;
		static const long ID_BITMAPBUTTON3;
		static const long ID_PANEL4;
		static const long ID_NOTEBOOK1;
		static const long ID_BUTTON1;
		//*)

	private:

		//(*Handlers(Credits)
		void OnOkBtClick(wxCommandEvent& event);
		void OnCppBtClick(wxCommandEvent& event);
		void OnGccBtClick(wxCommandEvent& event);
		void OnCBBtClick(wxCommandEvent& event);
		void OnSFMLBtClick(wxCommandEvent& event);
		void OnWxBtClick(wxCommandEvent& event);
		void OnCompilGamesBtClick(wxCommandEvent& event);
		void OnDonBtClick(wxCommandEvent& event);
		void OnTextCtrl1Text(wxCommandEvent& event);
		void OnLLVMBtClick(wxCommandEvent& event);
		void OnTinyXmlBtClick(wxCommandEvent& event);
		void OnBoostBtClick(wxCommandEvent& event);
		//*)
        void OpenLink(wxString link);

		DECLARE_EVENT_TABLE()
};

#endif
