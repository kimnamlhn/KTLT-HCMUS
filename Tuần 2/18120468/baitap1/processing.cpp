#include "header.h"
#include <stdio.h>



void Input(int &n)
{
	printf("1: Phan an A (Burger, Drink, Potato) \n");
	printf("2: Phan an B(Cheese burger, Drink, Potato) \n");
	printf("3: Phan an C(Chicken burger, Drink, Potato) \n");
	printf("4: Phan an D(Chicken burger, Drink, Potato, Ice cream)	\n");
	printf("Chon mot trong cac phan an sau: (1->4): ");
	scanf_s("%d", &n);
}

void Output(MonAn List[], int n)
{
	switch (n)
	{
	case 1:
		PhanAnA(List, n);
		break;
	case 2:
		PhanAnB(List, n);
		break;
	case 3:
		PhanAnC(List, n);
		break;
	case 4:
		PhanAnD(List, n);
		break;	
	default:
		printf("Phan an nhap vao khong hop le !!");
		break;
	}
}

void PhanAnA(MonAn List[], int n)
{
	printf("************* Phan An A **************\n");
	printf("\t%s: %d JPY\n", List[0].Name, List[0].Prince);
	printf("\t%s: %d JPY\n", List[3].Name, List[3].Prince);
	printf("\t%s: %d JPY\n", List[4].Name, List[4].Prince);
	printf("-----------------------------------\n");
	printf("Tong gia tri mon: %d JPY\n", List[0].Prince + List[3].Prince + List[4].Prince);
	printf("Tong gia tri phan an: %d JPY\n", (List[0].Prince + List[3].Prince + List[4].Prince) * 9 / 10);
}

void PhanAnB(MonAn List[], int n)
{
	printf("************* Phan An B **************\n");
	printf("\t%s: %d JPY\n", List[1].Name, List[1].Prince);
	printf("\t%s: %d JPY\n", List[3].Name, List[3].Prince);
	printf("\t%s: %d JPY\n", List[4].Name, List[4].Prince);
	printf("-----------------------------------\n");
	printf("Tong gia tri mon: %d JPY\n", List[1].Prince + List[3].Prince + List[4].Prince);
	printf("Tong gia tri phan an: %d JPY\n", (List[1].Prince + List[3].Prince + List[4].Prince) * 9 / 10);
}
void PhanAnC(MonAn List[], int n)
{
	printf("************* Phan An C **************\n");
	printf("\t%s: %d JPY\n", List[2].Name, List[2].Prince);
	printf("\t%s: %d JPY\n", List[3].Name, List[3].Prince);
	printf("\t%s: %d JPY\n", List[4].Name, List[4].Prince);
	printf("-----------------------------------\n");
	printf("Tong gia tri mon: %d JPY\n", List[2].Prince + List[3].Prince + List[4].Prince);
	printf("Tong gia tri phan an: %d JPY\n", (List[2].Prince + List[3].Prince + List[4].Prince) * 9 / 10);
}
void PhanAnD(MonAn List[], int n)
{
	printf("************* Phan An D **************\n");
	printf("\t%s: %d JPY\n", List[2].Name, List[2].Prince);
	printf("\t%s: %d JPY\n", List[3].Name, List[3].Prince);
	printf("\t%s: %d JPY\n", List[4].Name, List[4].Prince);
	printf("\t%s: %d JPY\n", List[5].Name, List[5].Prince);
	printf("-----------------------------------\n");
	printf("Tong gia tri mon: %d JPY\n", List[2].Prince + List[3].Prince + List[4].Prince + List[5].Prince);
	printf("Tong gia tri phan an: %d JPY\n", (List[2].Prince + List[3].Prince + List[4].Prince + List[5].Prince) * 9 / 10);
}