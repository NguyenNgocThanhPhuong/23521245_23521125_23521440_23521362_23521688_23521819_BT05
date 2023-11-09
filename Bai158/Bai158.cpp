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

int main()
{
	DATHUC g;
	cout << "Nhap da thuc g: " << endl;
	Nhap(g);

	cout << "Da thuc g vua nhap: ";
	Xuat(g);

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