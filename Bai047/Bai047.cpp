#include <iostream>
#include <iomanip>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);

int ucln(int, int);
void RutGon(PHANSO&);

int main()
{
	PHANSO a;
	cout << "Nhap phan so: \n";
	Nhap(a);

	cout << "Phan so: ";
	Xuat(a);

	RutGon(a);
	cout << "\nPhan so sau rut gon: ";
	Xuat(a);

	cout << "\n\nKet thuc!!!";
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << x.Tu << " / " << x.Mau;
}

int ucln(int x, int y)
{
	x = abs(x);
	y = abs(y);
	while (x * y != 0)
		if (x > y)
			x = x - y;
		else
			y = y - x;
	return x + y;
}

void RutGon(PHANSO& x)
{
	int kq = ucln(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
}