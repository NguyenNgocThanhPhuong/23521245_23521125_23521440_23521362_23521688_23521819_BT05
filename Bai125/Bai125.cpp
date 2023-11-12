#include <iostream>
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
	DIEM I;
	float R;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);

float KhoangCach(DIEM, DIEM);
int TuongDoi(DUONGTRON, DIEM);

int main()
{
	DIEM A;
	cout << "Nhap diem A:\n";
	Nhap(A);

	cout << "\nDiem A: ";
	Xuat(A);

	DUONGTRON c;
	cout << "\n\nNhap duong tron: ";
	Nhap(c);

	cout << "\nDuong tron vua nhap: ";
	Xuat(c);

	switch (TuongDoi(c, A))
	{
	case 0: cout << "\nDiem A nam trong duong tron";
		break;
	case 1: cout << "\nDiem A nam tren duong tron";
		break;
	case 2: cout << "\nDiem A nam ngoai duong tron";
		break;
	}

	cout << "\n\n\nKet thuc!!!";
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
	cout << " (" << P.x << "," << P.y << ")";
}

void Nhap(DUONGTRON& s)
{
	cout << "\nNhap tam I:\n";
	Nhap(s.I);
	cout << "Nhap ban kinh R: ";
	cin >> s.R;
}

void Xuat(DUONGTRON s)
{
	cout << "\nTam I:";
	Xuat(s.I);
	cout << "\nBan kinh: " << s.R;
}

float KhoangCach(DIEM I, DIEM P)
{
	float a = pow(P.x - I.x, 2);
	float b = pow(P.y - I.y, 2);
	float d = sqrt(a + b);
	return d;
}

int TuongDoi(DUONGTRON s, DIEM P)
{
	float kc = KhoangCach(s.I, P);
	if (kc > s.R)
		return 2;
	if (kc < s.R)
		return 0;
	return 1;
}