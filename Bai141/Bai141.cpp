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
DIEM TrongTam(TAMGIAC);

int main()
{
	TAMGIAC M;
	cout << "Nhap tam giac: \n";
	Nhap(M);

	cout << "\nTam giac vua nhap: ";
	Xuat(M);

	DIEM G = TrongTam(M);
	cout << "\nTrong tam cua tam giac: ";
	Xuat(G);

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

DIEM TrongTam(TAMGIAC t)
{
	DIEM temp;
	temp.x = (t.A.x + t.B.x + t.C.x) / 3;
	temp.y = (t.A.y + t.B.y + t.C.y) / 3;
	return temp;
}