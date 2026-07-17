#include <wx/image.h>
#include "Application.h"
#include "HijaMenuPrincipalVend.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	HijaMenuPrincipalVend *win = new HijaMenuPrincipalVend(NULL);
	win->Show();
	return true;
}

