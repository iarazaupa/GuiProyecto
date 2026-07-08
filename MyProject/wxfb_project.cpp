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
