#include <wx/image.h>
#include "Application.h"
#include "HijaAggClienteAdmin.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	HijaAggClienteAdmin *win = new HijaAggClienteAdmin(NULL);
	win->Show();
	return true;
}

