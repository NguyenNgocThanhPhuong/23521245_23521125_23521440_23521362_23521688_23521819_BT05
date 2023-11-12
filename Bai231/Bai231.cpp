?#include <iostream>
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
bool ktAm(PHANSO);
PHANSO AmLonNhat(PHANSO[][100], int, int);

int main()
{
	PHANSO b[100][100];
	int k, l;
	cout << "Nhap ma tran cac phan so:\n";
	Nhap(b, k, l);

	cout << "\nMa tran cac phan so: \n";
	Xuat(b, k, l);

	PHANSO kq = AmLonNhat(b, k, l);
	cout << "\nPhan so am nho nhat trong ma tran:";
	Xuat(kq);

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

PHANSO AmLonNhat(PHANSO a[][100], int m, int n)
{
	PHANSO temp = { 0,1 };
	PHANSO lc = temp;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktAm(a[i][j]))
				if (SoSanh(lc, temp) == 0 || SoSanh(a[i][j], lc) == 1)
					lc = a[i][j];
	return lc;
}

bool ktAm(PHANSO x)
{
	return(x.Tu * x.Mau < 0);
}