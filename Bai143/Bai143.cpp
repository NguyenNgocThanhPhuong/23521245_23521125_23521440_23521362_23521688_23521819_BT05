#include <iostream>
#include  <iomanip>
using namespace std;

struct Diem
{
	int x;
	int y;
};
typedef struct Diem DIEM;

struct TamGiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef TamGiac TAMGIAC;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);

DIEM TungNhoNhat(TAMGIAC);

int main()
{
	TAMGIAC M;
	cout << "\nNhap tam giac: ";
	Nhap(M);

	cout << "\nTam giac: ";
	Xuat(M);

	DIEM B = TungNhoNhat(M);
	cout << "\n\n\Dinh co tung do nho nhat: ";
	Xuat(B);

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

DIEM TungNhoNhat(TAMGIAC t)
{
	DIEM lc = t.A;
	if (t.B.y < lc.y)
		lc = t.B;
	if (t.C.y < lc.y)
		lc = t.C;
	return lc;
}