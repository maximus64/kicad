///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
class COLOR_SWATCH;

#include "widgets/resettable_panel.h"
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statline.h>
#include <wx/sizer.h>
#include <wx/radiobut.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class PANEL_3D_COLORS_BASE
///////////////////////////////////////////////////////////////////////////////
class PANEL_3D_COLORS_BASE : public RESETTABLE_PANEL
{
	private:

	protected:
		wxStaticText* m_environmentLable;
		wxStaticLine* m_staticline1;
		wxStaticText* backgroundTopLabel;
		COLOR_SWATCH* m_backgroundTop;
		wxStaticText* backgroundBotLabel;
		COLOR_SWATCH* m_backgroundBottom;
		wxStaticText* solderPasteLabel;
		COLOR_SWATCH* m_solderPaste;
		wxStaticText* m_boardColorsLabel;
		wxStaticLine* m_staticline2;
		wxRadioButton* m_boardStackupRB;
		wxRadioButton* m_specificColorsRB;
		wxStaticText* silkscreenTopLabel;
		COLOR_SWATCH* m_silkscreenTop;
		wxStaticText* silkscreenBottomLabel;
		COLOR_SWATCH* m_silkscreenBottom;
		wxStaticText* solderMaskTopLabel;
		COLOR_SWATCH* m_solderMaskTop;
		wxStaticText* solderMaskBottomLabel;
		COLOR_SWATCH* m_solderMaskBottom;
		wxStaticText* surfaceFinishLabel;
		COLOR_SWATCH* m_surfaceFinish;
		wxStaticText* boardBodyLabel;
		COLOR_SWATCH* m_boardBody;

	public:

		PANEL_3D_COLORS_BASE( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );

		~PANEL_3D_COLORS_BASE();

};

