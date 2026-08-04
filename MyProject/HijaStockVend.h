#ifndef HIJASTOCKVEND_H
#define HIJASTOCKVEND_H
#include "wxfb_project.h"
#include "Sistema.h"

class HijaStockVend : public BaseStockVend {
	
private:
	Sistema *m_sistema;
protected:
	void ClickBotonVolverStockVend( wxCommandEvent& event )  override;
	
public:
	HijaStockVend(Sistema *Sistema);
	~HijaStockVend();
};

#endif

