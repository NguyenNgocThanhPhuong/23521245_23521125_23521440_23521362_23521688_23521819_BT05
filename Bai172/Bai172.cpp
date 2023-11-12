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

int LonNhat(int, int);
void GiamBac(DATHUC&);
DATHUC operator+(DATHUC, DATHUC);
DATHUC operator-(DATHUC, DATHUC);

DATHUC operator*(DATHUC, DATHUC);
DATHUC operator/(DATHUC, DATHUC);
DATHUC operator%(DATHUC, DATHUC);

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

	DATHUC hh = ff % gg;
	cout << "\nThuongLayDu hai da thuc: ";
	Xuat(hh);

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

int LonNhat(int a, int b)
{
	int lc = a;
	if (b > lc)
		lc = b;
	return lc;
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

DATHUC operator-(DATHUC f, DATHUC g)
{
	for (int i = 0; i <= g.n; i++)
		g.a[i] = -g.a[i];
	return (f + g);
}

DATHUC operator*(DATHUC f, DATHUC g)
{
	DATHUC temp;
	temp.n = f.n + g.n;
	for (int i = temp.n; i >= 0; i--)
		temp.a[i] = 0;
	for (int i = f.n; i >= 0; i--)
		for (int j = g.n; j >= 0; j--)
			temp.a[i + j] += f.a[i] * g.a[j];
	return temp;
}

DATHUC operator/(DATHUC f, DATHUC g)
{
	DATHUC bichia = f;
	DATHUC chia = g;

	DATHUC temp;
	temp.n = f.n - g.n;
	for (int i = temp.n; i >= 0; i--)
		temp.a[i] = 0;

	while (bichia.n >= chia.n)
	{
		DATHUC tg;
		tg.n = bichia.n - chia.n;
		for (int i = tg.n; i >= 0; i--)
			tg.a[i] = 0;

		tg.a[tg.n] = bichia.a[bichia.n] / chia.a[chia.n];

		DATHUC tru = tg * chia;
		bichia = bichia - tru;
		temp = temp + tg;
	}
	return temp;
}

DATHUC operator%(DATHUC f, DATHUC g)
{
	DATHUC thuong = f / g;
	DATHUC du = f - g * thuong;
	return du;
}