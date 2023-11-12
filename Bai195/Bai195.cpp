#include<iostream>
#include<iomanip>
#include<cmath>
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

void HoanVi(SOPHUC&, SOPHUC&);
void SapTang(SOPHUC[], int);

int main()
{
	SOPHUC b[100];
	int k;
	cout << "\Nhap cac so phuc:";
	Nhap(b, k);

	cout << "\nCac so phuc vua nhap:";
	Xuat(b, k);

	SapTang(b, k);
	cout << "\nMang so phuc tang dan theo phan thuc: ";
	Xuat(b, k);

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

void HoanVi(SOPHUC& x, SOPHUC& y)
{
	SOPHUC temp = x;
	x = y;
	y = temp;
}

void SapTang(SOPHUC a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (a[i].Thuc > a[j].Thuc)
				HoanVi(a[i], a[j]);
}

