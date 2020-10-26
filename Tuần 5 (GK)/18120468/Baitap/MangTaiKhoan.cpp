#include "MangTaiKhoan.h"

void Nhap(TaiKhoan *&a, int &n)
{
	cout << "Nhap so tai khoan: ";
	cin >> n;
	getchar();
	a = new TaiKhoan[n];
	if (a == NULL)
		return;
	for (int i = 0;i < n;i++)
	{
		cout << "Nhap tai khoan thu " << i + 1 << ":" << endl;
		Nhap(a[i]);
	}
}
void Xuat(TaiKhoan *a, int n)
{
	if (n == 0)
		cout << "Khong co tai khoan nao !!!" << endl;
	for (int i = 0;i < n;i++)
	{
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "Tai khoan thu " << i + 1 << ":" << endl;
		Xuat(a[i]);
	}
}
void LietKeTheoTen(TaiKhoan *a, int n, char ten[])
{
	for (int i = 0;i < n;i++)
	{
		char s[51];
		strcpy_s(s, a[i].HoTen);
		_strlwr_s(s);
		char *p = strstr(s, ten);
		if (p != NULL)
		{
			Xuat(a[i]);
		}
	}
}
void ThemTaiKhoan(TaiKhoan *a, int &n, TaiKhoan &tk)
{
	if (n == 0)
	{
		a = new TaiKhoan[1];
		n = 1;
		a[0] = tk;
		return;
	}
	int vitri = -1;
	for (int i = 0;i < n;i++)
	{
		if (strcmp(a[i].TenDangNhap, tk.TenDangNhap) == 0)
			vitri = i;
	}
	if (vitri != -1)
	{
		cout << "Tai khoan da ton tai !" << endl;
		return;
	}
	TaiKhoan *b = new TaiKhoan [n]; 
	for (int i = 0;i < n;i++)
	{
		b[i] = a[i];
	}
	n++;
	a = new TaiKhoan[n];
	if (a == NULL)
	{
		a = b;
		n--;
		return;
	}

	for (int i = 0;i < n -1 ;i++)
	{
		a[i] = b[i];
	}
	a[n - 1] = tk;
	delete[] b;
}
void XoaTaiKhoan(TaiKhoan *a, int &n, char TenDangNhap[])
{
	int vitri = -1;
	for (int i = 0;i < n;i++)
	{
		if (strcmp(a[i].TenDangNhap, TenDangNhap) == 0)
			vitri = i;
	}
	if (vitri == -1)
	{
		cout << "Tai khoan khong ton tai!" << endl;
		return;
	}
	TaiKhoan *b = new TaiKhoan[n];
	for (int i = 0;i < n;i++)
	{
		b[i] = a[i];
	}
	n--;
	a = new TaiKhoan[n];
	if (a == NULL)
	{
		a = b;
		n++;
		return;
	}

	for (int i = 0;i < vitri ;i++)
	{
		a[i] = b[i];
	}
	for(int i=vitri+1;i<=n;i++)
	{
		a[i] = b[i];
	}
	delete[] b;
}

void ChucMungSinhNhat(TaiKhoan *a, int n)
{
	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	for (int i = 0;i < n;i++)
	{
		if (a[i].Ntns.thang == 4)
			cout << "Chuc mung " << a[i].HoTen << " sinh nhat thang 4 vui ve!!" << endl;
	}
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

void Sapxep(TaiKhoan *a, int n)
{
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = i + 1;j < n;j++)
		{
			if (strcmp(a[i].HoTen, a[j].HoTen) < 0)
				Swap(a[i], a[j]);
		}
	}
}

void XuatTKCoTen(TaiKhoan *a, int n)
{

	char temp[31];
	char *test;
	cout << endl;
	cout << "Cac tai khoan co ho ten co chuoi nhap vao la: " << endl;
	for (int i = 0;i < n;i++)
	{
		strcpy_s(temp, a[i].HoTen);
		_strlwr_s(temp);
		test = strstr(temp, "admin");
		if (test != NULL)
			Xuat(a[i]);
	}
}