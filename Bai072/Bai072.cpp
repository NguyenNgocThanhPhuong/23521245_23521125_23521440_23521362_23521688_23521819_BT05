#include<iostream>
#include<iomanip>
using namespace std;

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO&);

int main()
{
	HONSO a;
	cout << "Nhap hon so:\n";
	Nhap(a);

	cout << "\n\n\nKet thuc";
	return 0;
}

void Nhap(HONSO& x)
{
	cout << "Nhap phan nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap tu : ";
	cin >> x.Tu;
	cout << "Nhap mau : ";
	cin >> x.Mau;
}