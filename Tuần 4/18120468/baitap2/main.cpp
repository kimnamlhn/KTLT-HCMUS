#include "header.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
	int n;
	SinhVien* svArr;
	do
	{
		printf("Nhap vao so luong SV: ");
		scanf_s("%d", &n);
	} while (n >= 10 || n < 0);//khoi tao 5 sv, nhap n=5
	svArr = (SinhVien*)malloc(n * sizeof(SinhVien));
	NhapMangSV(svArr, n);
	XuatMangSV(svArr, n);
	//them diem trung binh
	_getch();
}