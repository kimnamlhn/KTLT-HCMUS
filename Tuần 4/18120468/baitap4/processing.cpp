#include "header.h"
#include <stdio.h>
#include <string.h>

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
	getchar();
	printf("Nhap dia chi: ");
	gets_s(sv.DiaChi);
	sv.DiemTB = (sv.Toan + sv.Ly + sv.Hoa) / 3;
	if (sv.DiemTB >= 9)
		strcpy_s(sv.XepLoai, "Xuat xac");
	else if (sv.DiemTB >= 8)
		strcpy_s(sv.XepLoai, "Gioi");
	else if (sv.DiemTB >= 7)
		strcpy_s(sv.XepLoai, "Kha");
	else if (sv.DiemTB >= 5)
		strcpy_s(sv.XepLoai, "Trung Binh");
	else
		strcpy_s(sv.XepLoai, "Yeu");
}
void XuatSV(SinhVien sv)
{
	printf("Ho ten: %s\tToan: %.1f\tLy: %.1f\tHoa: %.1f\tDiem TB: %.2f\tXep Loai: %s\tDia chi: %s\n", sv.HoTen, sv.Toan, sv.Ly, sv.Hoa, sv.DiemTB, sv.XepLoai, sv.DiaChi);
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

void TimKiem(SinhVien *svArr, int n)
{
	char temp[51];
	printf("Nhap vao dia chi can tim kiem: \n");
	gets_s(temp);
	printf("Danh sach tim kiem: \n");
	for (int i = 0;i < n;i++)
	{
		if (strcmp(temp, svArr[i].DiaChi) == 0)
			XuatSV(svArr[i]);
	}
}