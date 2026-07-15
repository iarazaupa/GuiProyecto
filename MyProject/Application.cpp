#include <wx/image.h>
#include "Application.h"
#include "HijaEliminarCategoriaAdmin.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	HijaEliminarCategoriaAdmin *win = new HijaEliminarCategoriaAdmin(NULL);
	win->Show();
	return true;
}

