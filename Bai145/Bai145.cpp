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
int DangTamGiac(TAMGIAC);

int main()
{
	TAMGIAC M;
	cout << "\nNhap tam giac: ";
	Nhap(M);

	cout << "\nTam giac: ";
	Xuat(M);

	switch (DangTamGiac(M))
	{
	case 0: cout << "\nKhong la tam giac.";
		break;
	case 1: cout << "\nTam giac deu.";
		break;
	case 2: cout << "\nTam giac vuong can.";
		break;
	case 3: cout << "\nTam giac vuong.";
		break;
	case 4: cout << "\nTam giac can.";
		break;
	case 5: cout << "\nTam giac thuong.";
		break;
	}

	cout << "\n\n\nKet thuc !!!";
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

int DangTamGiac(TAMGIAC t)
{
	float a = KhoangCach(t.A, t.C);
	float b = KhoangCach(t.B, t.C);
	float c = KhoangCach(t.A, t.B);

	if (!(a + b > c && b + c > a && a + c > b))
		return 0;
	if (a == b && b == c)
		return 1;
	if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
	{
		if (a == b || b == c || a == c)
			return 2;
		return 3;
	}
	if (a == b || b == c || a == c)
		return 4;
	return 5;
}