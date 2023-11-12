#include<iostream>
#include<iomanip>
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
PHANSO operator*(PHANSO, PHANSO);

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

	cout << "\nTich hai phan so:";
	Xuat(a * b);

	cout << "\n\n\nKet thuc";
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap tu : ";
	cin >> x.Tu;
	cout << "Nhap mau : ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << x.Tu << "/" << x.Mau;
}

int ucln(int a, int b)
{
	int m = abs(a);
	int n = abs(b);
	while (m * n != 0)
		if (m > n)
			m -= n;
		else
			n -= m;
	return m + n;
}

void RutGon(PHANSO& x)
{
	int kq = ucln(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
}

PHANSO operator*(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Tu;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}