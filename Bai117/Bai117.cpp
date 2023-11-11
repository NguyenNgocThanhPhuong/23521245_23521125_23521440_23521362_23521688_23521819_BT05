#include <iostream>
#include <iomanip>
using namespace std;

struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;

void Nhap(DONTHUC&);
void Xuat(DONTHUC);

DONTHUC operator*(DONTHUC, DONTHUC);

int main()
{
	DONTHUC g;
	cout << "Nhap don thuc g: \n";
	Nhap(g);

	cout << "\nDon thuc g: ";
	Xuat(g);

	DONTHUC f;
	cout << "\n\nNhap don thuc f:\n";
	Nhap(f);

	cout << "\nDon thuc f: ";
	Xuat(f);

	DONTHUC c = g * f;
	cout << "\n\nTich la: ";
	Xuat(c);

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

DONTHUC operator*(DONTHUC f, DONTHUC g)
{
	DONTHUC temp;
	temp.a = f.a * g.a;
	temp.n = f.n + g.n;
	return temp;
}
