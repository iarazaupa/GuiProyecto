#ifndef HIJAAGGPRODUCTOADMIN_H
#define HIJAAGGPRODUCTOADMIN_H
#include "wxfb_project.h"
#include "Sistema.h"

class HijaAggProductoAdmin : public BaseAggProductoAdmin {
	
private:
	Sistema *m_sistema;
protected:
	void ClickBotonAgg( wxCommandEvent& event )  override;
	
public:
	HijaAggProductoAdmin(Sistema *sistema);
	~HijaAggProductoAdmin();
};

#endif

