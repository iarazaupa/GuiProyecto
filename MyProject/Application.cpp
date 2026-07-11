#include <wx/image.h>
#include "Application.h"
#include "HijaTicketActualVend.h"

IMPLEMENT_APP(Application)

bool Application::OnInit() {
	wxInitAllImageHandlers();
	HijaTicketActualVend *win = new HijaTicketActualVend(NULL);
	win->Show();
	return true;
}

