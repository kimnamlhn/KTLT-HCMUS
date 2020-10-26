#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct SV
{
	char name[10];
	char mssv[10];
	int diemSo[3];
} SinhVien;

int main()
{
	FILE* p = fopen("sinhvien.bin", "wb");
	SV *sv;
	int n;

	return 1;
}