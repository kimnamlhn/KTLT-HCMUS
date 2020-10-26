//lam lai bai 1 nhung su dung con tro
// va phep tinh con tro 
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
	} while (n >= 10 || n < 0);
	svArr = (SinhVien*)malloc(n * sizeof(SinhVien));
	NhapMangSV(svArr, n);
	XuatMangSV(svArr, n);

	_getch();
}