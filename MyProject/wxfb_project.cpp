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
	this->SetBackgroundColour( wxColour( 255, 255, 255 ) );

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

	m_TextoVend = new wxTextCtrl( this, wxID_ANY, wxT("Ingrese nombre del cliente"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_TextoVend, 1, wxALL, 5 );

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
