#include "MangTaiKhoan.h"
#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	TaiKhoan *a, tk;
	int n;
	char temp[31], ten[51];

	//nhap. xuat
	Nhap(a, n);
	Xuat(a, n);

	//chuc mung sinh nhat nhung nguoi sinh vao thang 4
	ChucMungSinhNhat(a, n);

	//nhap vao mot chuoi, xuat cac tai khoan co ho ten co chuoi do
	cout << "Nhap vao mot chuoi: " << endl;
	cin >> ten;

	//them tai khoan vao mang
	cout << "Nhap vao tai khoan muon them: " << endl;
	getchar();
	Nhap(tk);
	ThemTaiKhoan(a, n, tk);

	//xoa tai khoan qua ten dang nhap
	cout << "Nhap vao ten dang nhap muon xoa: " << endl;
	cin >> temp;
	XoaTaiKhoan(a, n, &temp[31]);

	//sap xep tai khoan theo ten dang nhap
	Sapxep(a, n);
	_getch();
}