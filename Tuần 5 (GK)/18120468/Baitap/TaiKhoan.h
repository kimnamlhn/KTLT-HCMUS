#ifndef _TAI_KHOAN_H_
#define _TAI_KHOAN_H_
#include <iostream>
#include <string>
using namespace std;

typedef struct Ngay
{
	int ngay, thang, nam;
};

typedef struct TaiKhoan
{
	char TenDangNhap[31];
	char MatKhau[31];
	char HoTen[51];
	char Email[51];
	Ngay Ntns;
};

void Nhap(TaiKhoan &tk);
void Nhap(Ngay &ngay);
bool KiemTraTenDangNhap(char TenDangNhap[]);
bool KiemTraMatKhau(char MatKhau[]);
bool KiemTraHoTen(char HoTen[]);
bool KiemTraEmail(char Email[]);
void Xuat(Ngay ngay);
void Xuat(TaiKhoan tk);
void Swap(TaiKhoan &a, TaiKhoan &b);



#endif // !_TAI_KHOAN_H_
