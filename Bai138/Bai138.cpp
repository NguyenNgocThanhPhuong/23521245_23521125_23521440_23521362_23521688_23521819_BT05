#include<iostream>
#include<iomanip>
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
bool ktTamGiac(TAMGIAC);

int main()
{
	TAMGIAC M;
	cout << "\nNhap tam giac: ";
	Nhap(M);

	cout << "\nTam giac vua nhap: ";
	Xuat(M);

	if (ktTamGiac(M))
		cout << "\nLa 3 dinh cua tam giac";
	else
		cout << "\nKhong la 3 dinh cua tam giac";
	cout << "\n\n\nKet thuc";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x:";
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

bool ktTamGiac(TAMGIAC x)
{
	float a = KhoangCach(x.A, x.B);
	float b = KhoangCach(x.B, x.C);
	float c = KhoangCach(x.A, x.C);
	if (a + b > c && a + c > b && b + c > a)
		return true;
	return false;
}