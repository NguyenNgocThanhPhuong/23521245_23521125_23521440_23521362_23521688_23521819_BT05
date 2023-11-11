#include <iostream>
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

int SoThuTu(THOIGIAN);

int main()
{
	THOIGIAN a;
	cout << "Nhap thoi gian:\n";
	Nhap(a);

	cout << "\nThoi gian vua nhap: ";
	Xuat(a);

	cout << "\nThu tu ke tu luc 00:00:00 la: " << SoThuTu(a);

	cout << "\n\n\nKet thuc !!!";
	return 0;
}

void Nhap(THOIGIAN& x)
{
	cout << "Nhap gio: ";
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

int SoThuTu(THOIGIAN x)
{
	return x.Gio * 3600 + x.Phut * 60 + x.Giay;
}
