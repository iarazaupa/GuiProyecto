#include <wx/image.h>
#include "Application.h"
#include "HijaMenuAdmin.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	HijaMenuAdmin *win = new HijaMenuAdmin(NULL);
	win->Show();
	return true;
}

