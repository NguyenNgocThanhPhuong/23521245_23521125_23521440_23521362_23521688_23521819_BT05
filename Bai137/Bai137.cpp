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

int main()
{
	TAMGIAC M;
	cout << "\nNhap tam giac: ";
	Nhap(M);

	cout << "\nTam giac vua nhap: ";
	Xuat(M);

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
	cout << "(" << P.x << ", " << P.y << ")\n";
}

void Nhap(TAMGIAC& t)
{
	cout << "\nNhap dinh A: ";
	Nhap(t.A);
	cout << "Nhap dinh B: ";
	Nhap(t.B);
	cout << "Nhap dinh C: ";
	Nhap(t.C);
}

void Xuat(TAMGIAC t)
{
	cout << "\n Toa do dinh A: ";
	Xuat(t.A);
	cout << "\n Toa do dinh B: ";
	Xuat(t.B);
	cout << "\n Toa do dinh C: ";
	Xuat(t.C);
}