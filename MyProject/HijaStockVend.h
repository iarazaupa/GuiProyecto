#ifndef HIJASTOCKVEND_H
#define HIJASTOCKVEND_H
#include "wxfb_project.h"

class HijaStockVend : public BaseStockVend {
	
private:
	
protected:
	void ClickBotonVolverStockVend( wxCommandEvent& event )  override;
	
public:
	HijaStockVend(wxWindow *parent=NULL);
	~HijaStockVend();
};

#endif

