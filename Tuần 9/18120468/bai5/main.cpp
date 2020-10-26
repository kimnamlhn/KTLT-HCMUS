#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct SV
{
	char name[10];
	char mssv[10];
	int diemSo[3];
} SinhVien;

void Nhap(SV &sv)
{
	printf("Nhap ten: \n");
	fflush(stdin);
	gets_s(sv.name);
	printf("Nhap MSSV: \n");
	fflush(stdin);
	gets_s(sv.mssv);
	printf("Nhap diem: \n");
	scanf_s("%d", &sv.diemSo);
}
void NhapSV(SV *sv, int &n)
{
	printf("Nhap vao so luong sinh vien \n");
	scanf_s("%d", &n);
	for (int i = 0;i < n;i++)
	{
		Nhap(sv[i]);
	}
}
int main()
{
	FILE* p = fopen("sinhvien.bin", "wb");
	int n;
	SV *sv;
	NhapSV(sv, n);
	if (p != NULL) 
	{
		for (int i = 0;i < n;i++)
		{
			fputs(sv[i].name, p);
			fputs(sv[i].mssv, p);
			fwrite((const void*)sv[i].diemSo, sizeof(int), 1, p);

		}
	}

	return 1;
}