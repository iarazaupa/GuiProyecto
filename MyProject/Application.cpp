#include <wx/image.h>
#include "Application.h"
#include "HijaAdministradorContrasenia.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	HijaAdministradorContrasenia *win = new HijaAdministradorContrasenia(NULL);
	win->Show();
	return true;
}

