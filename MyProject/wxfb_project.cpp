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

	bSizer3->Add( m_staticText2, 0, wxALIGN_CENTER_HORIZONTAL|wxTOP, 60 );


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
}

BasePrincipal::~BasePrincipal()
{
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


	bSizer4->Add( bSizer7, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_TextoMenuPVend = new wxTextCtrl( this, wxID_ANY, wxT("Ingrese nombre del cliente"), wxDefaultPosition, wxDefaultSize, 0 );
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
}

BaseMenuPrincipalVend::~BaseMenuPrincipalVend()
{
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

	m_textCtrl2 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer17->Add( m_textCtrl2, 0, wxALL, 5 );


	bSizer22->Add( bSizer17, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("Nombre:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	bSizer18->Add( m_staticText6, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_textCtrl3 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), 0 );
	bSizer18->Add( m_textCtrl3, 1, wxALL, 5 );


	bSizer22->Add( bSizer18, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer19;
	bSizer19 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText7 = new wxStaticText( this, wxID_ANY, wxT("Email:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7->Wrap( -1 );
	bSizer19->Add( m_staticText7, 1, wxALIGN_CENTER_VERTICAL|wxRIGHT|wxLEFT, 5 );

	m_textCtrl4 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer19->Add( m_textCtrl4, 0, wxALL, 5 );


	bSizer22->Add( bSizer19, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer20;
	bSizer20 = new wxBoxSizer( wxHORIZONTAL );

	m_staticText8 = new wxStaticText( this, wxID_ANY, wxT("Telefono:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	bSizer20->Add( m_staticText8, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_textCtrl5 = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer20->Add( m_textCtrl5, 0, wxALL, 5 );


	bSizer22->Add( bSizer20, 1, 0, 5 );


	bSizer15->Add( bSizer22, 0, wxALIGN_CENTER_HORIZONTAL, 5 );

	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxVERTICAL );

	m_button9 = new wxButton( this, wxID_ANY, wxT("Agregar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer21->Add( m_button9, 0, wxALL, 5 );


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
