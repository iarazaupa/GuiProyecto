#include <wx/image.h>
#include "Application.h"
#include "HijaMenuVentaVend.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	HijaMenuVentaVend *win = new HijaMenuVentaVend(NULL);
	win->Show();
	return true;
}

