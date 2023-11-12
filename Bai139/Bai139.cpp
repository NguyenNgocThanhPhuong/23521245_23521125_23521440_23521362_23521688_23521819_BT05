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
float ChuVi(TAMGIAC);

int main()
{
	TAMGIAC M;
	cout << "Nhap tam giac: ";
	Nhap(M);

	cout << "\nTam giac vua nhap: ";
	Xuat(M);

	cout << "Chu vi = " << ChuVi(M);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x:";
	cin >> P.x;
	cout << "Nhap y:";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "(" << P.x << ", " << P.y << ")" << endl;
}

void Nhap(TAMGIAC& x)
{
	cout << "Nhap diem A :\n";
	Nhap(x.A);
	cout << "Nhap diem B :\n";
	Nhap(x.B);
	cout << "Nhap diem C :\n";
	Nhap(x.C);
}

void Xuat(TAMGIAC x)
{
	cout << "Diem A:";
	Xuat(x.A);
	cout << "\nDiem B:";
	Xuat(x.B);
	cout << "\nDiem C:";
	Xuat(x.C);
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}

float ChuVi(TAMGIAC t)
{
	float a = KhoangCach(t.B, t.C);
	float b = KhoangCach(t.A, t.C);
	float c = KhoangCach(t.A, t.B);
	return a + b + c;
}