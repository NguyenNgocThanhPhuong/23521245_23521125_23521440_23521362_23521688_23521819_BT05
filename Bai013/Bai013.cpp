#include <iostream>
#include <iomanip>
using namespace std;

struct DaThuc
{
	float a[100];
	int n;
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);

int main()
{
	DATHUC ff;
	Nhap(ff);

	cout << "\nDa thuc vua nhap: ";
	Xuat(ff);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "Nhap n: ";
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
		cout << setw(10) << "(" << f.a[i] << ")";
		cout << "x^" << i << " + ";
	}
	cout << setw(10) << "(" << f.a[0] << ")";
}
