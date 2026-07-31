#include <wx/image.h>
#include "Application.h"
#include "HijaPrincipal.h"
#include "Sistema.h"

IMPLEMENT_APP(Application)

Application::Application (): m_sistema(){}
	
bool Application::OnInit() {
	wxInitAllImageHandlers();
	HijaPrincipal *win = new HijaPrincipal(&m_sistema);
	win->Show();
	return true;
}

