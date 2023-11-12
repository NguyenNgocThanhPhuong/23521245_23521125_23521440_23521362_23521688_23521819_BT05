#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

bool ktTrung(DUONGTHANG, DUONGTHANG);

int main()
{
	DUONGTHANG d1;
	cout << "Nhap duong thang:\n";
	Nhap(d1);

	cout << "Duong thang: ";
	Xuat(d1);

	DUONGTHANG d2;
	cout << "Nhap duong thang:\n";
	Nhap(d2);

	cout << "Duong thang: ";
	Xuat(d2);

	if (ktTrung(d1,d2))
		cout << "\nHai duong thang trung nhau: ";
	else
		cout << "\nHai duong thang khong trung nhau: ";

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c << endl;
}

bool ktTrung(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx == 0)
		return true;
	return false;
}
