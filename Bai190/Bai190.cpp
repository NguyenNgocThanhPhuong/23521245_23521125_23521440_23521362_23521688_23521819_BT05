#include <iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);

void Nhap(PHANSO[], int&);
void Xuat(PHANSO[], int);

bool SoSanh(PHANSO, PHANSO);
void HoanVi(PHANSO&, PHANSO&);
void SapTang(PHANSO[], int);


int main()
{
	PHANSO b[100];
	int k;
	cout << "Nhap cac phan so: \n";
	Nhap(b, k);

	cout << "\nCac phan so vua nhap: ";
	Xuat(b, k);

	SapTang(b, k);
	cout << "\nMang sau khi sap xep tang dan:\n";
	Xuat(b, k);

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
	cout << x.Tu << "/" << x.Mau;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "] \n";
		Nhap(a[i]);
	}
}

void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "]= ";
		Xuat(a[i]);
	}
}

bool SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.Tu / x.Mau;
	float b = (float)y.Tu / y.Mau;
	if (a > b)
		return true;
	return false;
}

void HoanVi(PHANSO& x, PHANSO& y)
{
	PHANSO temp = x;
	x = y;
	y = temp;
}

void SapTang(PHANSO a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j < n; j++)
			if (SoSanh(a[i], a[j]))
				HoanVi(a[i], a[j]);
}