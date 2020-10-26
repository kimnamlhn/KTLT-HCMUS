#include "mangdiem.h"
void NhapMangDiem(Diem a[], int &n)
{
	printf("Nhap vao so luong diem n: ");
	scanf_s("%d", &n);
	for (int i = 0;i < n;i++)
	{
		printf("Nhap diem thu %d:\n", i + 1);
		NhapDiem(a[i]);
	}
	printf("\n");
}


void XuatMangDiem(Diem a[], int n)
{
	printf("Xuat mang diem: \n");
	for (int i = 0;i < n;i++)
	{
		printf("Xuat diem thu %d\n", i + 1);
		XuatDiem(a[i]);
		printf("\n");
	}
}

void KhoangCachMax(Diem a[], int n)
{
	Diem A;
	printf("\nNhap vao diem A: \n");
	NhapDiem(A);
	float max = Khoangcach(a[0], A);
	int temp = 0;
	for (int i = 1;i < n;i++)
	{
		if (Khoangcach(a[i], A) > max)
		{
			max = Khoangcach(a[i], A);
			temp = i;
		}
	}
	printf("Diem trong mang co khoang cach so voi A lon nhat co toa do: \n");
	XuatDiem(a[temp]);
}


void DiemToaDoDuong(Diem a[], int n)
{
	printf("\nCac diem co toa do duong trong mang la: \n");
	for (int i = 0;i < n;i++)
	{
		if (a[i].x > 0 && a[i].y > 0)
			XuatDiem(a[i]);
		printf("\n");
	}
}

void SapXep(Diem a[], int n)
{
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = i + 1;j < n;j++)
		{
			if (KhoangCach(a[i]) > KhoangCach(a[j]))
				SwapDiem(a[i], a[j]);
		}
	}
}