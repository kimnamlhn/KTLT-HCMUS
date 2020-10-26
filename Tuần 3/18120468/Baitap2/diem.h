#ifndef _Diem_H_
#define _Diem_H_
#include <stdio.h>
struct DIEM
{

	float x;
	float y;
};
typedef struct DIEM Diem;
void NhapDiem(Diem &d);
void XuatDiem(Diem d);
float Khoangcach(Diem a, Diem b);
void SwapDiem(Diem &a, Diem &b);
float KhoangCach(Diem a);
void Swap(float &x, float&y);
#endif // !_Diem_H_
