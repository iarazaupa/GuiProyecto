///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/frame.h>
#include <wx/textctrl.h>
#include <wx/grid.h>
#include <wx/combobox.h>

///////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
/// Class BasePrincipal
///////////////////////////////////////////////////////////////////////////////
class BasePrincipal : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText2;
		wxButton* m_venta;
		wxButton* m_admin;

	public:

		BasePrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BasePrincipal();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseMenuPrincipalVend
///////////////////////////////////////////////////////////////////////////////
class BaseMenuPrincipalVend : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText2;
		wxButton* m_BotonAggClienteVend;
		wxButton* m_BotonVenderVend;
		wxButton* m_BotonVerstockVend;
		wxTextCtrl* m_TextoMenuPVend;
		wxButton* m_BotonBuscarVend;
		wxGrid* m_TablaClientesVend;
		wxButton* m_BotonVolverVend;

	public:

		BaseMenuPrincipalVend( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseMenuPrincipalVend();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseStockVend
///////////////////////////////////////////////////////////////////////////////
class BaseStockVend : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText3;
		wxGrid* m_TablaStockVend;
		wxButton* m_BotonVolverStockVend;

	public:

		BaseStockVend( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseStockVend();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseAggClienteVend
///////////////////////////////////////////////////////////////////////////////
class BaseAggClienteVend : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText4;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_textCtrl2;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_textCtrl3;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_textCtrl4;
		wxStaticText* m_staticText8;
		wxTextCtrl* m_textCtrl5;
		wxButton* m_button9;

	public:

		BaseAggClienteVend( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseAggClienteVend();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseVentaVend
///////////////////////////////////////////////////////////////////////////////
class BaseVentaVend : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText9;
		wxStaticText* m_staticText10;
		wxTextCtrl* m_TextoVentaVend;

	public:

		BaseVentaVend( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseVentaVend();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseMenuVentaVend
///////////////////////////////////////////////////////////////////////////////
class BaseMenuVentaVend : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText11;
		wxButton* m_BotonAggProductoMenuVentaVend;
		wxButton* m_BotonQuitProductoMenuVentaVend;
		wxButton* m_BotonTicketMenuVentaVend;
		wxButton* m_BotonConfVentaMenuVentaVend;

	public:

		BaseMenuVentaVend( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseMenuVentaVend();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseMVAggProductoVend
///////////////////////////////////////////////////////////////////////////////
class BaseMVAggProductoVend : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText12;
		wxComboBox* m_MDespCategVend;
		wxStaticText* m_staticText13;
		wxTextCtrl* m_IDProdVend;
		wxStaticText* m_staticText14;
		wxTextCtrl* m_CantidadVend;
		wxGrid* m_TablaAggProductoVend;
		wxButton* m_BotonAggProductoVend;

	public:

		BaseMVAggProductoVend( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseMVAggProductoVend();

};

