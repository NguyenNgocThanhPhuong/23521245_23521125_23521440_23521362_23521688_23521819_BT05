#include <iostream>
#include <iomanip>
using namespace std;

struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct ThoiGian THOIGIAN;

void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);

int SOSANH(THOIGIAN, THOIGIAN);

int main()
{
	THOIGIAN a;
	cout << "Nhap thoi gian thu nhat:\n";
	Nhap(a);

	cout << "\nThoi gian thu nhat: ";
	Xuat(a);

	THOIGIAN b;
	cout << "\nNhap thoi gian thu hai:\n";
	Nhap(b);

	cout << "\nThoi gian thu hai: ";
	Xuat(b);

	switch (SOSANH(a, b))
	{
	case -1: cout << "\nThoi gian thu nhat nho hon thoi gian thu hai.";
		break;
	case 0: cout << "\nThoi gian thu nhat bang thoi gian thu hai.";
		break;
	case 1: cout << "\nThoi gian thu nhat lon hon thoi gian thu hai.";
		break;
	}

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
	cout << "\nGio: " << x.Gio;
	cout << "\nPhut: " << x.Phut;
	cout << "\nGiay: " << x.Giay;
}

int SOSANH(THOIGIAN x, THOIGIAN y)
{
	if (x.Gio > y.Gio)
		return 1;
	if (x.Gio < y.Gio)
		return -1;
	if (x.Phut > y.Phut)
		return 1;
	if (x.Phut < y.Phut)
		return -1;
	if (x.Giay > y.Giay)
		return 1;
	if (x.Giay < y.Giay)
		return -1;
	return 0;
}
