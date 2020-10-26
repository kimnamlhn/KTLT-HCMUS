#include "mangduongtron.h"
#include <conio.h>
const int max = 100;
void main()
{
	DuongTron a[max];
	int n;
	NhapMangDuongTron(a, n);
	XuatMangDuongTron(a, n);//cau 12 nhap xuat
	ChuViMax(a, n);//cau 3 tim C max
	printf("\nTong dien tich cac tam giac trong mang la: %.2f\n", TongSDuongTron(a, n));//cau 4
	DemDuongTron(a, n);//cau 5
	SapxepDuongTron(a, n);//cau 6
	
	_getch();
}