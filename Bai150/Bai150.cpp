#include <iostream>
#include <iomanip>
#include <cmath>
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

void Nhap(DIEM&);
void Xuat(DIEM);

float KhoangCach(DUONGTHANG, DIEM);

int main()
{
	DIEM A;
	cout << "\n\nNhap diem: ";
	Nhap(A);

	cout << "Diem vua nhap: ";
	Xuat(A);

	DUONGTHANG d;
	cout << "Nhap duong thang:\n";
	Nhap(d);

	cout << "Duong thang:";
	Xuat(d);

	cout << "Khoang cach: ";
	cout << fixed << setw(10) << setprecision(3) << KhoangCach(d, A);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "\nx: " << P.x << endl;
	cout << "y: " << P.y << endl;
}

void Nhap(DUONGTHANG& d)
{
	cout << "Nhap he so a: ";
	cin >> d.a;
	cout << "Nhap he so b: ";
	cin >> d.b;
	cout << "Nhap he so c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c;
}

float KhoangCach(DUONGTHANG d, DIEM P)
{
	float tu = abs(d.a * P.x + d.b * P.y + d.c);
	float mau = sqrt(d.a * d.a + d.b * d.b);
	return tu / mau;
}