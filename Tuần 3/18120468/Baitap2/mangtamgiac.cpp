#include "mangtamgiac.h"


void NhapMangTG(TamGiac a[], int &n)
{
	printf("Nhap vao so luong tam giac: ");
	scanf_s("%d", &n);
	for (int i = 0;i < n;i++)
	{
		printf("Nhap vao tam giac %d\n", i + 1);
		NhapTamGiac(a[i]);
	}
}


void XuatMangTG(TamGiac a[], int n)
{
	printf("\nXuat mang cac tam giac: \n");
	for (int i = 0;i < n;i++)
	{
		printf("Xuat tam giac %d\n", i + 1);
		XuatTamGiac(a[i]);
	}
}


void ChuViMax(TamGiac a[], int n)
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
	printf("\nTam giac co chu vi lon nhat trong mang la: \n ");
	XuatTamGiac(a[temp]);
}


float TongSTamGiac(TamGiac a[], int n)
{
	float S = 0;
	for (int i = 0;i < n;i++)
	{
		S += DienTich(a[i]);
	}
	return S;
}

void DemTamGiac(TamGiac a[], int n)
{
	float Stb = TongSTamGiac(a, n) / n;
	int count = 0;
	for (int i = 0;i < n;i++)
	{
		if (DienTich(a[i]) > Stb)
			count++;
	}
	printf("\nSo tam giac co S lon hon S trung binh la: %d\n", count);
}


void SapxepTG(TamGiac a[], int n)
{
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = 0;j < n;j++)
		{
			if (ChuVi(a[i]) < ChuVi(a[j]))
				SwapTG(a[i], a[j]);
		}
	}
	printf("\nXuat ra mang TG sau khi sap xep: \n");
	XuatMangTG(a, n);
}