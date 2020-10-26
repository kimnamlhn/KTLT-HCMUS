#include "mangduongtron.h"


void NhapMangDuongTron(DuongTron a[], int &n)
{
	printf("Nhap vao so luong duong tron: ");
	scanf_s("%d", &n);
	for (int i = 0;i < n;i++)
	{
		printf("Nhap vao duong tron %d\n", i + 1);
		NhapDuongTron(a[i]);
	}
}


void XuatMangDuongTron(DuongTron a[], int n)
{
	printf("\nXuat mang cac duong tron: \n");
	for (int i = 0;i < n;i++)
	{
		printf("Xuat duong tron %d\n", i + 1);
		XuatDuongTron(a[i]);
	}
}


void ChuViMax(DuongTron a[], int n)
{
	float max = ChuVi(a[0]);
	int temp = 0;
	for (int i = 1;i < n;i++)
	{
		if (ChuVi(a[i]) > max)
		{
			max = ChuVi(a[i]);
			temp = i;
		}
	}
	printf("\nDuong Tron co chu vi lon nhat trong mang la: \n ");
	XuatDuongTron(a[temp]);
}


float TongSDuongTron(DuongTron a[], int n)
{
	float S = 0;
	for (int i = 0;i < n;i++)
	{
		S += DienTich(a[i]);
	}
	return S;
}

void DemDuongTron(DuongTron a[], int n)
{
	float Stb = TongSDuongTron(a, n) / n;
	int count = 0;
	for (int i = 0;i < n;i++)
	{
		if (DienTich(a[i]) > Stb)
			count++;
	}
	printf("\nSo duong tron co S lon hon S trung binh la: %d\n", count);
}


void SapxepDuongTron(DuongTron a[], int n)
{
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (ChuVi(a[i]) < ChuVi(a[j]))
				SwapDuongTron(a[i], a[j]);
		}
	}
	printf("\nXuat ra mang Duong Tron sau khi sap xep: \n");
	XuatMangDuongTron(a, n);
}