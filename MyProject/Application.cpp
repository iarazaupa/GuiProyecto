#include <wx/image.h>
#include "Application.h"
#include "HijaAdministrador.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	HijaAdministrador *win = new HijaAdministrador(NULL);
	win->Show();
	return true;
}

