#include "mangtamgiac.h"
#include <conio.h>
const int max = 100;
void main()
{
	TamGiac a[max];
	int n;
	NhapMangTG(a, n);
	XuatMangTG(a, n);//cau 12 nhap xuat
	ChuViMax(a, n);//cau 3 tim C max
	printf("\nTong dien tich cac tam giac trong mang la: %.2f\n", TongSTamGiac(a, n));//cau 4
	DemTamGiac(a, n);//cau 5
	SapxepTG(a, n);//cau 6

	_getch();
}