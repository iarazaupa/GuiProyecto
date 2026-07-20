#include <wx/image.h>
#include "Application.h"
#include "HijaEditarProducto.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	HijaEditarProducto *win = new HijaEditarProducto(NULL);
	win->Show();
	return true;
}

