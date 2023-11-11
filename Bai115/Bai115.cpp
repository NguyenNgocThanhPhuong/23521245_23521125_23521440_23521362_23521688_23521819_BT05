#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;

void Nhap(DONTHUC&);
void Xuat(DONTHUC);

DONTHUC DaoHam(DONTHUC);
DONTHUC DaoHam(DONTHUC, int);

int main()
{
	DONTHUC g;
	cout << "Nhap don thuc: \n";
	Nhap(g);

	cout << "\nDon thuc: ";
	Xuat(g);

	int n;
	cout << "\n\nTinh dao ham cap: ";
	cin >> n;

	DONTHUC kq = DaoHam(g, n);
	cout << "Dao ham cap " << n << ":";
	Xuat(kq);

	cout << "\n\n\nKet Thuc!!!";
	return 0;
}

void Nhap(DONTHUC& f)
{
	cout << "Nhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}

void Xuat(DONTHUC f)
{
	cout << "\nHe so: " << f.a;
	cout << "\nSo mu: " << f.n;
}

DONTHUC DaoHam(DONTHUC f)
{
	if (f.n == 0)
	{
		DONTHUC temp = { 0,0 };
		return temp;
	}
	DONTHUC temp;
	temp.a = f.a * f.n;
	temp.n = f.n - 1;
	return temp;
}

DONTHUC DaoHam(DONTHUC f, int k)
{
	DONTHUC temp = f;
	for (int i = 1; i <= k; i++)
		temp = DaoHam(temp);
	return temp;
}