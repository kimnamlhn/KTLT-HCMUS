#include "TaiKhoan.h"
void Nhap(TaiKhoan &tk)
{
	do
	{	
		cout << "Nhap ten dang nhap: ";
		cin.get(tk.TenDangNhap, 30, '\n');
		cin.ignore();
	} while (KiemTraTenDangNhap(tk.TenDangNhap) == false);
	do
	{
		cout << "Nhap mat khau: ";
		cin.get(tk.MatKhau, 30, '\n');
		cin.ignore();
	} while (KiemTraMatKhau(tk.MatKhau) == false);
	do
	{
		cout << "Nhap lai mat khau: ";
		cin.get(tk.MatKhau, 30, '\n');
		cin.ignore();
	} while (KiemTraMatKhau(tk.MatKhau) == false);
	do
	{
		cout << "Nhap ho ten: ";
		cin.get(tk.HoTen, 50, '\n');
		cin.ignore();
	} while (KiemTraHoTen(tk.HoTen) == false);
	do
	{
		cout << "Nhap Email: ";
		cin.get(tk.Email, 50, '\n');
		cin.ignore();
	} while (KiemTraEmail(tk.Email) == true);
	cout << "Nhap ngay thang nam sinh: " << endl;
	Nhap(tk.Ntns);
}

void Nhap(Ngay &ngay)
{
	cout << "Nhap ngay: ";
	cin >> ngay.ngay;
	cout << "Nhap thang: ";
	cin >> ngay.thang;
	cout << "Nhap nam: ";
	cin >> ngay.nam;
	cin.ignore();
}

bool KiemTraTenDangNhap(char TenDangNhap[])
{
	char temp[31];
	char *test;
	strcpy_s(temp, TenDangNhap);
	_strlwr_s(temp);
	test = strstr(temp, "admin");
	if (test == NULL)
			return true;
	return false;
}

bool KiemTraMatKhau(char MatKhau[])
{
	//kiem tra do dai mk
	if (strlen(MatKhau) < 6)
		return false;
	int n = strlen(MatKhau);

	//kiem tra co ki tu hoa
	int ktHoa = 0;
	for (int i = 0;i < n;i++)
	{
		if (MatKhau[i] >= 'A' && MatKhau[i] <= 'Z')
			ktHoa = 1;
	}
	if (ktHoa == 0)
		return false;
	
	//kiem tra co kt a->z va A->Z
	int ktKiTu = 0;
	for (int i = 0;i < n;i++)
	{
		if (MatKhau[i] >= 'A' && MatKhau[i] <= 'Z')
			ktKiTu = 1;
		if (MatKhau[i] >= 'a' && MatKhau[i] <= 'z')
			ktKiTu = 1;

	}
	if (ktKiTu == 0)
		return false;

	//kiem tra co so
	int ktSo = 0;
	for (int i = 0;i < n;i++)
	{
		if (MatKhau[i] >= '0' && MatKhau[i] <= '9')
			ktSo = 1;
	}
	if (ktSo == 0)
		return false;

	//kiem tra dau cau
	int ktDau = 0;
	for (int i = 0;i < n;i++)
	{
		if (MatKhau[i] == ',' || MatKhau[i] == '.' || MatKhau[i] == '?' || MatKhau[i] == ':' || MatKhau[i] == ';' || MatKhau[i] == '~' || MatKhau[i] == '-' || MatKhau[i] == '_')
			ktDau = 1;
	}
	if (ktDau == 0)
		return false;

	//kiem tra het thi tra ve true
	return true;

}

bool KiemTraHoTen(char HoTen[])
{
	//kiem tra co khoang trang
	int n = strlen(HoTen);
	int ktKhoangTrang = 0;
	for (int i = 0;i < n;i++)
	{
		if (HoTen[i] == ' ')
			return true;
	}
	return false;
}

bool KiemTraEmail(char Email[])
{
	int kt1 = 0;
	int kt2 = 0;
	int n = strlen(Email);
	for (int i = 0;i < n;i++)
	{
		if (Email[i] == '.') 
			kt1 = 1;
		if (Email[i] == '@')
			kt1 = 1;
	}
	if (kt1 == 0 || kt2 == 0)
		return false;
	return true;
}

void Xuat(Ngay ngay)
{
	cout << ngay.ngay << "/" << ngay.thang << "/" << ngay.nam << endl;
}
void Xuat(TaiKhoan tk)
{
	cout << "Ten dang nhap: " << tk.TenDangNhap << endl;
	cout << "Mat khau: " << tk.MatKhau << endl;
	cout << "Ho ten: " << tk.HoTen << endl;
	cout << "Email: " << tk.Email << endl;
	cout << "NTNS: ";
	Xuat(tk.Ntns);
}
void Swap(TaiKhoan &a, TaiKhoan &b)
{
	TaiKhoan temp;
	temp = a;
	a = b;
	b = temp;
}