#include <iostream>
#include <iomanip>
using namespace std;

struct DonThuc
{
	int a;
	int n;
};
typedef struct DonThuc DONTHUC;

void Nhap(DONTHUC&);
void Xuat(DONTHUC);

int main()
{
	DONTHUC g;
	cout << "Nhap don thuc: \n";
	Nhap(g);

	cout << "\nDon thuc: ";
	Xuat(g);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DONTHUC& f)
{
	cout << "Nhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}

void Xuat(DONTHUC f)
{
	cout << "\nHe so: " << f.a;
	cout << "\nSo mu: " << f.n;
}