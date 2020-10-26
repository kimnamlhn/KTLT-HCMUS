#include "header.h"
#include <conio.h>
int main()
{
	int n, x;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Cau 1: " << S1(n) << endl;
	cout << "Cau 2: " << S2(n) << endl;
	cout << "Cau 3: " << S3(n) << endl;
	cout << "Cau 4: " << S4(x, n) << endl;
	cout << "Cau 5: " << Fi(n) << endl;
	_getch();
	return 0;
}
