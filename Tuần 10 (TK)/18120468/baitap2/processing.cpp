#include "header.h"
int Bai21(int n)
{
	if (n < 10) return 1;
	else return 1 + Bai21(n / 10);
}
int Bai22(int n)
{
	if (n < 10 && n % 2 == 0) 
		return n;
	else if (n > 10 && n % 2 == 0) 
		return (n % 10 + Bai22(n / 10));
	else if (n > 10 && n % 2 != 0) 
		return (Bai22(n / 10));
	else return 0;
}

int Bai23(int n)
{
	if (n < 10) 
		return n;
	return 0 + Bai23(n / 10);
}

int Bai24(int n)
{
	if (n < 10) 
		return n;
	return (n % 10)*pow(10, Bai24(n) - 1) + Bai24(n / 10);
}
int Bai25(int n, int &max)
{

	long m;
	if (n == 0)
		return max;
	else
	{
		m = n % 10;
		if (m > max)
			max = m;
	}
	return Bai25(n / 10, max);
}
int Bai26(int n)
{
	if (n > 0 && n % 2 == 0) 
		return 0;
	else if (n > 0 && n % 2 != 0) 
		return 1 * Bai26(n / 10);


}

