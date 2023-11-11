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
int SoNgayToiDaTrongNam(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int SoThuTu(NGAY);

NGAY TimNgay(int, int);
NGAY TimNgay(int);

NGAY TruocDo(NGAY);
NGAY TruocDo(NGAY, int);

int main()
{
	NGAY a;
	cout << "Nhap ngay a: \n";
	Nhap(a);

	cout << "\nNgay a: ";
	Xuat(a);

	int n;
	cout << "\n\nNhap so ngay truoc do: ";
	cin >> n;

	NGAY b = TruocDo(a, n);
	cout << "\nNgay truoc do " << n << " ngay: ";
	Xuat(b);

	cout << "\n\n\nKet Thuc !!!";
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

NGAY TruocDo(NGAY x)
{
	if (x.Ngay == 1 && x.Thang == 1 && x.Nam == 1)
		return x;
	int stt = SoThuTu(x);
	stt = stt - 1;
	return TimNgay(stt);
}

NGAY TruocDo(NGAY x, int k)
{
	NGAY temp = x;
	for (int i = 1; i <= k; i++)
		temp = TruocDo(temp);
	return temp;
}