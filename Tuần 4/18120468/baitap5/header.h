typedef struct SinhVien
{
	char HoTen[51];
	float Toan, Ly, Hoa;
};
void NhapSV(SinhVien &sv);
void XuatSV(SinhVien sv);
void NhapMangSV(SinhVien *svArr, int n);
void XuatMangSV(SinhVien *svArr, int n);