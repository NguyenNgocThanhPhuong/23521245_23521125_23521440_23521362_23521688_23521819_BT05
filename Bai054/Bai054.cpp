#include <iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);

bool ktDuong(PHANSO);

int main()
{
	PHANSO a;
	cout << "Nhap phan so a: " << endl;
	Nhap(a);

	cout << "Phan so a: ";
	Xuat(a);

	if (ktDuong(a))
		cout << "\nPhan so duong";
	else
		cout << "\nPhan so am";

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "\nNhap mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << x.Tu << " / " << x.Mau;
}

bool ktDuong(PHANSO x)
{
	if (x.Tu * x.Mau > 0)
		return true;
	return false;
}