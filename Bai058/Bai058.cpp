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

int SoSanh(PHANSO, PHANSO);

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

	if (SoSanh(a, b) == 1)
		cout << "\nPhan so thu 1 lon hon phan so thu 2";
	else
		if (SoSanh(a, b) == 0)
			cout << "\nPhan so thu 1 bang phan so thu 2";
		else
			cout << "\nPhan so thu 1 nho hon phan so thu 2";

	cout << "\n\n\nKet thuc!!!";
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
	cout << x.Tu << "/" << x.Mau;
}

int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.Tu / x.Mau;
	float b = (float)y.Tu / y.Mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}