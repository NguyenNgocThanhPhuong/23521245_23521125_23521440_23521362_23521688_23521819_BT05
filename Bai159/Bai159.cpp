//Dinh Nghia Ham DIEUCHINHBAC ?


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct DaThuc
{
	int n;
	float a[100];
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);

int main()
{
	DATHUC a;
	cout << "\nNhap da thuc: ";
	Nhap(a);

	cout << "\nDa thuc vua nhap: ";
	Xuat(a);

	cout << "\n\n\nKet Thuc !!!";
	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "\nNhap n: ";
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
	cout << setw(10) << "(" << f.a[0] << ") ";
}