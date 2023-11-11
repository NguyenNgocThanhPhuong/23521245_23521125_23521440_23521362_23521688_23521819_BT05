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

void Nhap(int&);
void Xuat(NGAY);

bool ktNhuan(NGAY);
int SoNgayToiDaTrongNam(NGAY);
int SoNgayToiDaTrongThang(NGAY);

NGAY TimNgay(int, int);
NGAY TimNgay(int);

int main()
{
	int a;
	Nhap(a);

	cout << "Ngay can tim: ";
	NGAY kq = TimNgay(a);
	Xuat(kq);

	cout << "\n\n\nKet Thuc !!!";
	return 0;
}

void Nhap(int& x)
{
	cout << "Nhap so thu tu ngay ke tu 01/01/01: ";
	cin >> x;
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

int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
}

int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (ktNhuan(x))
		ngaythang[1] = 29;
	return ngaythang[x.Thang - 1];
}

NGAY TimNgay(int Nam, int stt)
{
	NGAY temp = { 1,1,Nam };
	while (stt - SoNgayToiDaTrongThang(temp) > 0)
	{
		stt = stt - SoNgayToiDaTrongThang(temp);
		temp.Thang++;
	}
	temp.Ngay = stt;
	return temp;
}

NGAY TimNgay(int stt)
{
	int nam = 1;
	int sn = 365;
	while (stt - sn > 0)
	{
		stt = stt - sn;
		nam++;
		NGAY temp = { 1,1,nam };
		sn = SoNgayToiDaTrongNam(temp);
	}
	return TimNgay(nam, stt);
}