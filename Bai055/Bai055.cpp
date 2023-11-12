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

bool ktAm(PHANSO);

int main()
{
	PHANSO a;
	cout << "Nhap phan so a: " << endl;
	Nhap(a);

	cout << "Phan so a: ";
	Xuat(a);

	if (ktAm(a))
		cout << "\nPhan so am ";
	else
		cout << "\nPhan so khong am";

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
	cout << x.Tu << " / " << x.Mau;
}

bool ktAm(PHANSO x)
{
	if (x.Tu * x.Mau < 0)
		return true;
	return false;
}