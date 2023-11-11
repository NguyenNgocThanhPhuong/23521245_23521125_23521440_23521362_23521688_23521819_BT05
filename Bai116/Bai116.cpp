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

float TinhGiaTri(DONTHUC, float);

int main()
{
	DONTHUC g;
	cout << "Nhap don thuc: \n";
	Nhap(g);

	cout << "\nDon thuc: ";
	Xuat(g);

	float x;
	cout << "\n\nNhap x: ";
	cin >> x;

	cout << "Gia tri cua don thuc: " << TinhGiaTri(g, x);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DONTHUC& f)
{
	cout << "Nhap he so : ";
	cin >> f.a;
	cout << "Nhap so mu : ";
	cin >> f.n;
}

void Xuat(DONTHUC f)
{
	cout << "\nHe so: " << f.a;
	cout << "\nSo mu: " << f.n;
}

float TinhGiaTri(DONTHUC f, float xx)
{
	float t = 1;
	for (int i = 1; i <= f.n; i++)
		t = t * xx;
	t = t * f.a;
	return t;
}