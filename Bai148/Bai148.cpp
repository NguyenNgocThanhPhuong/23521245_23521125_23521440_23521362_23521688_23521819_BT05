#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

int main()
{
	DUONGTHANG d;
	cout << "\nNhap duong thang: ";
	Nhap(d);

	cout << "\nDuong thang: ";
	Xuat(d);

	cout << "\n\n\nKet Thuc !!!";
	return 0;
}

void Nhap(DUONGTHANG& d)
{
	cout << "\nNhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << "\n a: " << d.a;
	cout << "\n b: " << d.b;
	cout << "\n c: " << d.c;
}