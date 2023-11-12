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

DATHUC DaoHam(DATHUC);

int main()
{
	DATHUC ff;
	cout << "Nhap da thuc ff: " << endl;
	Nhap(ff);

	cout << "Da thuc ff vua nhap: ";
	Xuat(ff);

	DATHUC c = DaoHam(ff);
	cout << "\nDao ham cap 1 cua da thuc: ";
	Xuat(c);

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

DATHUC DaoHam(DATHUC f)
{
	DATHUC temp = f;
	temp.n = f.n - 1;
	for (int i = temp.n; i >= 0; i--)
		temp.a[i] = f.a[i + 1] * (i + 1);
	return temp;
}