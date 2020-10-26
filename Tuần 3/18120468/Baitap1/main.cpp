#include "mangdiem.h"
#include <conio.h>
const int max = 100;
void main()
{
	Diem a[max];
	int n;
	NhapMangDiem(a, n);
	XuatMangDiem(a, n);//cau 1,2 
	KhoangCachMax(a, n);//cau 3 sd linh canh
	DiemToaDoDuong(a, n);//cau 4 
	SapXep(a, n);
	XuatMangDiem(a, n);//cau cuoi cung day roai, nghi thoi

	_getch();
}