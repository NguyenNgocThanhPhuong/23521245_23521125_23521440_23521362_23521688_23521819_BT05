#include <iostream>
#include <iomanip>
using namespace std;

struct DaThuc
{
	int n;
	float a[100];
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);

float TinhGiaTri(DATHUC, float);

int main()
{
	DATHUC g;
	cout << "Nhap da thuc g: " << endl;
	Nhap(g);

	cout << "\nDa thuc g vua nhap: ";
	Xuat(g);

	float x0;
	cout << "\nNhap gia tri x0 can tinh: ";
	cin >> x0;

	cout << "\nGia tri cua bieu thuc tai x = " << x0 << " : ";
	cout << fixed << setw(10) << setprecision(3) << TinhGiaTri(g, x0);

	cout << "\n\n\nKet thuc !!!";
	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "Nhap bac n: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	for (int i = f.n; i >= 1; i--)
	{
		cout << setw(8) << "(" << f.a[i] << ")";
		cout << "x^" << i << " + ";
	}
	cout << setw(8) << "(" << f.a[0] << ") ";
}

float TinhGiaTri(DATHUC f, float x0)
{
	float s = f.a[0];
	float t = 1;
	for (int i = 1; i <= f.n; i++)
	{
		t = t * x0;
		s = s + f.a[i] * t;
	}
	return s;
}