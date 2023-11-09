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

bool ktCat(DUONGTHANG, DUONGTHANG);

int main()
{
	DUONGTHANG d1;
	cout << "Nhap duong thang:\n";
	Nhap(d1);

	cout << "Duong thang:";
	Xuat(d1);

	DUONGTHANG d2;
	cout << "Nhap duong thang:\n";
	Nhap(d2);

	cout << "Duong thang:";
	Xuat(d2);
	
	if (ktCat(d1, d2))
		cout << "\n\nHai duong thang cat nhau";
	else
		cout << "\n\nHai duong thang khong cat nhau";
	cout << "\n\n\nKet thuc !!!";
	return 0;
}

void Nhap(DUONGTHANG& d)
{
	cout << "\nNhap a: ";
	cin >> d.a;
	cout << "\nNhap b: ";
	cin >> d.b;
	cout << "\nNhap c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c;
}

bool ktCat(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	if (D != 0)
		return true;
	return false;
}