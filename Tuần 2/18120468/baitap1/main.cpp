#include "header.h"
#include <stdio.h>
#include <conio.h>

void main()
{
	//khong can cap phat dong thoa man nhat !!!
	int n;
	MonAn List[6] =
	{ 
	{"Burger",130}, 
	{"Cheer burger", 150},
	{"Chicke burger",200 },
	{"Drink",130},
	{"Potato",130},
	{"Ice cream",160}
	};
	Input(n);
	Output(List, n);


	_getch();
}