typedef struct SinhVien
{
	char HoTen[51];
	float Toan, Ly, Hoa, DiemTB;
	char XepLoai[21];
	char DiaChi[51];
};
void NhapSV(SinhVien &sv);
void XuatSV(SinhVien sv);
void NhapMangSV(SinhVien *svArr, int n);
void XuatMangSV(SinhVien *svArr, int n);
void TimKiem(SinhVien *svArr, int n);
