#include "header.h"
#include <stdio.h>


void NhapSV(SinhVien &sv)
{
	//fflush(stdin);
	getchar();
	printf("Nhap ho ten: ");
	gets_s(sv.HoTen);
	printf("Nhap diem Toan: ");
	scanf_s("%f", &sv.Toan);
	printf("Nhap diem Ly: ");
	scanf_s("%f", &sv.Ly);
	printf("Nhap diem Hoa: ");
	scanf_s("%f", &sv.Hoa);
	sv.DiemTB = (sv.Toan + sv.Ly + sv.Hoa) / 3;
}
void XuatSV(SinhVien sv)
{
	printf("Ho ten: %s\tToan: %.1f\tLy: %.1f\tHoa: %.1f\tDiem TB: %.2f\n", sv.HoTen, sv.Toan, sv.Ly, sv.Hoa, sv.DiemTB);
}
void NhapMangSV(SinhVien* svArr, int n)
{
	for (int i = 0;i < n;i++)
	{
		NhapSV(svArr[i]);
	}
}
void XuatMangSV(SinhVien *svArr, int n)
{
	for (int i = 0;i < n;i++)
	{
		XuatSV(svArr[i]);
	}
}