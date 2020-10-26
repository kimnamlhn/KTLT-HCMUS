#include "header.h"
#include <conio.h>
void main()
{
	int n, max;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Cau 1: " << Bai21(n) << endl;
	cout << "Cau 2: " << Bai22(n) << endl;
	cout << "Cau 3: " << Bai23(n) << endl;
	cout << "Cau 4: " << Bai24(n) << endl;
	cout << "Cau 5: " << Bai25(n, max) << endl;
	cout << "Cau 6: ";
	if (Bai26(n) == 0)
		cout << "Trong so nguyen n co so chan" << endl;
	else
		cout << "So nguyen n deu la so le" << endl;
	_getch();
}