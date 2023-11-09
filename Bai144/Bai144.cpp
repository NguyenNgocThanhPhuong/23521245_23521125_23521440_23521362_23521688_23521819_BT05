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
float TongKhoangCach(TAMGIAC, DIEM);

int main()
{
	DIEM D;
	cout << "Nhap diem D: ";
	Nhap(D);

	cout << "\nToa do diem D: ";
	Xuat(D);

	TAMGIAC M;
	cout << "\nNhap tam giac: ";
	Nhap(M);

	cout << "\nTam giac: ";
	Xuat(M);

	cout << "\n\nTong khoang cach la: " << TongKhoangCach(M, D);
	
	cout << "\n\n\nKet thuc !!!";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "\nNhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}

void Nhap(TAMGIAC& t)
{
	cout << "\nNhap dinh A: " << endl;
	Nhap(t.A);
	cout << "\nNhap dinh B: " << endl;
	Nhap(t.B);
	cout << "\nNhap dinh C: " << endl;
	Nhap(t.C);
}

void Xuat(TAMGIAC t)
{
	cout << "\nToa do diem A: ";
	Xuat(t.A);
	cout << "\nToa do diem B: ";
	Xuat(t.B);
	cout << "\nToa do diem C: ";
	Xuat(t.C);
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y));
}

float TongKhoangCach(TAMGIAC t, DIEM P)
{
	float a = KhoangCach(t.A, P);
	float b = KhoangCach(t.B, P);
	float c = KhoangCach(t.C, P);
	return a + b + c;
}