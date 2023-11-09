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

struct DuongTron
{
	DIEM I;
	float R;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

float KhoangCach(DIEM, DUONGTHANG);
int TuongDoi(DUONGTRON, DUONGTHANG);

int main()
{
	DUONGTRON c;
	cout << "\nNhap duong tron: ";
	Nhap(c);

	cout << "\nDuong tron: ";
	Xuat(c);

	DUONGTHANG m;
	cout << "\nNhap duong thang: ";
	Nhap(m);

	cout << "\nDuong thang: ";
	Xuat(m);

	switch (TuongDoi(c, m))
	{
	case 0: cout << "\nDuong thang khong cat duong tron. ";
		break;
	case 1: cout << "\nDuong thang tiep xuc voi duong tron. ";
		break;
	case 2: cout << "\nDuong thang cat duong tron tai hai diem. ";
		break;
	}

	cout << "\n\n\nKet Thuc !!!";
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
	cout << " (" << P.x << "," << P.y << ")";
}

void Nhap(DUONGTRON& c)
{
	cout << "\nNhap tam: ";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

void Xuat(DUONGTRON c)
{
	cout << "\n Tam: \n";
	Xuat(c.I);
	cout << "\n Ban kinh: " << c.R;
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

float KhoangCach(DIEM P, DUONGTHANG d)
{
	float tu = abs(d.a * P.x + d.b * P.y + d.c);
	float mau = sqrt(d.a * d.a + d.b * d.b);
	return tu / mau;
}

int TuongDoi(DUONGTRON c, DUONGTHANG d)
{
	float kc = KhoangCach(c.I, d);
	if (kc > c.R)
		return 0;
	if (kc == c.R)
		return 1;
	return 2;
}