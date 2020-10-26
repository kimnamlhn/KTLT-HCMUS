#include <stdio.h>
#include <stdlib.h>
#include "header.h"
void NhapMang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] =", i);
		scanf_s("%d", &a[i]);
	}
}
void XuatMang(int a[], int n)
{
	if (n > 0)
	{
		XuatMang(a, n - 1);

		printf("%5d", a[n - 1]);
	}
}
void XuatMangN(int a[], int n)
{
	if (n > 0)
	{

		printf("%5d", a[n - 1]);
		XuatMangN(a, n - 1);

	}
}
void FindMax(int a[], int n, int *max)
{

	if (n > 0)
	{
		int m = a[n - 1];
		if (m > *max)
		{
			*max = m;
		}
		FindMax(a, n - 1, max);
	}

}
int IsPrime(int temp)
{
	int flag = 0;
	if (temp == 1 || temp < 1) flag = 0;
	else
	{
		if (temp == 2) flag = 1;
		else
		{
			for (int i = 2; i < temp / 2; i++)
			{
				if (temp% i == 0)
				{
					flag = 0;
					break;
				}
				flag = 1;

			}

		}

	}
	return flag;
}
int Prime(int a[], int n)
{
	if (n >= 0)
	{
		if (IsPrime(a[n - 1]) == 0) 
			return 0 + Prime(a, n - 1);
		if (IsPrime(a[n - 1]) == 1) 
			return 1 + Prime(a, n - 1);
	}
	else return 0;

}
int Checkchia7(int a[], int n)
{
	if (n >= 0)
	{
		if (a[n - 1] % 7 == 0) 
			return 1 * Checkchia7(a, n - 1);
		else 
			return 0 * Checkchia7(a, n - 1);

	}
	else return 1;

}
void Swap(int *a, int *b)
{
	int temp = 0;
	temp = *a;
	*a = *b; *b = temp;
}
void Sort(int a[], int n)
{
	int idmax = 0, idmin = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[idmax] < a[i])
		{
			idmax = i;
		}
		if (a[idmin] > a[i])
		{
			idmin = i;
		}
	}
	Swap(&a[0], &a[idmin]);
	if (idmax == 0) 
		idmax = idmin;
	Swap(&a[n - 1], &a[idmax]);
	if (n > 3)
	{
		int *b = &a[1];
		Sort(b, n - 2);
	}

}