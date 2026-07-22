#include "HijaStockVend.h"
#include "HijaMenuPrincipalVend.h"


HijaStockVend::HijaStockVend(wxWindow *parent) : BaseStockVend(parent) {
	
}

HijaStockVend::~HijaStockVend() {
	
}

void HijaStockVend::ClickBotonVolverStockVend( wxCommandEvent& event )  {
	HijaMenuPrincipalVend *win = new HijaMenuPrincipalVend(nullptr);
	win->Show();
	Close();
}

