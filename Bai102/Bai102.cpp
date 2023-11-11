#include <iostream>
#include <iomanip>
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
int SoNgayToiDaTrongNam(NGAY);
bool ktHopLe(NGAY);
int SoThuTu(NGAY);
int KhoangCach(NGAY, NGAY);

int main()
{
	NGAY a;
	cout << "Nhap ngay a: \n";
	Nhap(a);

	cout << "\nNgay a: ";
	Xuat(a);

	NGAY b;
	cout << "\n\nNhap ngay b:\n";
	Nhap(b);

	cout << "\nNgay b: ";
	Xuat(b);

	cout << "\nKhoang cach giua hai ngay: " << KhoangCach(a, b);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(NGAY& x)
{
	cout << "\nNhap ngay: ";
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
	for (int i = 1; i <= x.Thang - 1; i++)
	{
		NGAY temp = { 1,i,x.Nam };
		stt += SoNgayToiDaTrongThang(temp);
	}
	return (stt + x.Ngay);
}

int SoThuTu(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Nam - 1; i++)
	{
		NGAY temp = { 1,1,i };
		stt = stt + SoNgayToiDaTrongNam(temp);
	}
	return (stt + SoThuTuTrongNam(x));
}

int KhoangCach(NGAY x, NGAY y)
{
	int a = SoThuTu(x);
	int b = SoThuTu(y);
	return abs(a - b);
}