#include <iostream>
#include <iomanip>
using namespace std;

struct PhanSo
{
	float Tu;
	float Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);

void QuiDongTu(PHANSO&, PHANSO&);

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

	QuiDongTu(a, b);
	cout << "\nPhan so a sau qui dong tu: ";
	Xuat(a);

	cout << "\nPhan so b sau qui dong tu: ";
	Xuat(b);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(PHANSO& P)
{
	cout << "\nNhap tu: ";
	cin >> P.Tu;
	cout << "Nhap mau: ";
	cin >> P.Mau;
}

void Xuat(PHANSO P)
{
	cout << P.Tu << "/" << P.Mau;
}

void QuiDongTu(PHANSO& x, PHANSO& y)
{
	int tc = x.Tu * y.Tu;
	x.Mau = x.Mau * y.Tu;
	y.Mau = y.Mau * x.Tu;
	x.Tu = tc;
	y.Tu = tc;
}