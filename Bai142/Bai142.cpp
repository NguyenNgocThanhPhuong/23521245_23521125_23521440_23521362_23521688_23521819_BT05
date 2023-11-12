#include <iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

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

DIEM HoanhLonNhat(TAMGIAC);

int main()
{
	TAMGIAC M;
	cout << "Nhap tam giac: \n";
	Nhap(M);

	cout << "\nTam giac vua nhap: ";
	Xuat(M);

	DIEM HoanhDo = HoanhLonNhat(M);
	cout << "\n\nDiem co hoanh do lon nhat cua tam giac: ";
	Xuat(HoanhDo);

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

DIEM HoanhLonNhat(TAMGIAC t)
{
	DIEM lc = t.A;
	if (t.B.x > lc.x)
		lc = t.B;
	if (t.C.x > lc.x)
		lc = t.C;
	return lc;
}