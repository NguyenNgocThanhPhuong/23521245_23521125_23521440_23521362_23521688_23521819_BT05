#include <iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);

void Nhap(PHANSO[], int&);
void Xuat(PHANSO[], int);

int ktDuong(PHANSO x);
PHANSO DuongDau(PHANSO[], int);

int main()
{
	PHANSO b[100];
	int k;
	Nhap(b, k);

	cout << "\nCac phan so vua nhap: ";
	Xuat(b, k);

	PHANSO a = DuongDau(b, k);
	cout << "\nGia tri duong dau tien trong mang: ";
	Xuat(a);

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
	cout << "\nTu: " << x.Tu;
	cout << "\nMau: " << x.Mau;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]:\n";
		Nhap(a[i]);
	}
}
void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "]: ";
		Xuat(a[i]);
	}
}

int ktDuong(PHANSO x)
{
	if (x.Tu * x.Mau > 0)
		return 1;
	return 0;
}

PHANSO DuongDau(PHANSO a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		if (ktDuong(a[i]))
			return a[i];
	PHANSO lc = { 0,1 };
	return lc;
}

