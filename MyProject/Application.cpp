#include <wx/image.h>
#include "Application.h"
#include "HijaMVAggProductoVend.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	HijaMVAggProductoVend *win = new HijaMVAggProductoVend(NULL);
	win->Show();
	return true;
}

