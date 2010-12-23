///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov 18 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __gui_database_tilesets__
#define __gui_database_tilesets__

#include <wx/intl.h>

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/listbox.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/textctrl.h>
#include <wx/statbox.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/statbmp.h>
#include <wx/radiobox.h>
#include <wx/panel.h>
#include <wx/notebook.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class pnTileset_Base
///////////////////////////////////////////////////////////////////////////////
class pnTileset_Base : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* stTileset;
		wxListBox* listTileset;
		wxButton* btnTilesetMaxNumber;
		wxTextCtrl* tcTilesetName;
		wxTextCtrl* tcTilesetGraphic;
		wxNotebook* nbTileset;
		wxPanel* nbTilesetLowerLayer;
		wxButton* btnTilesetLowerLayerTerrainType;
		wxButton* btnTilesetLowerLayerBlocking;
		wxButton* btnTilesetLowerLayerFourDirections;
		wxButton* btnTilesetLowerLayerChangeEverything;
		wxStaticBitmap* bmpTilesetWaterAnimation;
		wxRadioBox* rbTilesetWaterAnimationSequence;
		wxRadioBox* rbTilesetWaterAnimationSpeed;
		wxListBox* listTilesetLowerLayerGraphic;
		wxListBox* listTilesetLowerLayerTerrain;
		wxPanel* nbTilesetUpperLayer;
		wxButton* btnTileseUpperLayerModifyBlocking;
		wxButton* btnTileseUpperLayerModifyFourDirections;
		wxButton* btnTileseUpperLayerModifyCounterFlag;
		wxListBox* listTilesetUpperLayerGraphic;
	
	public:
		
		pnTileset_Base( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTAB_TRAVERSAL ); 
		~pnTileset_Base();
	
};

#endif //__gui_database_tilesets__
