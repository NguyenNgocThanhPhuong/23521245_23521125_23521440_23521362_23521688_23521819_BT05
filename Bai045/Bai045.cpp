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

int main()
{
	PHANSO a;
	cout << "Nhap phan so: \n";
	Nhap(a);

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