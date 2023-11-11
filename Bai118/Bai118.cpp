#include<iostream>
using namespace std;

struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;

void Nhap(DONTHUC&);
void Xuat(DONTHUC);

DONTHUC operator/(DONTHUC, DONTHUC);

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

	cout << "\nThuong hai don thuc: ";
	Xuat(g / f);

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
	cout << endl;
}

DONTHUC operator/(DONTHUC f, DONTHUC g)
{
	DONTHUC temp;
	temp.a = f.a / g.a;
	temp.n = f.n - g.n;
	return temp;
}