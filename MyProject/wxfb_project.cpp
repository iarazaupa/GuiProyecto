///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 4.2.1-0-g80c4cb6)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

BasePrincipal::BasePrincipal( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("¿Como desea ingresar?"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	m_staticText2->SetFont( wxFont( 18, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );
	m_staticText2->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer3->Add( m_staticText2, 0, wxTOP|wxALIGN_CENTER_HORIZONTAL, 60 );


	bSizer2->Add( bSizer3, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );

	m_venta = new wxButton( this, wxID_ANY, wxT("Vendedor"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_venta, 1, wxALL, 25 );

	m_admin = new wxButton( this, wxID_ANY, wxT("Administrador"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer5->Add( m_admin, 1, wxALIGN_CENTER_VERTICAL, 25 );


	bSizer2->Add( bSizer5, 0, wxALIGN_CENTER_HORIZONTAL, 50 );


	this->SetSizer( bSizer2 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_venta->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePrincipal::ClickBotonVendedor ), NULL, this );
	m_admin->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePrincipal::ClickBotonAdministrador ), NULL, this );
}

BasePrincipal::~BasePrincipal()
{
	// Disconnect Events
	m_venta->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePrincipal::ClickBotonVendedor ), NULL, this );
	m_admin->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BasePrincipal::ClickBotonAdministrador ), NULL, this );

}

