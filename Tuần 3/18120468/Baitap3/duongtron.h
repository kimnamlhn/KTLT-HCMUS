#ifndef DUONG_TRON_H
#define DUONG_TRON_H
#include "diem.h"
typedef struct DuongTron
{
	Diem tam;
	float bankinh;
};

void NhapDuongTron(DuongTron &a);
void XuatDuongTron(DuongTron a);
float ChuVi(DuongTron a);
float DienTich(DuongTron a);
void SwapDuongTron(DuongTron &a, DuongTron &b);

#endif // !DUONG_TRON_H