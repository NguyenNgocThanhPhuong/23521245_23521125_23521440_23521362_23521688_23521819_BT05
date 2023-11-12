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

struct TamGiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct TamGiac TAMGIAC;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);

float KhoangCach(DIEM, DIEM);
float DienTich(TAMGIAC);

int main()
{
	TAMGIAC M;
	cout << "Nhap tam giac: ";
	Nhap(M);

	cout << "\nTam giac vua nhap: ";
	Xuat(M);

	cout << "\nDien tich tam giac ABC: " << DienTich(M);

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
	cout << "(" << P.x << "," << P.y << ")";
}

void Nhap(TAMGIAC& t)
{
	cout << "Nhap dinh A: \n";
	Nhap(t.A);
	cout << "Nhap dinh B: \n";
	Nhap(t.B);
	cout << "Nhap dinh C: \n";
	Nhap(t.C);
}

void Xuat(TAMGIAC t)
{
	cout << "\nToa do dinh A: ";
	Xuat(t.A);
	cout << "\nToa do dinh B: ";
	Xuat(t.B);
	cout << "\nToa do dinh C: ";
	Xuat(t.C);
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}

float DienTich(TAMGIAC t)
{
	float a = KhoangCach(t.B, t.C);
	float b = KhoangCach(t.A, t.C);
	float c = KhoangCach(t.A, t.B);
	float p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}