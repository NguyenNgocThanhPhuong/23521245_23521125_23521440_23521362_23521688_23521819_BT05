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
void GiamBac(DATHUC&);
DATHUC operator+(DATHUC, DATHUC);

int main()
{
	DATHUC ff;
	cout << "Nhap da thuc ff: " << endl;
	Nhap(ff);

	cout << "\nDa thuc ff vua nhap: ";
	Xuat(ff);

	DATHUC gg;
	cout << "\nNhap da thuc gg: " << endl;
	Nhap(gg);

	cout << "\nDa thuc gg vua nhap: ";
	Xuat(gg);

	DATHUC hh;
	hh = ff + gg;
	cout << "\nDa thuc sau khi cong:\n";
	Xuat(hh);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "Nhap so mu: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	cout << "So mu: " << f.n;
	for (int i = f.n; i >= 1; i--)
	{
		cout << setw(10) << "(" << f.a[i] << ")";
		cout << "x^" << i << " + ";
	}
	cout << setw(10) << "(" << f.a[0] << ")";
}

int LonNhat(int a, int b)
{
	if (a > b)
		return a;
	return b;
}

void GiamBac(DATHUC& f)
{
	while (f.a[f.n] == 0)
		f.n--;
}

DATHUC operator+(DATHUC f, DATHUC g)
{
	DATHUC temp;
	temp.n = LonNhat(f.n, g.n);
	for (int i = temp.n; i >= 0; i--)
		temp.a[i] = 0;
	for (int i = f.n; i >= 0; i--)
		temp.a[i] += f.a[i];
	for (int i = g.n; i >= 0; i--)
		temp.a[i] += g.a[i];
	GiamBac(temp);
	return temp;
}