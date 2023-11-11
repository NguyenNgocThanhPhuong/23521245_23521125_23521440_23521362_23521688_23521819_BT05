#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct thoigian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct thoigian THOIGIAN;

void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);

THOIGIAN KeTiep(THOIGIAN);

int main()
{
	THOIGIAN a;
	cout << "Nhap thoi gian:\n";
	Nhap(a);

	cout << "\nThoi gian vua nhap: ";
	Xuat(a);

	THOIGIAN b = KeTiep(a);
	cout << "\nThoi gian o giay ke tiep: ";
	Xuat(b);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(THOIGIAN& x)
{
	cout << "\nNhap gio: ";
	cin >> x.Gio;
	cout << "Nhap phut: ";
	cin >> x.Phut;
	cout << "Nhap giay: ";
	cin >> x.Giay;
}

void Xuat(THOIGIAN x)
{
	cout << "\n Gio = " << x.Gio;
	cout << "\n Phut = " << x.Phut;
	cout << "\n Giay = " << x.Giay;
}

THOIGIAN KeTiep(THOIGIAN x)
{
	x.Giay = x.Giay + 1;
	if (x.Giay > 59)
	{
		x.Phut = x.Phut + 1;
		if (x.Phut > 59)
		{
			x.Gio = x.Gio + 1;
			if (x.Gio > 23)
				x.Gio = 0;
			x.Phut = 0;
		}
		x.Giay = 0;
	}
	return x;
}