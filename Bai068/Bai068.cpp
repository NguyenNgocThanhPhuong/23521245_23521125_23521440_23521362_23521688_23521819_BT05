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

SOPHUC Tich(SOPHUC, SOPHUC);

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

	SOPHUC c = Tich(a, b);
	cout << "\nTich hai so phuc: ";
	Xuat(c);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << "\nPhan thuc: " << x.Thuc;
	cout << "\nPhan ao: " << x.Ao;
}

SOPHUC Tich(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc * y.Thuc - x.Ao * y.Ao;
	temp.Ao = x.Thuc * y.Ao + x.Ao * y.Thuc;
	return temp;
}