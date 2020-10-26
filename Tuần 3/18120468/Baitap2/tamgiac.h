#ifndef _TAMGIAC_H_
#define _TAMGIAC_H_
#include "diem.h"
struct TAMGIAC
{
	Diem A, B, C;
};
typedef struct TAMGIAC TamGiac;
void NhapTamGiac(TamGiac &a);
void XuatTamGiac(TamGiac a);
float ChuVi(TamGiac a);
float DienTich(TamGiac a);
void SwapTG(TamGiac &a, TamGiac &b);
#endif // !_TAM_GIAC_
