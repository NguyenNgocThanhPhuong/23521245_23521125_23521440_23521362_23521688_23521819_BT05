#include <iostream>
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

int ktNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int ktHopLe(NGAY);
int SoSanh(NGAY, NGAY);

int main()
{
	NGAY a;
	cout << "Nhap ngay a:";
	Nhap(a);

	cout << "\nNgay a: ";
	Xuat(a);

	NGAY b;
	cout << "\n\nNhap ngay b:";
	Nhap(b);

	cout << "\nNgay b: ";
	Xuat(b);

	switch (SoSanh(a, b))
	{
	case -1: cout << "\n\nNgay thu nhat nho hon ngay thu hai";
		break;
	case 0: cout << "\n\nNgay thu nhat bang ngay thu hai";
		break;
	case 1: cout << "\n\nNgay thu nhat lon hon ngay thu hai";
		break;
	}

	cout << "\n\n\nKet thuc !!!";
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

int SoSanh(NGAY x, NGAY y)
{
	if (x.Nam > y.Nam)
		return 1;
	if (x.Nam < y.Nam)
		return -1;
	if (x.Thang > y.Thang)
		return 1;
	if (x.Thang < y.Thang)
		return -1;
	if (x.Ngay > y.Ngay)
		return 1;
	if (x.Ngay < y.Ngay)
		return -1;
	return 0;
}