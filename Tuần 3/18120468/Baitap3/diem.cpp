#include "diem.h"
#include <math.h>
void NhapDiem(Diem &d)
{
	printf("Nhap x= ");
	scanf_s("%f", &d.x);
	printf("Nhap y= ");
	scanf_s("%f", &d.y);
}

void XuatDiem(Diem d)
{
	printf("%.2f/%.2f", d.x, d.y);
}


float Khoangcach(Diem a, Diem b)
{
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

float KhoangCach(Diem a)
{
	return sqrt(pow(a.x, 2) + pow(a.y, 2));
}

void Swap(float &x, float&y)
{
	float temp;
	temp = x;
	x = y;
	y = temp;
}

void SwapDiem(Diem &a, Diem &b)
{
	Swap(a.x, b.x);
	Swap(a.y, b.y);
}