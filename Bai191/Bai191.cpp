#include <iostream>
using namespace std;

struct SoPhuc
{
	int Thuc;
	int Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);

void Nhap(SOPHUC[], int&);

int main()
{
	SOPHUC b[100];
	int k;
	cout << "Nhap cac so phuc:";
	Nhap(b, k);

	cout << "\n\n\nKet thuc !!!";
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << x.Thuc << " + " << "(" << x.Ao << ")i";
}

void Nhap(SOPHUC a[], int& n)
{
	cout << "\nNhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap so phuc a[" << i << "]:\n";
		Nhap(a[i]);
	}
}