#include <iostream>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);

void Nhap(SOPHUC[], int&);
void Xuat(SOPHUC[], int);

SOPHUC Tong(SOPHUC[], int);
SOPHUC Tong(SOPHUC, SOPHUC);

int main()
{
	SOPHUC b[100];
	int k;
	cout << "Nhap cac so phuc:";
	Nhap(b, k);

	cout << "\nCac so phuc vua nhap:";
	Xuat(b, k);

	SOPHUC c = Tong(b, k);
	cout << "\nTong cac so phuc : ";
	Xuat(c);

	cout << "'\n\n\nKet thuc!!!";
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
	cout << x.Thuc << " + " << "(" << x.Ao << ")i";
}

void Nhap(SOPHUC a[], int& n)
{
	cout << "\nNhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap so phuc a[" << i << "]:\n";
		Nhap(a[i]);
	}
}

void Xuat(SOPHUC a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nSo phuc a[" << i << "]: ";
		Xuat(a[i]);
		cout << endl;
	}
}

SOPHUC Tong(SOPHUC a, SOPHUC b)
{
	SOPHUC temp;
	temp.Thuc = a.Thuc + b.Thuc;
	temp.Ao = a.Ao + b.Ao;
	return temp;
}

SOPHUC Tong(SOPHUC a[], int n)
{
	SOPHUC s = { 0,0 };
	for (int i = 0; i < n; i++)
		s = Tong(s, a[i]);
	return s;
}