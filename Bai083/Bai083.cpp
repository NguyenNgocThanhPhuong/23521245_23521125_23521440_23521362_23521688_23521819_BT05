#include<iostream>
#include<iomanip>
using namespace std;

struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct ThoiGian THOIGIAN;

void Nhap(THOIGIAN&);

int main()
{
	THOIGIAN a;
	cout << "Nhap thoi gian:\n";
	Nhap(a);

	cout << "\n\n\nKet thuc";
	return 0;
}

void Nhap(THOIGIAN& x)
{
	cout << "Nhap gio: ";
	cin >> x.Giay;
	cout << "Nhap phut: ";
	cin >> x.Phut;
	cout << "Nhap giay : ";
	cin >> x.Giay;
}