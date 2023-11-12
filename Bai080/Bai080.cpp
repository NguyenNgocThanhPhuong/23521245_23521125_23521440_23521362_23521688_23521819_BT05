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
void QuiDongMau(HONSO& x, HONSO& y);

int main()
{
	HONSO a;
	cout << "Nhap hon so a:\n";
	Nhap(a);

	cout << "\nHon so a: ";
	Xuat(a);

	HONSO b;
	cout << "Nhap hon so b:\n";
	Nhap(b);

	cout << "\nHon so b: ";
	Xuat(b);

	QuiDongMau(a, b);
	cout << "\nHon so sau khi qui dong:";

	cout << "\nHon so a: ";
	Xuat(a);

	cout << "\nHon so b: ";
	Xuat(b);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(HONSO& x)
{
	cout << "Nhap phan nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(HONSO x)
{
	cout << "\nPhan nguyen: " << x.Nguyen;
	cout << "\nTu: " << x.Tu;
	cout << "\nMau: " << x.Mau;
}

void QuiDongMau(HONSO& x, HONSO& y)
{
	int mc = x.Mau * y.Mau;
	x.Tu = x.Tu * y.Mau;
	y.Tu = x.Mau * y.Tu;
	x.Mau = mc;
	y.Mau = mc;
}