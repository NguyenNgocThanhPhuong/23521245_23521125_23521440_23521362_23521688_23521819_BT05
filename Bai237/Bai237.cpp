#include <iostream>
#include<iomanip>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);

void Nhap(SOPHUC[][100], int&, int&);
void Xuat(SOPHUC[][100], int, int);

SOPHUC ThucAoAmCuoi(SOPHUC[][100], int, int);

int main()
{
	SOPHUC b[100][100];
	int k, l;
	cout << "Nhap cac so phuc: ";
	Nhap(b, k, l);

	cout << "\nCac so phuc vua nhap:\n";
	Xuat(b, k, l);

	SOPHUC kq = ThucAoAmCuoi(b, k, l);
	cout << "\nSo phuc thoa dieu kien: ";
	Xuat(kq);

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
	cout << x.Thuc << "+ (" << x.Ao << ")i";
}

void Nhap(SOPHUC a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "\nNhap a[" << i << "][" << j << "]:\n";
			Nhap(a[i][j]);
		}
}

void Xuat(SOPHUC a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "A[" << i << "][" << j << "]: ";
			Xuat(a[i][j]);
			cout << endl;
		}
}

SOPHUC ThucAoAmCuoi(SOPHUC a[][100], int m, int n)
{
	for (int i = m - 1; i >= 0; i--)
		for (int j = n - 1; j >= 0; j--)
			if (a[i][j].Thuc < 0 && a[i][j].Ao < 0)
				return a[i][j];
	return{ 0,0 };
}