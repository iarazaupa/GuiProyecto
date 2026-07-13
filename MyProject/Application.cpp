#include <wx/image.h>
#include "Application.h"
#include "HijaBuscarClienteResult.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	HijaBuscarClienteResult *win = new HijaBuscarClienteResult(NULL);
	win->Show();
	return true;
}

