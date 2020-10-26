#include "header.h"
#include <conio.h>
void main()
{
	int n, *a, *max;
	do
	{
		printf("Nhap so phan tu n: ");
		scanf_s("%d", &n);
		if (n < 0)
			printf("Khong hop le, nhap lai n \n");
	} while (n < 0);
	a = (int *)malloc(n * sizeof(int));
	printf("NhapMang: \n");
	NhapMang(a, n);
	max = &a[0];
	XuatMang(a, n);
	printf(" \n");
	XuatMangN(a, n);
	FindMax(a, n, max);
	printf(" \n");
	printf(" %d \n", *max);
	printf(" co %d so nguyen to ", Prime(a, n));
	printf(" \n");
	if (Checkchia7(a, n) == 1)
		printf("Thoa man deu chia het cho 7 \n");
	else
		printf("Khong thoa man moi so deu chia het cho 7 \n");
	printf("Mang sau khi sap xep: \n");
	Sort(a, n);
	XuatMang(a, n);
	_getch();
	free(a);
}
