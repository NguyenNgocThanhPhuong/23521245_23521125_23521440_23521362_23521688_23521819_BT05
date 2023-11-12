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

int SoSanh(PHANSO, PHANSO);
int ViTriNhoNhat(PHANSO[], int);

int main()
{
	PHANSO b[100];
	int k;
	cout << "Nhap cac phan so: \n";
	Nhap(b, k);

	cout << "\nCac phan so vua nhap: ";
	Xuat(b, k);

	cout << "\nVi tri co gia tri phan so nho nhat: " << ViTriNhoNhat(b, k);
	cout << "\n\n\nKet thuc !!!";
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

int ViTriNhoNhat(PHANSO a[], int n)
{
	int lc = 0;
	for (int i = 0; i < n; i++)
		if (SoSanh(a[i], a[lc]) == -1)
			lc = i;
	return lc;
}