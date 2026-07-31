#ifndef APPLICATION_H
#define APPLICATION_H

#include <wx/app.h>
#include "Sistema.h"



class Application : public wxApp {
private:
	Sistema m_sistema;
public:
	virtual bool OnInit();
	Application();
};

#endif



