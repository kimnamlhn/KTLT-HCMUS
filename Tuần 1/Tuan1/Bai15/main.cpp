#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct Sach
{
	char Ma[8];
	char Ten[51];
	char Tacgia[51];
	char NXB[51];
	float Gia;
	int SoTrang;
	int NamXB;
};

void NhapSach(Sach *s)
{
	getchar();
	printf("Nhap ma sach: ");
	gets_s(s->Ma);
	printf("Nhap ten sach: ");
	gets_s(s->Ten);
	printf("Nhap ten tac gia: ");
	gets_s(s->Tacgia);
	printf("Nhap NXB: ");
	gets_s(s->NXB);
	printf("Nhap gia ban: ");
	scanf_s("%f", &s->Gia);
	printf("Nhap so trang: ");
	scanf_s("%d", &s->SoTrang);
	printf("Nhap nam xuat ban: ");
	scanf_s("%d", &s->NamXB);

	
}

void Swap(Sach &x,Sach &y)
{
	char temp[51];
	int temp1;

	strcpy_s(temp, y.Ma);
	strcpy_s(y.Ma, x.Ma);
	strcpy_s(x.Ma, temp);
	strcpy_s(temp, y.Ten);
	strcpy_s(y.Ten, x.Ten);
	strcpy_s(x.Ten, temp);
	strcpy_s(temp, y.Tacgia);
	strcpy_s(y.Tacgia, x.Tacgia);
	strcpy_s(x.Tacgia, temp);
	strcpy_s(temp, y.NXB);
	strcpy_s(y.NXB, x.NXB);
	strcpy_s(x.NXB, temp);
	
	temp1 = y.Gia;
	y.Gia= x.Gia;
	x.Gia = temp1;
	temp1 = y.SoTrang;
	y.SoTrang = x.SoTrang;
	x.SoTrang = temp1;
	temp1 = y.NamXB;
	y.NamXB = x.NamXB;
	x.NamXB = temp1;

}

void SapXep(Sach *p,int n)
{

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
			if (p[i].NamXB > p[j].NamXB) 
				Swap(p[i], p[j]);
	}

}

void XuatSach(Sach *s)
{
	printf("Ma sach: %s\n", s->Ma);
	printf("Ten sach: %s\n", s->Ten);
	printf("Tac gia: %s\n", s->Tacgia);
	printf("Nha xuat ban: %s\n", s->NXB);
	printf("Gia sach: %.2f\n", s->Gia);
	printf("So trang: %d\n", s->SoTrang);
	printf("Nam xuat ban: %d\n", s->NamXB);
}
void NhapMangSach(Sach *p,int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("\nNhap quyen sach %d\n", i + 1);
		NhapSach(p);
		p = p + 1;
	}
}

void XuatMangSach(Sach *p, int n)
{
	printf("\nXuat cac sach: \n");
	for (int i = 0;i < n;i++)
	{
		printf("\nXuat quyen sach thu %d: \n", i + 1);
		XuatSach(p);
		p = p + 1;
	}
}

void TimSach(Sach *p,int &k,int n)
{
	printf("Nhap k: ");
	scanf_s("%d", &k);
	Sach* temp = p;
	for (int i = 0;i < n ;i++)
	{
		if (p->SoTrang > k)
			continue;
		else
		{
			if (p->Gia > temp->Gia)
				temp = p;
		}
	}
	printf("Quyen sach can tim la: \n");
	XuatSach(temp);
}
void main()
{
	Sach *p = NULL;
	int n, k, nam;
	printf("Nhap vao so luong sach: ");
	scanf_s("%d", &n);
	p= new Sach[n];
	NhapMangSach(p, n); //cau 15.1
	XuatMangSach(p, n); //cau 15.2
	SapXep(p, n); //cau 15.3
	TimSach(p, k, n);//cau 15.4
	//chua lam xong bai 15.5 va 15.6, neu lam bang vevtor se de hon...	
	delete[] p;
	_getch();
}

