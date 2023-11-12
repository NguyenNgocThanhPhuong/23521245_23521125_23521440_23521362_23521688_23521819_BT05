#include <iostream>
#include<iomanip>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);

void Nhap(PHANSO[][100], int&, int&);
void Xuat(PHANSO[][100], int, int);

int SoSanh(PHANSO, PHANSO);
void HoanVi(PHANSO&, PHANSO&);
void SapTang(PHANSO[][100], int, int);

int main()
{
	PHANSO b[100][100];
	int k, l;
	cout << "Nhap ma tran cac phan so:\n";
	Nhap(b, k, l);

	cout << "\nMa tran cac phan so: \n";
	Xuat(b, k, l);

	SapTang(b, k, l);
	cout << "\nMa tran cac phan so duoc sap tang";
	Xuat(b, k, l);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << setw(10) << x.Tu << "/" << x.Mau;
}

void Nhap(PHANSO a[][100], int& m, int& n)
{
	cout << "Nhap m : ";
	cin >> m;
	cout << "Nhap n : ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "\nNhap a[" << i << "][" << j << "]:\n";
			Nhap(a[i][j]);
		}
}

void Xuat(PHANSO a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			Xuat(a[i][j]);
		cout << endl;
	}
}

int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.Tu / x.Mau;
	float b = (float)y.Tu / y.Mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}

void HoanVi(PHANSO& x, PHANSO& y)
{
	PHANSO temp = x;
	x = y;
	y = temp;
}

void SapTang(PHANSO a[][100], int m, int n)
{
	PHANSO b[100];
	int k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			b[k++] = a[i][j];

	for (int i = 0; i < k; i++)
		if (SoSanh(b[i], b[i + 1]) == 1)
			HoanVi(b[i], b[i + 1]);

	k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = b[k++];
}