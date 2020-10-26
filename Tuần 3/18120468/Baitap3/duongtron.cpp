#include "duongtron.h"
#include <math.h>
void NhapDuongTron(DuongTron &a)
{
	printf("Nhap tam: \n");
	NhapDiem(a.tam);
	printf("Nhap ban kinh: \n");
	scanf_s("%f", &a.bankinh);
}


void XuatDuongTron(DuongTron a)
{
	printf("I(%.2f,%.2f)\t R=%.2f\n", a.tam.x, a.tam.y, a.bankinh);
}


float ChuVi(DuongTron a)
{
	return 2 * 3.14*a.bankinh;
}


float DienTich(DuongTron a)
{
	return 3.14*a.bankinh*a.bankinh;
}


void SwapDuongTron(DuongTron &a, DuongTron &b)
{
	SwapDiem(a.tam, b.tam);
	Swap(a.bankinh, b.bankinh);
}