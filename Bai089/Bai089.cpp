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

int SoThuTu(THOIGIAN);
int KhoangCach(THOIGIAN, THOIGIAN);

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

	cout << "\n\nKhoang cach giua hai thoi gian: " << KhoangCach(a, b);

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

int SoThuTu(THOIGIAN x)
{
	return x.Gio * 3600 + x.Phut * 60 + x.Giay;
}

int KhoangCach(THOIGIAN x, THOIGIAN y)
{
	int a = SoThuTu(x);
	int b = SoThuTu(y);
	return abs(a - b);
}