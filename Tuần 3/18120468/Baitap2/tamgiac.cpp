#include "tamgiac.h"
#include <math.h>
void NhapTamGiac(TamGiac &a)
{
	printf("Nhap toa do dinh 1: \n");
	NhapDiem(a.A);
	printf("Nhap toa do dinh 2: \n");
	NhapDiem(a.B);
	printf("Nhap toa do dinh 3: \n");
	NhapDiem(a.C);
	printf("\n");
}


void XuatTamGiac(TamGiac a)
{
	printf("A (%.2f,%.2f)\t B(%.2f,%.2f) \t C (%.2f,%.2f)\n", a.A.x, a.A.y, a.B.x, a.B.y, a.C.x, a.C.y);
}


float ChuVi(TamGiac a)
{
	return Khoangcach(a.A, a.B) + Khoangcach(a.B, a.C) + Khoangcach(a.C, a.A);
}


float DienTich(TamGiac a)
{
	float p;
	p = ChuVi(a) / 2;
	return sqrt(p*(p - Khoangcach(a.A, a.B))*(p - Khoangcach(a.B, a.C))*(p - Khoangcach(a.C, a.A)));

}


void SwapTG(TamGiac &a, TamGiac &b)
{
	SwapDiem(a.A, b.A);
	SwapDiem(a.B, b.B);
	SwapDiem(a.C, b.C);
}