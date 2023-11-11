#include <iostream>
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

void QuiDongTu(HONSO&, HONSO&);

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

	QuiDongTu(a, b);
	cout << "\nHai hon so a va b sau khi quy dong tu:";

	cout << "\nHon so a: ";
	Xuat(a);

	cout << "\nHon so b: ";
	Xuat(b);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(HONSO& x)
{
	cout << "\nNhap phan nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(HONSO x)
{
	cout << "\nPhan nguyen: " << x.Nguyen << endl;
	cout << "Tu: " << x.Tu << endl;
	cout << "Mau: " << x.Mau << endl;
}

void QuiDongTu(HONSO& x, HONSO& y)
{
	int tc = x.Tu * y.Tu;
	x.Mau = x.Mau * y.Tu;
	y.Mau = y.Mau * x.Tu;
	x.Tu = tc;
	y.Tu = tc;
}