#include <iostream>
#include "header.h"
#include <math.h>


using namespace std;

int S1(int n)
{
	if (n == 1)
		return 1;
	else  
		return n * n + (S1(n - 1));
}
float S2(int n)
{
	if (n == 1) 
		return 1;
	else 
		return (float)1 / n + (S2(n - 1));

}


float S3(int n)
{
	if (n == 1) 
		return (float)1 / 2;
	else 
		return (float)1 / (2 * n) + S3(n - 1);

}
float S4(int x, int n)
{
	if (n == 1) 
		return x * x;
	else 
		return  pow(x, 2 * n) + S4(x, n - 1);

}
float Fi(int n)
{
	int Fi_1, Fi_2;
	if (n == 1 || n == 2) return 1;
	else
	{
		Fi_1 = Fi(n - 1);
		Fi_2 = Fi(n - 2);
		return (Fi_1 + Fi_2);
	}
}