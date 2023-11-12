#include <iostream>
using namespace std;

struct SoPhuc
{
	int Thuc;
	int Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);

SOPHUC Tong(SOPHUC, SOPHUC);

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

	SOPHUC s = Tong(a, b);
	cout << "\n\n\nTong hai so phuc:";
	Xuat(s);

	cout << "\n\nKet thuc!!!";
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

SOPHUC Tong(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc + y.Thuc;
	temp.Ao = x.Ao + y.Ao;
	return temp;
}