#include <iostream>
#include <iomanip>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);

SOPHUC Hieu(SOPHUC, SOPHUC);

int main()
{
	SOPHUC a;
	cout << "Nhap so phuc a: " << endl;
	Nhap(a);

	cout << "\nSo phuc a: " << endl;
	Xuat(a);

	SOPHUC b;
	cout << "\n\n\nNhap so phuc b:\n";
	Nhap(b);

	cout << "\nSo phuc b:";
	Xuat(b);

	SOPHUC c = Hieu(a, b);
	cout << "\nHieu hai so phuc: ";
	Xuat(c);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(SOPHUC& P)
{
	cout << "\nNhap phan thuc: ";
	cin >> P.Thuc;
	cout << "Nhap phan ao: ";
	cin >> P.Ao;
}

void Xuat(SOPHUC x)
{
	cout << "\nPhan thuc: " << x.Thuc;
	cout << "\nPhan ao: " << x.Ao;
}

SOPHUC Hieu(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc - y.Thuc;
	temp.Ao = x.Ao - y.Ao;
	return temp;
}