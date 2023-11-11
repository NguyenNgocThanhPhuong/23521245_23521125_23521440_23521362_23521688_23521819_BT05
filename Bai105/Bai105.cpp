#include<iostream>
using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);

bool ktNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int SoThuTuTrongNam(NGAY);
int SoThuTu(NGAY);

NGAY TimNgay(int, int);
NGAY TimNgay(int);
NGAY KeTiep(NGAY);

int main()
{
	NGAY a;
	cout << "Nhap ngay a: \n";
	Nhap(a);

	cout << "\nNgay a: ";
	Xuat(a);

	cout << "\n\nNgay ke tiep : ";
	Xuat(KeTiep(a));

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(NGAY& x)
{
	cout << "Nhap ngay: ";
	cin >> x.Ngay;
	cout << "Nhap thang: ";
	cin >> x.Thang;
	cout << "Nhap nam: ";
	cin >> x.Nam;
}

void Xuat(NGAY x)
{
	cout << x.Ngay << "/" << x.Thang << "/" << x.Nam;
}

bool ktNhuan(NGAY x)
{
	if (x.Nam % 4 == 0 && x.Nam % 100 != 0)
		return true;
	if (x.Nam % 400 == 0)
		return true;
	return false;
}

int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (ktNhuan(x))
		ngaythang[1] = 29;
	return ngaythang[x.Thang - 1];
}

int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
}
int SoThuTuTrongNam(NGAY x)
{
	int stt = 0;
	for (int i = 1; i < x.Thang; i++)
	{
		NGAY temp = { 1,i,x.Nam };
		stt = stt + SoNgayToiDaTrongThang(temp);
	}
	return (stt + x.Ngay);
}

int SoThuTu(NGAY x)
{
	int stt = 0;
	for (int i = 1; i < x.Nam; i++)
	{
		NGAY temp = { 1,1,i };
		stt = stt + SoNgayToiDaTrongNam(temp);
	}
	return (stt + SoThuTuTrongNam(x));
}

NGAY TimNgay(int Nam, int stt)
{
	NGAY temp = { 1,1,Nam };
	temp.Thang = 1;
	while (stt - SoNgayToiDaTrongThang(temp) > 0)
	{
		stt -= SoNgayToiDaTrongThang(temp);
		temp.Thang++;
	}
	temp.Ngay = stt;
	return temp;
}

NGAY TimNgay(int stt)
{
	int Nam = 1;
	int sn = 365;
	while (stt - sn > 0)
	{
		stt -= sn;
		Nam++;
		NGAY temp = { 1,1,Nam };
		sn = SoNgayToiDaTrongNam(temp);
	}
	return TimNgay(Nam, stt);
}

NGAY KeTiep(NGAY x)
{
	int stt = SoThuTu(x);
	stt++;
	return TimNgay(stt);
}