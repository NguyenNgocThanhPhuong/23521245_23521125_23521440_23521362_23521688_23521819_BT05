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
PHANSO operator-(PHANSO, PHANSO);

int main()
{
	PHANSO a;
	cout << "Nhap phan so a: \n";
	Nhap(a);

	cout << "Phan so a: ";
	Xuat(a);

	PHANSO b;
	cout << "\n\nNhap phan so b: \n";
	Nhap(b);

	cout << "Phan so b: ";
	Xuat(b);

	cout << "\nHieu hai phan so: ";
	Xuat(a - b);

	cout << "\n\n\nKet Thuc !!!";
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << x.Tu << "/" << x.Mau;
}

int ucln(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return (a + b);
}

void RutGon(PHANSO& x)
{
	int kq = ucln(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
}

PHANSO operator-(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau - y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}