#include <wx/image.h>
#include "Application.h"
#include "HijaAggClienteVend.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	HijaAggClienteVend *win = new HijaAggClienteVend(NULL);
	win->Show();
	return true;
}

