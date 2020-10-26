#include "header.h"
#include <stdio.h>
#include <stdlib.h>
void Input(int *a, int n)
{
	
	for (int i = 0;i < n;i++)
	{
		printf("a[%d]= ", i);
		scanf_s("%d", &a[i]);
	}
}

void Output(int *a, int n)
{
	printf("1. Tang dan\n");
	printf("2. Giam dan\n");
	printf("Chon cach sap xep du lieu khi xuat ra man hinh: \n");
	int k;
	scanf_s("%d", &k);
	switch (k)
	{
	case 1:
		qsort(a, n, sizeof(int), cmpfunc);
		break;
	case 2:
		qsort(a, n, sizeof(int), cmpfunc1);
		break;
	default:
		printf("Lua chon nhap vao khong dung\n");
		break;
	}
	for (int i = 0;i < n;i++)
	{
		printf("a[%d]= %d\n", i, a[i]);
	}
}

int cmpfunc(const void * a, const void * b)
{
	return (*(int*)a - *(int*)b);
}
int cmpfunc1(const void * a, const void * b)
{
	return   *(int*)b - (*(int*)a);
}