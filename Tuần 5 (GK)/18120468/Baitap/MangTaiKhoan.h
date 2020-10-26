#ifndef _MANG_TAI_KHOAN_
#define _MANG_TAI_KHOAN_
#include "TaiKhoan.h"

void Nhap(TaiKhoan *&a, int &n);  //tham so: mang, so phan tu
void Xuat(TaiKhoan *a, int n);
void LietKeTheoTen(TaiKhoan *a, int n, char ten[]);
void ThemTaiKhoan(TaiKhoan *a, int &n, TaiKhoan &tk);
void XoaTaiKhoan(TaiKhoan *a, int &n, char TenDangNhap[]);
void ChucMungSinhNhat(TaiKhoan *a, int n);
void Sapxep(TaiKhoan *a, int n);
void XuatTKCoTen(TaiKhoan *a, int n);
#endif // !_MANG_TAI_KHOAN_
