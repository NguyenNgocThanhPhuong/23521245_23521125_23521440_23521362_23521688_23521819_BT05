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

void QuiDongMau(PHANSO&, PHANSO&);

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

	QuiDongMau(a, b);
	cout << "\nPhan so a sau qui dong mau: ";
	Xuat(a);

	cout << "\nPhan so b sau qui dong mau: ";
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

void QuiDongMau(PHANSO& x, PHANSO& y)
{
	int mc = x.Mau * y.Mau;
	x.Tu = x.Tu * y.Mau;
	y.Tu = x.Mau * y.Tu;
	x.Mau = mc;
	y.Mau = mc;
}