BaseMenuPrincipalVend::BaseMenuPrincipalVend( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("MENU"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	m_staticText2->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer5->Add( m_staticText2, 0, wxALL, 5 );


	bSizer4->Add( bSizer5, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxHORIZONTAL );

	m_BotonAggClienteVend = new wxButton( this, wxID_ANY, wxT("Agregar Cliente"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_BotonAggClienteVend, 1, wxALL, 5 );

	m_BotonVenderVend = new wxButton( this, wxID_ANY, wxT("Vender"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_BotonVenderVend, 0, wxALL, 5 );


	bSizer4->Add( bSizer6, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 0 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );

	m_BotonVerstockVend = new wxButton( this, wxID_ANY, wxT("Ver stock"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_BotonVerstockVend, 0, wxALL, 5 );

	m_botonModfDatosClientes = new wxButton( this, wxID_ANY, wxT("Modificar Clientes"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer7->Add( m_botonModfDatosClientes, 0, wxALL, 5 );


	bSizer4->Add( bSizer7, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_TextoMenuPVend = new wxTextCtrl( this, wxID_ANY, wxT("Ingrese Dni del cliente"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_TextoMenuPVend, 1, wxALL, 5 );

	m_BotonBuscarVend = new wxButton( this, wxID_ANY, wxT("Buscar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_BotonBuscarVend, 0, wxALL, 5 );


	bSizer4->Add( bSizer9, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );

	m_TablaClientesVend = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_TablaClientesVend->CreateGrid( 3, 3 );
	m_TablaClientesVend->EnableEditing( true );
	m_TablaClientesVend->EnableGridLines( true );
	m_TablaClientesVend->EnableDragGridSize( false );
	m_TablaClientesVend->SetMargins( 0, 0 );

	// Columns
	m_TablaClientesVend->SetColSize( 0, 120 );
	m_TablaClientesVend->SetColSize( 1, 167 );
	m_TablaClientesVend->SetColSize( 2, 109 );
	m_TablaClientesVend->EnableDragColMove( false );
	m_TablaClientesVend->EnableDragColSize( true );
	m_TablaClientesVend->SetColLabelValue( 0, wxT("DNI") );
	m_TablaClientesVend->SetColLabelValue( 1, wxT("Nombre") );
	m_TablaClientesVend->SetColLabelValue( 2, wxT("Telefono") );
	m_TablaClientesVend->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_TablaClientesVend->EnableDragRowSize( true );
	m_TablaClientesVend->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_TablaClientesVend->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer10->Add( m_TablaClientesVend, 1, wxALL, 5 );


	bSizer4->Add( bSizer10, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxHORIZONTAL );

	m_BotonVolverVend = new wxButton( this, wxID_ANY, wxT("Volver"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_BotonVolverVend, 0, wxALL, 5 );


	bSizer4->Add( bSizer11, 0, 0, 5 );


	this->SetSizer( bSizer4 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_BotonAggClienteVend->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseMenuPrincipalVend::ClickBotonAggClienteVend ), NULL, this );
	m_BotonVenderVend->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseMenuPrincipalVend::ClickBotonVenderVend ), NULL, this );
}

BaseMenuPrincipalVend::~BaseMenuPrincipalVend()
{
	// Disconnect Events
	m_BotonAggClienteVend->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseMenuPrincipalVend::ClickBotonAggClienteVend ), NULL, this );
	m_BotonVenderVend->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BaseMenuPrincipalVend::ClickBotonVenderVend ), NULL, this );

}

BaseStockVend::BaseStockVend( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Lista de productos"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	m_staticText3->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer12->Add( m_staticText3, 0, wxALL, 5 );


	bSizer11->Add( bSizer12, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );

	m_TablaStockVend = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_TablaStockVend->CreateGrid( 5, 5 );
	m_TablaStockVend->EnableEditing( true );
	m_TablaStockVend->EnableGridLines( true );
	m_TablaStockVend->EnableDragGridSize( false );
	m_TablaStockVend->SetMargins( 0, 0 );

	// Columns
	m_TablaStockVend->EnableDragColMove( false );
	m_TablaStockVend->EnableDragColSize( true );
	m_TablaStockVend->SetColLabelValue( 0, wxT("ID") );
	m_TablaStockVend->SetColLabelValue( 1, wxT("Nombre") );
	m_TablaStockVend->SetColLabelValue( 2, wxT("Categoria") );
	m_TablaStockVend->SetColLabelValue( 3, wxT("Precio") );
	m_TablaStockVend->SetColLabelValue( 4, wxT("Cantidad") );
	m_TablaStockVend->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_TablaStockVend->EnableDragRowSize( true );
	m_TablaStockVend->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_TablaStockVend->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer13->Add( m_TablaStockVend, 1, wxALL, 5 );


	bSizer11->Add( bSizer13, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxHORIZONTAL );

	m_BotonVolverStockVend = new wxButton( this, wxID_ANY, wxT("Volver"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer14->Add( m_BotonVolverStockVend, 0, wxALL, 5 );


	bSizer11->Add( bSizer14, 0, 0, 5 );


	this->SetSizer( bSizer11 );
	this->Layout();

	this->Centre( wxBOTH );
}

BaseStockVend::~BaseStockVend()
{
}

BaseAggClienteVend::BaseAggClienteVend( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxVERTICAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Agregar Cliente"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	m_staticText4->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer16->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer15->Add( bSizer16, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("DNI:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer17->Add( m_staticText5, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textDNIAggClienteVend = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_textDNIAggClienteVend, 0, wxALL, 5 );


	bSizer22->Add( bSizer17, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer18->Add( m_staticText6, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_textNomAggClienteVend = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), 0 );
	bSizer18->Add( m_textNomAggClienteVend, 1, wxALL, 5 );


	bSizer22->Add( bSizer18, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Email:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer19->Add( m_staticText7, 1, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );

	m_textEmailAggClienteVend = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer19->Add( m_textEmailAggClienteVend, 0, wxALL, 5 );


	bSizer22->Add( bSizer19, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("Telefono:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer20->Add( m_staticText8, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_textTelAggClienteVend = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_textTelAggClienteVend, 0, wxALL, 5 );


	bSizer22->Add( bSizer20, 1, 0, 5 );


	bSizer15->Add( bSizer22, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxVERTICAL );

	m_BotonAgregarAggClienteVend = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( m_BotonAgregarAggClienteVend, 0, wxALL, 5 );


	bSizer15->Add( bSizer21, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer15 );
	this->Layout();

	this->Centre( wxBOTH );
}

BaseAggClienteVend::~BaseAggClienteVend()
{
}

BaseVentaVend::BaseVentaVend( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer23;
	bSizer23 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer( wxVERTICAL );

	m_staticText9 = new wxStaticText( this, wxID_ANY, wxT("Venta"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	m_staticText9->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer24->Add( m_staticText9, 0, wxALL, 5 );


	bSizer23->Add( bSizer24, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer25;
	bSizer25 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText10 = new wxStaticText( this, wxID_ANY, wxT("ID del cliente para la venta:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	bSizer25->Add( m_staticText10, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_TextoVentaVend = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer25->Add( m_TextoVentaVend, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer23->Add( bSizer25, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer23 );
	this->Layout();

	this->Centre( wxBOTH );
}

BaseVentaVend::~BaseVentaVend()
{
}

BaseMenuVentaVend::BaseMenuVentaVend( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer26;
	bSizer26 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer29;
	bSizer29 = new wxBoxSizer( wxVERTICAL );

	m_staticText11 = new wxStaticText( this, wxID_ANY, wxT("Menu de Venta"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	m_staticText11->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer29->Add( m_staticText11, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer26->Add( bSizer29, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer27;
	bSizer27 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer28;
	bSizer28 = new wxBoxSizer( wxVERTICAL );

	m_BotonAggProductoMenuVentaVend = new wxButton( this, wxID_ANY, wxT("Agregar Producto"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer28->Add( m_BotonAggProductoMenuVentaVend, 0, wxALL, 5 );

	m_BotonQuitProductoMenuVentaVend = new wxButton( this, wxID_ANY, wxT("Quitar Producto"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer28->Add( m_BotonQuitProductoMenuVentaVend, 0, wxALL|wxEXPAND, 5 );

	m_BotonTicketMenuVentaVend = new wxButton( this, wxID_ANY, wxT("Ver Ticket actual"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer28->Add( m_BotonTicketMenuVentaVend, 0, wxALL|wxEXPAND, 5 );


	bSizer27->Add( bSizer28, 0, 0, 5 );


	bSizer26->Add( bSizer27, 1, wxALIGN_CENTER_HORIZONTAL, 20 );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxVERTICAL );

	m_BotonConfVentaMenuVentaVend = new wxButton( this, wxID_ANY, wxT("Confirmar Venta"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer31->Add( m_BotonConfVentaMenuVentaVend, 0, wxALL|wxEXPAND, 5 );


	bSizer26->Add( bSizer31, 1, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer26 );
	this->Layout();

	this->Centre( wxBOTH );
}

BaseMenuVentaVend::~BaseMenuVentaVend()
{
}

BaseMVAggProductoVend::BaseMVAggProductoVend( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer32;
	bSizer32 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText12 = new wxStaticText( this, wxID_ANY, wxT("Agregar Producto"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	m_staticText12->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );
	m_staticText12->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INFOTEXT ) );
	m_staticText12->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer32->Add( m_staticText12, 0, wxALL, 5 );


	bSizer31->Add( bSizer32, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer35;
	bSizer35 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer41;
	bSizer41 = new wxBoxSizer( wxVERTICAL );

	m_MDespCategVend = new wxComboBox( this, wxID_ANY, wxT("Categoria"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_MDespCategVend->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	bSizer41->Add( m_MDespCategVend, 0, wxALL|wxEXPAND, 5 );


	bSizer35->Add( bSizer41, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer33;
	bSizer33 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText13 = new wxStaticText( this, wxID_ANY, wxT("ID del producto:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13->Wrap( -1 );
	m_staticText13->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_staticText13->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INFOTEXT ) );
	m_staticText13->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer33->Add( m_staticText13, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_IDProdVend = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer33->Add( m_IDProdVend, 0, wxALL, 5 );


	bSizer35->Add( bSizer33, 0, wxALIGN_RIGHT, 5 );

	wxBoxSizer* bSizer37;
	bSizer37 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText14 = new wxStaticText( this, wxID_ANY, wxT("Cantidad:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	m_staticText14->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_staticText14->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_INFOTEXT ) );
	m_staticText14->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer37->Add( m_staticText14, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_CantidadVend = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer37->Add( m_CantidadVend, 0, wxALL, 5 );


	bSizer35->Add( bSizer37, 0, wxEXPAND, 5 );


	bSizer31->Add( bSizer35, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer42;
	bSizer42 = new wxBoxSizer( wxHORIZONTAL );

	m_TablaAggProductoVend = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_TablaAggProductoVend->CreateGrid( 5, 4 );
	m_TablaAggProductoVend->EnableEditing( true );
	m_TablaAggProductoVend->EnableGridLines( true );
	m_TablaAggProductoVend->EnableDragGridSize( false );
	m_TablaAggProductoVend->SetMargins( 0, 0 );

	// Columns
	m_TablaAggProductoVend->EnableDragColMove( false );
	m_TablaAggProductoVend->EnableDragColSize( true );
	m_TablaAggProductoVend->SetColLabelValue( 0, wxT("ID") );
	m_TablaAggProductoVend->SetColLabelValue( 1, wxT("Nombre") );
	m_TablaAggProductoVend->SetColLabelValue( 2, wxT("Precio") );
	m_TablaAggProductoVend->SetColLabelValue( 3, wxT("Stock") );
	m_TablaAggProductoVend->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_TablaAggProductoVend->EnableDragRowSize( true );
	m_TablaAggProductoVend->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_TablaAggProductoVend->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer42->Add( m_TablaAggProductoVend, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer31->Add( bSizer42, 1, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxHORIZONTAL );

	m_BotonAggProductoVend = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer40->Add( m_BotonAggProductoVend, 0, wxALL, 5 );


	bSizer31->Add( bSizer40, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer31 );
	this->Layout();

	this->Centre( wxBOTH );
}

BaseMVAggProductoVend::~BaseMVAggProductoVend()
{
}

BaseMVQuitarProd::BaseMVQuitarProd( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer39;
	bSizer39 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer40;
	bSizer40 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText15 = new wxStaticText( this, wxID_ANY, wxT("Quitar Producto"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText15->Wrap( -1 );
	m_staticText15->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer40->Add( m_staticText15, 0, wxALL, 5 );


	bSizer39->Add( bSizer40, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer41;
	bSizer41 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText16 = new wxStaticText( this, wxID_ANY, wxT("ID a quitar:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	bSizer41->Add( m_staticText16, 0, wxALL, 5 );

	m_textIDQuitarProdVend = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer41->Add( m_textIDQuitarProdVend, 0, wxALL, 5 );


	bSizer39->Add( bSizer41, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer42;
	bSizer42 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText19 = new wxStaticText( this, wxID_ANY, wxT("Cantidad:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText19->Wrap( -1 );
	bSizer42->Add( m_staticText19, 0, wxALL, 5 );

	m_textCantQuitarProdVend = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer42->Add( m_textCantQuitarProdVend, 0, wxALL, 5 );


	bSizer39->Add( bSizer42, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer44;
	bSizer44 = new wxBoxSizer( wxVERTICAL );

	m_TablaQuitarProdVend = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_TablaQuitarProdVend->CreateGrid( 5, 4 );
	m_TablaQuitarProdVend->EnableEditing( true );
	m_TablaQuitarProdVend->EnableGridLines( true );
	m_TablaQuitarProdVend->EnableDragGridSize( false );
	m_TablaQuitarProdVend->SetMargins( 0, 0 );

	// Columns
	m_TablaQuitarProdVend->EnableDragColMove( false );
	m_TablaQuitarProdVend->EnableDragColSize( true );
	m_TablaQuitarProdVend->SetColLabelValue( 0, wxT("ID") );
	m_TablaQuitarProdVend->SetColLabelValue( 1, wxT("Nombre") );
	m_TablaQuitarProdVend->SetColLabelValue( 2, wxT("Precio") );
	m_TablaQuitarProdVend->SetColLabelValue( 3, wxT("Stock") );
	m_TablaQuitarProdVend->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_TablaQuitarProdVend->EnableDragRowSize( true );
	m_TablaQuitarProdVend->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_TablaQuitarProdVend->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer44->Add( m_TablaQuitarProdVend, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer39->Add( bSizer44, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer43;
	bSizer43 = new wxBoxSizer( wxVERTICAL );

	m_BotonEliminarQuitProdVend = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer43->Add( m_BotonEliminarQuitProdVend, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer39->Add( bSizer43, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer39 );
	this->Layout();

	this->Centre( wxBOTH );
}

BaseMVQuitarProd::~BaseMVQuitarProd()
{
}

BaseTicketActual::BaseTicketActual( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer45;
	bSizer45 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer46;
	bSizer46 = new wxBoxSizer( wxVERTICAL );

	m_staticText20 = new wxStaticText( this, wxID_ANY, wxT("Ticket Actual"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	m_staticText20->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer46->Add( m_staticText20, 0, wxALL, 5 );


	bSizer45->Add( bSizer46, 0, wxALIGN_CENTER, 5 );

	wxBoxSizer* bSizer57;
	bSizer57 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer47;
	bSizer47 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText21 = new wxStaticText( this, wxID_ANY, wxT("Venta ID:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	bSizer47->Add( m_staticText21, 1, wxALL, 5 );

	m_textVentaID = new wxStaticText( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textVentaID->Wrap( -1 );
	bSizer47->Add( m_textVentaID, 1, wxALL, 5 );


	bSizer57->Add( bSizer47, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer48;
	bSizer48 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText23 = new wxStaticText( this, wxID_ANY, wxT("Cliente:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	bSizer48->Add( m_staticText23, 1, wxALL, 5 );

	m_textCliente = new wxStaticText( this, wxID_ANY, wxT("pepe"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textCliente->Wrap( -1 );
	bSizer48->Add( m_textCliente, 1, wxEXPAND|wxALL, 5 );


	bSizer57->Add( bSizer48, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer49;
	bSizer49 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText25 = new wxStaticText( this, wxID_ANY, wxT("Producto:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25->Wrap( -1 );
	bSizer49->Add( m_staticText25, 0, wxALL, 5 );

	m_textProducto = new wxStaticText( this, wxID_ANY, wxT("Mate Imperial"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textProducto->Wrap( -1 );
	bSizer49->Add( m_textProducto, 0, wxALL, 5 );


	bSizer57->Add( bSizer49, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer50;
	bSizer50 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText27 = new wxStaticText( this, wxID_ANY, wxT("Cantidad:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	bSizer50->Add( m_staticText27, 0, wxALL, 5 );

	m_textCantidad = new wxStaticText( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textCantidad->Wrap( -1 );
	bSizer50->Add( m_textCantidad, 0, wxALL, 5 );


	bSizer57->Add( bSizer50, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer51;
	bSizer51 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText29 = new wxStaticText( this, wxID_ANY, wxT("Precio Unitario:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText29->Wrap( -1 );
	bSizer51->Add( m_staticText29, 0, wxALL, 5 );

	m_textPrecioUnitario = new wxStaticText( this, wxID_ANY, wxT("$3.000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textPrecioUnitario->Wrap( -1 );
	bSizer51->Add( m_textPrecioUnitario, 0, wxALL, 5 );


	bSizer57->Add( bSizer51, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer52;
	bSizer52 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText31 = new wxStaticText( this, wxID_ANY, wxT("Subtotal:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText31->Wrap( -1 );
	bSizer52->Add( m_staticText31, 0, wxALL, 5 );

	m_textSubtotal = new wxStaticText( this, wxID_ANY, wxT("$"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textSubtotal->Wrap( -1 );
	bSizer52->Add( m_textSubtotal, 0, wxALL, 5 );


	bSizer57->Add( bSizer52, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer55;
	bSizer55 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText33 = new wxStaticText( this, wxID_ANY, wxT("Fecha:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33->Wrap( -1 );
	bSizer55->Add( m_staticText33, 0, wxALL, 5 );

	m_textFecha = new wxStaticText( this, wxID_ANY, wxT("0/00/0000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textFecha->Wrap( -1 );
	bSizer55->Add( m_textFecha, 0, wxALL, 5 );


	bSizer57->Add( bSizer55, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer56;
	bSizer56 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText35 = new wxStaticText( this, wxID_ANY, wxT("Total:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText35->Wrap( -1 );
	bSizer56->Add( m_staticText35, 0, wxALL, 5 );

	m_textTotal = new wxStaticText( this, wxID_ANY, wxT("$"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textTotal->Wrap( -1 );
	bSizer56->Add( m_textTotal, 0, wxALL, 5 );


	bSizer57->Add( bSizer56, 0, wxEXPAND, 5 );


	bSizer45->Add( bSizer57, 1, wxALIGN_CENTER, 5 );


	this->SetSizer( bSizer45 );
	this->Layout();
	bSizer45->Fit( this );

	this->Centre( wxBOTH );
}

BaseTicketActual::~BaseTicketActual()
{
}

BaseVentaConfirmadaVend::BaseVentaConfirmadaVend( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer45;
	bSizer45 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer70;
	bSizer70 = new wxBoxSizer( wxVERTICAL );

	m_staticText20 = new wxStaticText( this, wxID_ANY, wxT("Ticket"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	m_staticText20->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer70->Add( m_staticText20, 0, wxALL, 5 );


	bSizer45->Add( bSizer70, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer57;
	bSizer57 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer47;
	bSizer47 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText21 = new wxStaticText( this, wxID_ANY, wxT("Venta ID:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	bSizer47->Add( m_staticText21, 1, wxALL, 5 );

	m_textVentaConfID = new wxStaticText( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textVentaConfID->Wrap( -1 );
	bSizer47->Add( m_textVentaConfID, 1, wxALL, 5 );


	bSizer57->Add( bSizer47, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer48;
	bSizer48 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText23 = new wxStaticText( this, wxID_ANY, wxT("Cliente:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	bSizer48->Add( m_staticText23, 1, wxALL, 5 );

	m_textClienteConf = new wxStaticText( this, wxID_ANY, wxT("pepe"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textClienteConf->Wrap( -1 );
	bSizer48->Add( m_textClienteConf, 1, wxEXPAND|wxALL, 5 );


	bSizer57->Add( bSizer48, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer49;
	bSizer49 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText25 = new wxStaticText( this, wxID_ANY, wxT("Producto:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25->Wrap( -1 );
	bSizer49->Add( m_staticText25, 0, wxALL, 5 );

	m_textProductoConf = new wxStaticText( this, wxID_ANY, wxT("Mate Imperial"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textProductoConf->Wrap( -1 );
	bSizer49->Add( m_textProductoConf, 0, wxALL, 5 );


	bSizer57->Add( bSizer49, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer50;
	bSizer50 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText27 = new wxStaticText( this, wxID_ANY, wxT("Cantidad:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	bSizer50->Add( m_staticText27, 0, wxALL, 5 );

	m_textCantidadConf = new wxStaticText( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textCantidadConf->Wrap( -1 );
	bSizer50->Add( m_textCantidadConf, 0, wxALL, 5 );


	bSizer57->Add( bSizer50, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer51;
	bSizer51 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText29 = new wxStaticText( this, wxID_ANY, wxT("Precio Unitario:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText29->Wrap( -1 );
	bSizer51->Add( m_staticText29, 0, wxALL, 5 );

	m_textPrecioUnitarioConf = new wxStaticText( this, wxID_ANY, wxT("$3.000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textPrecioUnitarioConf->Wrap( -1 );
	bSizer51->Add( m_textPrecioUnitarioConf, 0, wxALL, 5 );


	bSizer57->Add( bSizer51, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer52;
	bSizer52 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText31 = new wxStaticText( this, wxID_ANY, wxT("Subtotal:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText31->Wrap( -1 );
	bSizer52->Add( m_staticText31, 0, wxALL, 5 );

	m_textSubtotalConf = new wxStaticText( this, wxID_ANY, wxT("$"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textSubtotalConf->Wrap( -1 );
	bSizer52->Add( m_textSubtotalConf, 0, wxALL, 5 );


	bSizer57->Add( bSizer52, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer55;
	bSizer55 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText33 = new wxStaticText( this, wxID_ANY, wxT("Fecha:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText33->Wrap( -1 );
	bSizer55->Add( m_staticText33, 0, wxALL, 5 );

	m_textFechaConf = new wxStaticText( this, wxID_ANY, wxT("0/00/0000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textFechaConf->Wrap( -1 );
	bSizer55->Add( m_textFechaConf, 0, wxALL, 5 );


	bSizer57->Add( bSizer55, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer56;
	bSizer56 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText35 = new wxStaticText( this, wxID_ANY, wxT("Total:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText35->Wrap( -1 );
	bSizer56->Add( m_staticText35, 0, wxALL, 5 );

	m_textTotalConf = new wxStaticText( this, wxID_ANY, wxT("$"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textTotalConf->Wrap( -1 );
	bSizer56->Add( m_textTotalConf, 0, wxALL, 5 );


	bSizer57->Add( bSizer56, 0, wxEXPAND, 5 );


	bSizer45->Add( bSizer57, 0, wxALIGN_CENTER, 5 );

	wxBoxSizer* bSizer71;
	bSizer71 = new wxBoxSizer( wxVERTICAL );

	m_MenuPrincipalVConf = new wxButton( this, wxID_ANY, wxT("Menu Principal"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer71->Add( m_MenuPrincipalVConf, 0, wxALL, 5 );


	bSizer45->Add( bSizer71, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer45 );
	this->Layout();

	this->Centre( wxBOTH );
}

BaseVentaConfirmadaVend::~BaseVentaConfirmadaVend()
{
}

BaseBuscarClienteResult::BaseBuscarClienteResult( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer100;
	bSizer100 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer101;
	bSizer101 = new wxBoxSizer( wxVERTICAL );

	m_staticText88 = new wxStaticText( this, wxID_ANY, wxT("Cliente"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText88->Wrap( -1 );
	m_staticText88->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer101->Add( m_staticText88, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer102;
	bSizer102 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText89 = new wxStaticText( this, wxID_ANY, wxT("Dni :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText89->Wrap( -1 );
	bSizer102->Add( m_staticText89, 0, wxALL, 5 );

	m_TextDniCliente = new wxStaticText( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_TextDniCliente->Wrap( -1 );
	bSizer102->Add( m_TextDniCliente, 0, wxALL, 5 );


	bSizer101->Add( bSizer102, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer103;
	bSizer103 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText90 = new wxStaticText( this, wxID_ANY, wxT("Nombre :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText90->Wrap( -1 );
	bSizer103->Add( m_staticText90, 0, wxALL, 5 );

	m_textNombreCliente = new wxStaticText( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textNombreCliente->Wrap( -1 );
	bSizer103->Add( m_textNombreCliente, 0, wxALL, 5 );


	bSizer101->Add( bSizer103, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer104;
	bSizer104 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText91 = new wxStaticText( this, wxID_ANY, wxT("Email :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText91->Wrap( -1 );
	bSizer104->Add( m_staticText91, 0, wxALL, 5 );

	m_textEmailCliente = new wxStaticText( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textEmailCliente->Wrap( -1 );
	bSizer104->Add( m_textEmailCliente, 0, wxALL, 5 );


	bSizer101->Add( bSizer104, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer105;
	bSizer105 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText92 = new wxStaticText( this, wxID_ANY, wxT("Telefono :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText92->Wrap( -1 );
	bSizer105->Add( m_staticText92, 0, wxALL, 5 );

	m_textTelefonoCliente = new wxStaticText( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textTelefonoCliente->Wrap( -1 );
	bSizer105->Add( m_textTelefonoCliente, 0, wxALL, 5 );


	bSizer101->Add( bSizer105, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer100->Add( bSizer101, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer100 );
	this->Layout();

	this->Centre( wxBOTH );
}

BaseBuscarClienteResult::~BaseBuscarClienteResult()
{
}

BaseModificarCliente::BaseModificarCliente( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer100;
	bSizer100 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer101;
	bSizer101 = new wxBoxSizer( wxVERTICAL );

	m_staticText88 = new wxStaticText( this, wxID_ANY, wxT("Cliente"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText88->Wrap( -1 );
	m_staticText88->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer101->Add( m_staticText88, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 0 );

	wxBoxSizer* bSizer102;
	bSizer102 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText89 = new wxStaticText( this, wxID_ANY, wxT("Dni :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText89->Wrap( -1 );
	bSizer102->Add( m_staticText89, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );

	m_TextDniCliente = new wxStaticText( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_TextDniCliente->Wrap( -1 );
	bSizer102->Add( m_TextDniCliente, 0, wxALL, 5 );


	bSizer101->Add( bSizer102, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer103;
	bSizer103 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer138;
	bSizer138 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText90 = new wxStaticText( this, wxID_ANY, wxT("Nombre :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText90->Wrap( -1 );
	bSizer138->Add( m_staticText90, 0, wxALL|wxALIGN_CENTER_VERTICAL, 0 );

	m_textNombreCliente = new wxStaticText( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textNombreCliente->Wrap( -1 );
	bSizer138->Add( m_textNombreCliente, 0, wxALL, 5 );


	bSizer103->Add( bSizer138, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer137;
	bSizer137 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText126 = new wxStaticText( this, wxID_ANY, wxT("Ingrese el nuevo nombre"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText126->Wrap( -1 );
	bSizer137->Add( m_staticText126, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_TextModifNombreCliente = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer137->Add( m_TextModifNombreCliente, 0, wxALL|wxALIGN_BOTTOM, 5 );


	bSizer103->Add( bSizer137, 1, wxEXPAND, 5 );


	bSizer101->Add( bSizer103, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer1031;
	bSizer1031 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer1381;
	bSizer1381 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText901 = new wxStaticText( this, wxID_ANY, wxT("Email:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText901->Wrap( -1 );
	bSizer1381->Add( m_staticText901, 0, wxALL, 5 );

	m_textEmailCliente = new wxStaticText( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textEmailCliente->Wrap( -1 );
	bSizer1381->Add( m_textEmailCliente, 0, wxALL, 5 );


	bSizer1031->Add( bSizer1381, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer1371;
	bSizer1371 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1261 = new wxStaticText( this, wxID_ANY, wxT("Ingrese el nuevo Email"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1261->Wrap( -1 );
	bSizer1371->Add( m_staticText1261, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_TextModifEmailCliente = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1371->Add( m_TextModifEmailCliente, 0, wxALL|wxALIGN_BOTTOM, 5 );


	bSizer1031->Add( bSizer1371, 1, wxEXPAND, 5 );


	bSizer101->Add( bSizer1031, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer1032;
	bSizer1032 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer1382;
	bSizer1382 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText902 = new wxStaticText( this, wxID_ANY, wxT("Telefono::"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText902->Wrap( -1 );
	bSizer1382->Add( m_staticText902, 0, wxALL, 5 );

	m_textNombreCliente2 = new wxStaticText( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textNombreCliente2->Wrap( -1 );
	bSizer1382->Add( m_textNombreCliente2, 0, wxALL, 5 );


	bSizer1032->Add( bSizer1382, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer1372;
	bSizer1372 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText1262 = new wxStaticText( this, wxID_ANY, wxT("Ingrese el nuevo Telefono"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1262->Wrap( -1 );
	bSizer1372->Add( m_staticText1262, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_TextModifTelefonoCliente = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer1372->Add( m_TextModifTelefonoCliente, 0, wxALL|wxALIGN_BOTTOM, 5 );


	bSizer1032->Add( bSizer1372, 1, wxEXPAND, 5 );


	bSizer101->Add( bSizer1032, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	m_BotonGuardarModificacion = new wxButton( this, wxID_ANY, wxT("Guardar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer101->Add( m_BotonGuardarModificacion, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer100->Add( bSizer101, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer100 );
	this->Layout();

	this->Centre( wxBOTH );
}

BaseModificarCliente::~BaseModificarCliente()
{
}

BaseAdministradorContrasenia::BaseAdministradorContrasenia( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer91;
	bSizer91 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer92;
	bSizer92 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText74 = new wxStaticText( this, wxID_ANY, wxT("Ingrese contraseña:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText74->Wrap( -1 );
	m_staticText74->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer92->Add( m_staticText74, 1, wxALL, 20 );


	bSizer91->Add( bSizer92, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer93;
	bSizer93 = new wxBoxSizer( wxVERTICAL );

	m_textIngreseContraseniaAdmin = new wxTextCtrl( this, wxID_ANY, wxT("contraseña..."), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer93->Add( m_textIngreseContraseniaAdmin, 0, wxALL, 15 );


	bSizer91->Add( bSizer93, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer94;
	bSizer94 = new wxBoxSizer( wxVERTICAL );

	m_botonIngresarAdmin = new wxButton( this, wxID_ANY, wxT("Ingresar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer94->Add( m_botonIngresarAdmin, 1, wxALL|wxEXPAND, 20 );


	bSizer91->Add( bSizer94, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer91 );
	this->Layout();

	this->Centre( wxBOTH );
}

BaseAdministradorContrasenia::~BaseAdministradorContrasenia()
{
}

BaseMenuAdmin::BaseMenuAdmin( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer95;
	bSizer95 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer96;
	bSizer96 = new wxBoxSizer( wxVERTICAL );

	m_staticText75 = new wxStaticText( this, wxID_ANY, wxT("Menu Administrador"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText75->Wrap( -1 );
	m_staticText75->SetFont( wxFont( 14, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer96->Add( m_staticText75, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer95->Add( bSizer96, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer97;
	bSizer97 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer98;
	bSizer98 = new wxBoxSizer( wxVERTICAL );

	m_staticText76 = new wxStaticText( this, wxID_ANY, wxT("Ventas del Mes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText76->Wrap( -1 );
	m_staticText76->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer98->Add( m_staticText76, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 0 );

	m_gridVentasDelMes = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_gridVentasDelMes->CreateGrid( 5, 3 );
	m_gridVentasDelMes->EnableEditing( true );
	m_gridVentasDelMes->EnableGridLines( true );
	m_gridVentasDelMes->EnableDragGridSize( false );
	m_gridVentasDelMes->SetMargins( 0, 0 );

	// Columns
	m_gridVentasDelMes->SetColSize( 0, 33 );
	m_gridVentasDelMes->SetColSize( 1, 38 );
	m_gridVentasDelMes->SetColSize( 2, 52 );
	m_gridVentasDelMes->EnableDragColMove( false );
	m_gridVentasDelMes->EnableDragColSize( true );
	m_gridVentasDelMes->SetColLabelValue( 0, wxT("ID") );
	m_gridVentasDelMes->SetColLabelValue( 1, wxT("MES") );
	m_gridVentasDelMes->SetColLabelValue( 2, wxT("TOTAL") );
	m_gridVentasDelMes->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_gridVentasDelMes->EnableDragRowSize( true );
	m_gridVentasDelMes->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_gridVentasDelMes->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer98->Add( m_gridVentasDelMes, 0, wxALL, 5 );


	bSizer97->Add( bSizer98, 0, 0, 5 );

	wxBoxSizer* bSizer99;
	bSizer99 = new wxBoxSizer( wxVERTICAL );

	m_staticText77 = new wxStaticText( this, wxID_ANY, wxT("Productos Stock Bajo"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText77->Wrap( -1 );
	m_staticText77->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer99->Add( m_staticText77, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 0 );

	m_gridProductoStockBajo = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_gridProductoStockBajo->CreateGrid( 5, 4 );
	m_gridProductoStockBajo->EnableEditing( true );
	m_gridProductoStockBajo->EnableGridLines( true );
	m_gridProductoStockBajo->EnableDragGridSize( false );
	m_gridProductoStockBajo->SetMargins( 0, 0 );

	// Columns
	m_gridProductoStockBajo->SetColSize( 0, 31 );
	m_gridProductoStockBajo->SetColSize( 1, 74 );
	m_gridProductoStockBajo->SetColSize( 2, 80 );
	m_gridProductoStockBajo->SetColSize( 3, 80 );
	m_gridProductoStockBajo->EnableDragColMove( false );
	m_gridProductoStockBajo->EnableDragColSize( true );
	m_gridProductoStockBajo->SetColLabelValue( 0, wxT("ID") );
	m_gridProductoStockBajo->SetColLabelValue( 1, wxT("PRODUCTO") );
	m_gridProductoStockBajo->SetColLabelValue( 2, wxT("CATEGORIA") );
	m_gridProductoStockBajo->SetColLabelValue( 3, wxT("STOCK") );
	m_gridProductoStockBajo->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_gridProductoStockBajo->EnableDragRowSize( true );
	m_gridProductoStockBajo->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_gridProductoStockBajo->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer99->Add( m_gridProductoStockBajo, 0, wxALL, 5 );


	bSizer97->Add( bSizer99, 0, wxALIGN_BOTTOM, 5 );


	bSizer95->Add( bSizer97, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer100;
	bSizer100 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer101;
	bSizer101 = new wxBoxSizer( wxHORIZONTAL );

	m_BotonAggClienteAdmin = new wxButton( this, wxID_ANY, wxT("Agregar Cliente"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer101->Add( m_BotonAggClienteAdmin, 0, wxALL, 5 );

	m_BotonVerListClienteAdmin = new wxButton( this, wxID_ANY, wxT("Ver Lista Clientes"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer101->Add( m_BotonVerListClienteAdmin, 0, wxALL, 5 );

	m_BotonQuitarProdAdmin = new wxButton( this, wxID_ANY, wxT("Quitar Producto"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer101->Add( m_BotonQuitarProdAdmin, 0, wxALL, 5 );

	m_BotonVerVentasAdmin = new wxButton( this, wxID_ANY, wxT("Ver Ventas"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer101->Add( m_BotonVerVentasAdmin, 0, wxALL, 5 );


	bSizer100->Add( bSizer101, 0, wxALIGN_CENTER_HORIZONTAL, 0 );

	wxBoxSizer* bSizer102;
	bSizer102 = new wxBoxSizer( wxHORIZONTAL );

	m_BotonAggProdAdmin = new wxButton( this, wxID_ANY, wxT("Agregar Producto"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer102->Add( m_BotonAggProdAdmin, 0, wxALL, 5 );

	m_BotonVerListProdAdmin = new wxButton( this, wxID_ANY, wxT("Ver Lista Productos"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer102->Add( m_BotonVerListProdAdmin, 0, wxALL, 5 );

	m_BotonEliminarCategoriaAdmin = new wxButton( this, wxID_ANY, wxT("Eliminar Categoria"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer102->Add( m_BotonEliminarCategoriaAdmin, 0, wxALL, 5 );

	m_BotonEditarProductoAdmin = new wxButton( this, wxID_ANY, wxT("Editar Producto"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer102->Add( m_BotonEditarProductoAdmin, 0, wxALL, 5 );


	bSizer100->Add( bSizer102, 1, wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer95->Add( bSizer100, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer103;
	bSizer103 = new wxBoxSizer( wxVERTICAL );

	m_BotonMenuPrincipalAdmin = new wxButton( this, wxID_ANY, wxT("Menu Principal"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer103->Add( m_BotonMenuPrincipalAdmin, 0, wxALL, 5 );


	bSizer95->Add( bSizer103, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer95 );
	this->Layout();

	this->Centre( wxBOTH );
}

BaseMenuAdmin::~BaseMenuAdmin()
{
}

BaseAggClienteAdmin::BaseAggClienteAdmin( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxVERTICAL );

	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Agregar Cliente"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	m_staticText4->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer16->Add( m_staticText4, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer15->Add( bSizer16, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("DNI:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer17->Add( m_staticText5, 1, wxALL|wxALIGN_CENTER_VERTICAL, 5 );

	m_textDNIAggClienteVend = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_textDNIAggClienteVend, 0, wxALL, 5 );


	bSizer22->Add( bSizer17, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer18->Add( m_staticText6, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_textNomAggClienteAdmin = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), 0 );
	bSizer18->Add( m_textNomAggClienteAdmin, 1, wxALL, 5 );


	bSizer22->Add( bSizer18, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Email:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer19->Add( m_staticText7, 1, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );

	m_textEmailAggClienteVend = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer19->Add( m_textEmailAggClienteVend, 0, wxALL, 5 );


	bSizer22->Add( bSizer19, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("Telefono:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer20->Add( m_staticText8, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_textTelAggClienteAdmin = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_textTelAggClienteAdmin, 0, wxALL, 5 );


	bSizer22->Add( bSizer20, 1, 0, 5 );


	bSizer15->Add( bSizer22, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxVERTICAL );

	m_BotonAgregarAggClienteAdmin = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( m_BotonAgregarAggClienteAdmin, 0, wxALL, 5 );


	bSizer15->Add( bSizer21, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer15 );
	this->Layout();

	this->Centre( wxBOTH );
}

BaseAggClienteAdmin::~BaseAggClienteAdmin()
{
}

BaseAggProductoAdmin::BaseAggProductoAdmin( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer114;
	bSizer114 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer117;
	bSizer117 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer115;
	bSizer115 = new wxBoxSizer( wxVERTICAL );

	m_staticText84 = new wxStaticText( this, wxID_ANY, wxT("Agregar Producto"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText84->Wrap( -1 );
	m_staticText84->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer115->Add( m_staticText84, 0, wxALL, 5 );


	bSizer117->Add( bSizer115, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer114->Add( bSizer117, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer116;
	bSizer116 = new wxBoxSizer( wxVERTICAL );

	m_BoxCategorias = new wxComboBox( this, wxID_ANY, wxT("Mate Algarrobo"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_BoxCategorias->Append( wxT("Mate Algarrobo") );
	m_BoxCategorias->SetSelection( 0 );
	bSizer116->Add( m_BoxCategorias, 0, wxALL, 5 );


	bSizer114->Add( bSizer116, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer22;
	bSizer22 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("ID Producto:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer17->Add( m_staticText5, 0, wxALIGN_CENTER_VERTICAL, 5 );

	m_TextIDProducAdmin = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_TextIDProducAdmin, 0, wxALL, 5 );


	bSizer22->Add( bSizer17, 0, 0, 5 );

	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer18->Add( m_staticText6, 0, wxALIGN_CENTER_VERTICAL, 5 );

	m_TextNombreAdmin = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), 0 );
	bSizer18->Add( m_TextNombreAdmin, 0, wxALL, 5 );


	bSizer22->Add( bSizer18, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Precio:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer19->Add( m_staticText7, 0, wxALIGN_CENTER_VERTICAL, 5 );

	m_TextoPrecioAdmin = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer19->Add( m_TextoPrecioAdmin, 0, wxALL, 5 );


	bSizer22->Add( bSizer19, 0, 0, 5 );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("Stock:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer20->Add( m_staticText8, 0, wxALIGN_CENTER_VERTICAL, 5 );

	m_TextStockAdmin = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_TextStockAdmin, 1, wxALL, 5 );


	bSizer22->Add( bSizer20, 0, 0, 5 );


	bSizer114->Add( bSizer22, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer124;
	bSizer124 = new wxBoxSizer( wxVERTICAL );

	m_BotonAggAdmin = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer124->Add( m_BotonAggAdmin, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer114->Add( bSizer124, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer114 );
	this->Layout();

	this->Centre( wxBOTH );
}

BaseAggProductoAdmin::~BaseAggProductoAdmin()
{
}

BaseQuitarProductoAdmin::BaseQuitarProductoAdmin( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer122;
	bSizer122 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer123;
	bSizer123 = new wxBoxSizer( wxVERTICAL );

	m_staticText88 = new wxStaticText( this, wxID_ANY, wxT("Quitar Producto"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText88->Wrap( -1 );
	m_staticText88->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer123->Add( m_staticText88, 0, wxALL, 5 );


	bSizer122->Add( bSizer123, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer124;
	bSizer124 = new wxBoxSizer( wxVERTICAL );

	m_GridQuitarProducAdmin = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_GridQuitarProducAdmin->CreateGrid( 5, 2 );
	m_GridQuitarProducAdmin->EnableEditing( true );
	m_GridQuitarProducAdmin->EnableGridLines( true );
	m_GridQuitarProducAdmin->EnableDragGridSize( false );
	m_GridQuitarProducAdmin->SetMargins( 0, 0 );

	// Columns
	m_GridQuitarProducAdmin->EnableDragColMove( false );
	m_GridQuitarProducAdmin->EnableDragColSize( true );
	m_GridQuitarProducAdmin->SetColLabelValue( 0, wxT("ID") );
	m_GridQuitarProducAdmin->SetColLabelValue( 1, wxT("NOMBRE") );
	m_GridQuitarProducAdmin->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_GridQuitarProducAdmin->EnableDragRowSize( true );
	m_GridQuitarProducAdmin->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_GridQuitarProducAdmin->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer124->Add( m_GridQuitarProducAdmin, 0, wxALL, 5 );


	bSizer122->Add( bSizer124, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer125;
	bSizer125 = new wxBoxSizer( wxVERTICAL );

	m_BotonEliminarAdmin = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer125->Add( m_BotonEliminarAdmin, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer122->Add( bSizer125, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer122 );
	this->Layout();

	this->Centre( wxBOTH );
}

BaseQuitarProductoAdmin::~BaseQuitarProductoAdmin()
{
}

BaseListProdAdmin::BaseListProdAdmin( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer126;
	bSizer126 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer127;
	bSizer127 = new wxBoxSizer( wxVERTICAL );

	m_staticText89 = new wxStaticText( this, wxID_ANY, wxT("Lista de Productos"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText89->Wrap( -1 );
	m_staticText89->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer127->Add( m_staticText89, 0, wxALL, 5 );


	bSizer126->Add( bSizer127, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer128;
	bSizer128 = new wxBoxSizer( wxVERTICAL );

	m_GridListProdAdmin = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_GridListProdAdmin->CreateGrid( 5, 5 );
	m_GridListProdAdmin->EnableEditing( true );
	m_GridListProdAdmin->EnableGridLines( true );
	m_GridListProdAdmin->EnableDragGridSize( false );
	m_GridListProdAdmin->SetMargins( 0, 0 );

	// Columns
	m_GridListProdAdmin->EnableDragColMove( false );
	m_GridListProdAdmin->EnableDragColSize( true );
	m_GridListProdAdmin->SetColLabelValue( 0, wxT("ID") );
	m_GridListProdAdmin->SetColLabelValue( 1, wxT("NOMBRE") );
	m_GridListProdAdmin->SetColLabelValue( 2, wxT("CATEGORIA") );
	m_GridListProdAdmin->SetColLabelValue( 3, wxT("PRECIO") );
	m_GridListProdAdmin->SetColLabelValue( 4, wxT("STOCK") );
	m_GridListProdAdmin->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_GridListProdAdmin->EnableDragRowSize( true );
	m_GridListProdAdmin->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_GridListProdAdmin->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer128->Add( m_GridListProdAdmin, 0, wxALL, 5 );


	bSizer126->Add( bSizer128, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer126 );
	this->Layout();

	this->Centre( wxBOTH );
}

BaseListProdAdmin::~BaseListProdAdmin()
{
}

BaseVentasAdmin::BaseVentasAdmin( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer129;
	bSizer129 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer130;
	bSizer130 = new wxBoxSizer( wxVERTICAL );

	m_staticText90 = new wxStaticText( this, wxID_ANY, wxT("Ventas"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText90->Wrap( -1 );
	m_staticText90->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer130->Add( m_staticText90, 0, wxALL, 5 );


	bSizer129->Add( bSizer130, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer131;
	bSizer131 = new wxBoxSizer( wxVERTICAL );

	m_GridVentasAdmin = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_GridVentasAdmin->CreateGrid( 5, 5 );
	m_GridVentasAdmin->EnableEditing( true );
	m_GridVentasAdmin->EnableGridLines( true );
	m_GridVentasAdmin->EnableDragGridSize( false );
	m_GridVentasAdmin->SetMargins( 0, 0 );

	// Columns
	m_GridVentasAdmin->EnableDragColMove( false );
	m_GridVentasAdmin->EnableDragColSize( true );
	m_GridVentasAdmin->SetColLabelValue( 0, wxT("ID") );
	m_GridVentasAdmin->SetColLabelValue( 1, wxT("PRODUCTO") );
	m_GridVentasAdmin->SetColLabelValue( 2, wxT("CANTIDAD") );
	m_GridVentasAdmin->SetColLabelValue( 3, wxT("TOTAL") );
	m_GridVentasAdmin->SetColLabelValue( 4, wxT("FECHA") );
	m_GridVentasAdmin->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_GridVentasAdmin->EnableDragRowSize( true );
	m_GridVentasAdmin->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_GridVentasAdmin->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer131->Add( m_GridVentasAdmin, 0, wxALL, 5 );


	bSizer129->Add( bSizer131, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer129 );
	this->Layout();

	this->Centre( wxBOTH );
}

BaseVentasAdmin::~BaseVentasAdmin()
{
}

BaseListClienteAdmin::BaseListClienteAdmin( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer132;
	bSizer132 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer133;
	bSizer133 = new wxBoxSizer( wxVERTICAL );

	m_staticText91 = new wxStaticText( this, wxID_ANY, wxT("Lista de Clientes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText91->Wrap( -1 );
	m_staticText91->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );
	m_staticText91->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	bSizer133->Add( m_staticText91, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer132->Add( bSizer133, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer134;
	bSizer134 = new wxBoxSizer( wxVERTICAL );

	m_GridListClienteAdmin = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_GridListClienteAdmin->CreateGrid( 5, 3 );
	m_GridListClienteAdmin->EnableEditing( true );
	m_GridListClienteAdmin->EnableGridLines( true );
	m_GridListClienteAdmin->EnableDragGridSize( false );
	m_GridListClienteAdmin->SetMargins( 0, 0 );

	// Columns
	m_GridListClienteAdmin->EnableDragColMove( false );
	m_GridListClienteAdmin->EnableDragColSize( true );
	m_GridListClienteAdmin->SetColLabelValue( 0, wxT("DNI") );
	m_GridListClienteAdmin->SetColLabelValue( 1, wxT("NOMBRE") );
	m_GridListClienteAdmin->SetColLabelValue( 2, wxT("TELEFONO") );
	m_GridListClienteAdmin->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_GridListClienteAdmin->EnableDragRowSize( true );
	m_GridListClienteAdmin->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_GridListClienteAdmin->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer134->Add( m_GridListClienteAdmin, 0, wxALL, 5 );


	bSizer132->Add( bSizer134, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer132 );
	this->Layout();

	this->Centre( wxBOTH );
}

BaseListClienteAdmin::~BaseListClienteAdmin()
{
}

BaseEliminarCategoriaAdmin::BaseEliminarCategoriaAdmin( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer135;
	bSizer135 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer136;
	bSizer136 = new wxBoxSizer( wxVERTICAL );

	m_staticText92 = new wxStaticText( this, wxID_ANY, wxT("Eliminar Categoria"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText92->Wrap( -1 );
	m_staticText92->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer136->Add( m_staticText92, 0, wxALL, 5 );


	bSizer135->Add( bSizer136, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer137;
	bSizer137 = new wxBoxSizer( wxVERTICAL );

	m_comboBox3 = new wxComboBox( this, wxID_ANY, wxT("Categorias..."), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_comboBox3->Append( wxT("mates algarrobo") );
	bSizer137->Add( m_comboBox3, 0, wxALL, 5 );


	bSizer135->Add( bSizer137, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer138;
	bSizer138 = new wxBoxSizer( wxVERTICAL );

	m_button31 = new wxButton( this, wxID_ANY, wxT("Eliminar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer138->Add( m_button31, 0, wxALL, 5 );


	bSizer135->Add( bSizer138, 0, wxALIGN_CENTER_HORIZONTAL, 5 );


	this->SetSizer( bSizer135 );
	this->Layout();

	this->Centre( wxBOTH );
}

BaseEliminarCategoriaAdmin::~BaseEliminarCategoriaAdmin()
{
}

BaseEditarProducto::BaseEditarProducto( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );

	wxBoxSizer* bSizer134;
	bSizer134 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer135;
	bSizer135 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText92 = new wxStaticText( this, wxID_ANY, wxT("Editar Producto"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText92->Wrap( -1 );
	m_staticText92->SetFont( wxFont( 16, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial") ) );

	bSizer135->Add( m_staticText92, 0, wxALIGN_CENTER_VERTICAL, 5 );


	bSizer134->Add( bSizer135, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer136;
	bSizer136 = new wxBoxSizer( wxVERTICAL );

	m_TablaAggProductoAdmin = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_TablaAggProductoAdmin->CreateGrid( 5, 4 );
	m_TablaAggProductoAdmin->EnableEditing( true );
	m_TablaAggProductoAdmin->EnableGridLines( true );
	m_TablaAggProductoAdmin->EnableDragGridSize( false );
	m_TablaAggProductoAdmin->SetMargins( 0, 0 );

	// Columns
	m_TablaAggProductoAdmin->EnableDragColMove( false );
	m_TablaAggProductoAdmin->EnableDragColSize( true );
	m_TablaAggProductoAdmin->SetColLabelValue( 0, wxT("ID") );
	m_TablaAggProductoAdmin->SetColLabelValue( 1, wxT("Nombre") );
	m_TablaAggProductoAdmin->SetColLabelValue( 2, wxT("Precio") );
	m_TablaAggProductoAdmin->SetColLabelValue( 3, wxT("Stock") );
	m_TablaAggProductoAdmin->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_TablaAggProductoAdmin->EnableDragRowSize( true );
	m_TablaAggProductoAdmin->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_TablaAggProductoAdmin->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer136->Add( m_TablaAggProductoAdmin, 0, wxALL|wxEXPAND, 5 );


	bSizer134->Add( bSizer136, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer140;
	bSizer140 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer141;
	bSizer141 = new wxBoxSizer( wxVERTICAL );

	m_staticText93 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText93->Wrap( -1 );
	bSizer141->Add( m_staticText93, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	m_TextNomAdmin = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer141->Add( m_TextNomAdmin, 0, wxALL, 5 );


	bSizer140->Add( bSizer141, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer144;
	bSizer144 = new wxBoxSizer( wxVERTICAL );

	m_staticText97 = new wxStaticText( this, wxID_ANY, wxT("Categoria:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText97->Wrap( -1 );
	bSizer144->Add( m_staticText97, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	m_BoxCategoriaAdmin = new wxComboBox( this, wxID_ANY, wxT("Categorias..."), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	m_BoxCategoriaAdmin->Append( wxT("Nombre") );
	m_BoxCategoriaAdmin->Append( wxT("Categoria") );
	m_BoxCategoriaAdmin->Append( wxT("Precio") );
	m_BoxCategoriaAdmin->Append( wxT("Stock") );
	m_BoxCategoriaAdmin->Append( wxEmptyString );
	m_BoxCategoriaAdmin->SetSelection( 1 );
	bSizer144->Add( m_BoxCategoriaAdmin, 0, wxALL, 5 );


	bSizer140->Add( bSizer144, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer145;
	bSizer145 = new wxBoxSizer( wxVERTICAL );

	m_staticText98 = new wxStaticText( this, wxID_ANY, wxT("Precio:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText98->Wrap( -1 );
	bSizer145->Add( m_staticText98, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	m_TextPrecioAdmin = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer145->Add( m_TextPrecioAdmin, 0, wxALL, 5 );


	bSizer140->Add( bSizer145, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer146;
	bSizer146 = new wxBoxSizer( wxVERTICAL );

	m_staticText99 = new wxStaticText( this, wxID_ANY, wxT("Stock:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText99->Wrap( -1 );
	bSizer146->Add( m_staticText99, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	m_TextStockAdmin = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer146->Add( m_TextStockAdmin, 0, wxALL, 5 );


	bSizer140->Add( bSizer146, 0, wxEXPAND, 5 );


	bSizer134->Add( bSizer140, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer147;
	bSizer147 = new wxBoxSizer( wxVERTICAL );

	m_BotonGuardarAdmin = new wxButton( this, wxID_ANY, wxT("Guardar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer147->Add( m_BotonGuardarAdmin, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer134->Add( bSizer147, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer134 );
	this->Layout();

	this->Centre( wxBOTH );
}

BaseEditarProducto::~BaseEditarProducto()
{
}
