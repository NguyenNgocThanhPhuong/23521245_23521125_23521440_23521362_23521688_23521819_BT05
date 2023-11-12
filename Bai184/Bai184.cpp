#include<iostream>
#include<iomanip>
#include<cmath>
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

bool ktDuong(PHANSO);
int DemDuong(PHANSO[], int);

int main()
{
	PHANSO b[100];
	int k;
	cout << "Nhap cac phan so: \n";
	Nhap(b, k);

	cout << "\nCac phan so vua nhap: ";
	Xuat(b, k);

	cout << "\nSo luong phan so duong trong mang: ";
	cout << DemDuong(b, k);

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

bool ktDuong(PHANSO x)
{
	if (x.Tu * x.Mau > 0)
		return true;
	return false;
}

int DemDuong(PHANSO a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (ktDuong(a[i]))
			dem++;
	return dem;
}