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
#include <wx/dynarray.h>
#include <wx/dialog.h>

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

		BasePrincipal( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Principal"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

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
		wxButton* m_botonModfDatosClientes;
		wxTextCtrl* m_TextoMenuPVend;
		wxButton* m_BotonBuscarVend;
		wxGrid* m_TablaClientesVend;
		wxButton* m_BotonVolverVend;

	public:

		BaseMenuPrincipalVend( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Vendedor - Menu Principal"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

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

		BaseStockVend( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Vendedor - Stock"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

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
		wxTextCtrl* m_textDNIAggClienteVend;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_textNomAggClienteVend;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_textEmailAggClienteVend;
		wxStaticText* m_staticText8;
		wxTextCtrl* m_textTelAggClienteVend;
		wxButton* m_BotonAgregarAggClienteVend;

	public:

		BaseAggClienteVend( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Vendedor - Agregar Cliente"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

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

		BaseVentaVend( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Vendedor - Venta"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

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

		BaseMenuVentaVend( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Vendedor - Menu de Venta"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

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

		BaseMVAggProductoVend( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Menu Venta - Agregar Producto"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseMVAggProductoVend();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseMVQuitarProd
///////////////////////////////////////////////////////////////////////////////
class BaseMVQuitarProd : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText15;
		wxStaticText* m_staticText16;
		wxTextCtrl* m_textIDQuitarProdVend;
		wxStaticText* m_staticText19;
		wxTextCtrl* m_textCantQuitarProdVend;
		wxGrid* m_TablaQuitarProdVend;
		wxButton* m_BotonEliminarQuitProdVend;

	public:

		BaseMVQuitarProd( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Menu Venta - Quitar Producto"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseMVQuitarProd();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseTicketActual
///////////////////////////////////////////////////////////////////////////////
class BaseTicketActual : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText20;
		wxStaticText* m_staticText21;
		wxStaticText* m_textVentaID;
		wxStaticText* m_staticText23;
		wxStaticText* m_textCliente;
		wxStaticText* m_staticText25;
		wxStaticText* m_textProducto;
		wxStaticText* m_staticText27;
		wxStaticText* m_textCantidad;
		wxStaticText* m_staticText29;
		wxStaticText* m_textPrecioUnitario;
		wxStaticText* m_staticText31;
		wxStaticText* m_textSubtotal;
		wxStaticText* m_staticText33;
		wxStaticText* m_textFecha;
		wxStaticText* m_staticText35;
		wxStaticText* m_textTotal;

	public:

		BaseTicketActual( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Ticket Actual"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );

		~BaseTicketActual();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseVentaConfirmadaVend
///////////////////////////////////////////////////////////////////////////////
class BaseVentaConfirmadaVend : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText20;
		wxStaticText* m_staticText21;
		wxStaticText* m_textVentaConfID;
		wxStaticText* m_staticText23;
		wxStaticText* m_textClienteConf;
		wxStaticText* m_staticText25;
		wxStaticText* m_textProductoConf;
		wxStaticText* m_staticText27;
		wxStaticText* m_textCantidadConf;
		wxStaticText* m_staticText29;
		wxStaticText* m_textPrecioUnitarioConf;
		wxStaticText* m_staticText31;
		wxStaticText* m_textSubtotalConf;
		wxStaticText* m_staticText33;
		wxStaticText* m_textFechaConf;
		wxStaticText* m_staticText35;
		wxStaticText* m_textTotalConf;
		wxButton* m_MenuPrincipalVConf;

	public:

		BaseVentaConfirmadaVend( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Ticket Confirmado"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 218,311 ), long style = wxDEFAULT_DIALOG_STYLE );

		~BaseVentaConfirmadaVend();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseBuscarClienteResult
///////////////////////////////////////////////////////////////////////////////
class BaseBuscarClienteResult : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText88;
		wxStaticText* m_staticText89;
		wxStaticText* m_TextDniCliente;
		wxStaticText* m_staticText90;
		wxStaticText* m_textNombreCliente;
		wxStaticText* m_staticText91;
		wxStaticText* m_textEmailCliente;
		wxStaticText* m_staticText92;
		wxStaticText* m_textTelefonoCliente;

	public:

		BaseBuscarClienteResult( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 218,311 ), long style = wxDEFAULT_DIALOG_STYLE );

		~BaseBuscarClienteResult();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseModificarCliente
///////////////////////////////////////////////////////////////////////////////
class BaseModificarCliente : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText88;
		wxStaticText* m_staticText89;
		wxStaticText* m_TextDniCliente;
		wxStaticText* m_staticText90;
		wxStaticText* m_textNombreCliente;
		wxStaticText* m_staticText126;
		wxTextCtrl* m_TextModifNombreCliente;
		wxStaticText* m_staticText901;
		wxStaticText* m_textEmailCliente;
		wxStaticText* m_staticText1261;
		wxTextCtrl* m_TextModifEmailCliente;
		wxStaticText* m_staticText902;
		wxStaticText* m_textNombreCliente2;
		wxStaticText* m_staticText1262;
		wxTextCtrl* m_TextModifTelefonoCliente;
		wxButton* m_BotonGuardarModificacion;

	public:

		BaseModificarCliente( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseModificarCliente();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseAdministradorContrasenia
///////////////////////////////////////////////////////////////////////////////
class BaseAdministradorContrasenia : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText74;
		wxTextCtrl* m_textIngreseContraseniaAdmin;
		wxButton* m_botonIngresarAdmin;

	public:

		BaseAdministradorContrasenia( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 218,311 ), long style = wxDEFAULT_DIALOG_STYLE );

		~BaseAdministradorContrasenia();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseMenuAdmin
///////////////////////////////////////////////////////////////////////////////
class BaseMenuAdmin : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText75;
		wxStaticText* m_staticText76;
		wxGrid* m_gridVentasDelMes;
		wxStaticText* m_staticText77;
		wxGrid* m_gridProductoStockBajo;
		wxButton* m_BotonAggClienteAdmin;
		wxButton* m_BotonVerListClienteAdmin;
		wxButton* m_BotonQuitarProdAdmin;
		wxButton* m_BotonVerVentasAdmin;
		wxButton* m_BotonAggProdAdmin;
		wxButton* m_BotonVerListProdAdmin;
		wxButton* m_BotonEliminarCategoriaAdmin;
		wxButton* m_BotonEditarCategoriaAdmin;
		wxButton* m_BotonMenuPrincipalAdmin;

	public:

		BaseMenuAdmin( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 586,328 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseMenuAdmin();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseAggClienteAdmin
///////////////////////////////////////////////////////////////////////////////
class BaseAggClienteAdmin : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText4;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_textDNIAggClienteVend;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_textNomAggClienteAdmin;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_textEmailAggClienteVend;
		wxStaticText* m_staticText8;
		wxTextCtrl* m_textTelAggClienteAdmin;
		wxButton* m_BotonAgregarAggClienteAdmin;

	public:

		BaseAggClienteAdmin( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseAggClienteAdmin();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseAggProductoAdmin
///////////////////////////////////////////////////////////////////////////////
class BaseAggProductoAdmin : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText84;
		wxComboBox* m_BoxCategorias;
		wxStaticText* m_staticText5;
		wxTextCtrl* m_TextIDProducAdmin;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_TextNombreAdmin;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_TextoPrecioAdmin;
		wxStaticText* m_staticText8;
		wxTextCtrl* m_TextStockAdmin;
		wxButton* m_BotonAggAdmin;

	public:

		BaseAggProductoAdmin( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseAggProductoAdmin();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseQuitarProductoAdmin
///////////////////////////////////////////////////////////////////////////////
class BaseQuitarProductoAdmin : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText88;
		wxGrid* m_GridQuitarProducAdmin;
		wxButton* m_BotonEliminarAdmin;

	public:

		BaseQuitarProductoAdmin( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseQuitarProductoAdmin();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseListProdAdmin
///////////////////////////////////////////////////////////////////////////////
class BaseListProdAdmin : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText89;
		wxGrid* m_GridListProdAdmin;

	public:

		BaseListProdAdmin( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 516,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseListProdAdmin();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseVentasAdmin
///////////////////////////////////////////////////////////////////////////////
class BaseVentasAdmin : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText90;
		wxGrid* m_GridVentasAdmin;

	public:

		BaseVentasAdmin( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 519,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseVentasAdmin();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseListClienteAdmin
///////////////////////////////////////////////////////////////////////////////
class BaseListClienteAdmin : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText91;
		wxGrid* m_GridListClienteAdmin;

	public:

		BaseListClienteAdmin( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseListClienteAdmin();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BaseEliminarCategoriaAdmin
///////////////////////////////////////////////////////////////////////////////
class BaseEliminarCategoriaAdmin : public wxFrame
{
	private:

	protected:
		wxStaticText* m_staticText92;
		wxComboBox* m_comboBox3;
		wxButton* m_button31;

	public:

		BaseEliminarCategoriaAdmin( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~BaseEliminarCategoriaAdmin();

};

