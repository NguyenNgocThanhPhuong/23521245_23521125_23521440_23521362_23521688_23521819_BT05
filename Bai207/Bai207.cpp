#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

void Nhap(DUONGTHANG[], int&);
void Xuat(DUONGTHANG[], int);

int main()
{
	DUONGTHANG b[100];
	int k;
	cout << "\nNhap cac duong thang: " << endl;
	Nhap(b, k);

	cout << "\nCac duong thang vua nhap: \n";
	Xuat(b, k);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << "(" << d.a << ")" << "x + " << "(" << d.b << ")" << "y + " << "(" << d.c << ")" << " = 0";
}

void Nhap(DUONGTHANG a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap duong thang a[" << i << "] \n";
		Nhap(a[i]);
	}
}

void Xuat(DUONGTHANG a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Duong thang a[" << i << "] ";
		Xuat(a[i]);
		cout << endl;
	}
}