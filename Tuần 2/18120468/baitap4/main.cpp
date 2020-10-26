#include "header.h"
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
	int *a;
	int n;
	printf("Nhap vao so luong phan tu cua mang: ");
	scanf_s("%d", &n);
	a = new int[n];
	Input(a, n);
	Output(a, n);
	_getch();
}