#define _USE_MATH_DEFINES 
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

struct DuongTron
{
	Diem I;
	float R;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);

float ChuVi(DUONGTRON);

int main()
{
	DUONGTRON c;
	cout << "Nhap duong tron: \n";
	Nhap(c);

	cout << "\nDuong tron vua nhap: " << endl;
	Xuat(c);

	cout << "\n\nChu vi = " << ChuVi(c);

	cout << "\n\n\nKet thuc !!!";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << " (" << P.x << ", " << P.y << ")";
}

void Nhap(DUONGTRON& s)
{
	cout << "Nhap tam: \n";
	Nhap(s.I);
	cout << "Nhap ban kinh: ";
	cin >> s.R;
}

void Xuat(DUONGTRON s)
{
	cout << "Tam: ";
	cout << fixed << setprecision(3);
	Xuat(s.I);
	cout << "\nBan kinh: " << s.R;
}

float ChuVi(DUONGTRON s)
{
	return float(2 * M_PI * s.R);
}