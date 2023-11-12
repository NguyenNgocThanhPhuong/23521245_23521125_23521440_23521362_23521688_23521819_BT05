#include <iostream>
#include <iomanip>
using namespace std;

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO&);
void Xuat(HONSO);

int ucln(int, int);
void RutGon(HONSO&);
HONSO Thuong(HONSO, HONSO);

int main()
{
	HONSO a;
	cout << "Nhap hon so a:\n";
	Nhap(a);

	cout << "\nHon so a:";
	Xuat(a);

	HONSO b;
	cout << "\nNhap hon so b:\n";
	Nhap(b);

	cout << "\nHon so b:";
	Xuat(b);

	HONSO c = Thuong(a, b);
	cout << "\Thuong hai hon so: ";
	Xuat(c);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(HONSO& P)
{
	cout << "\nNhap phan nguyen: ";
	cin >> P.Nguyen;
	cout << "Nhap tu: ";
	cin >> P.Tu;
	cout << "Nhap mau: ";
	cin >> P.Mau;
}

void Xuat(HONSO P)
{
	cout << setw(6) << setprecision(3);
	cout << P.Nguyen << " " << P.Tu << "/" << P.Mau;
}

int ucln(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a + b;
}

void RutGon(HONSO& x)
{
	int kq = ucln(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
}

HONSO Thuong(HONSO x, HONSO y)
{
	x.Tu = x.Nguyen * x.Mau + x.Tu;
	x.Nguyen = 0;
	y.Tu = y.Nguyen * y.Mau + y.Tu;
	y.Nguyen = 0;

	HONSO temp;
	temp.Tu = x.Tu * y.Mau;
	temp.Mau = x.Mau * y.Tu;
	temp.Nguyen = 0;

	RutGon(temp);
	return temp;
}