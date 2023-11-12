#include <iostream>
using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);

void Nhap(NGAY[], int&);
void Xuat(NGAY[], int);

int main()
{
	NGAY b[100];
	int k;
	cout << "Nhap cac ngay: ";
	Nhap(b, k);

	cout << "\nCac ngay duoc nhap: ";
	Xuat(b, k);

	cout << "\n\n\nKet Thuc !!!";
	return 0;
}

void Nhap(NGAY& x)
{
	cout << "\nNhap ngay: ";
	cin >> x.Ngay;
	cout << "Nhap thang: ";
	cin >> x.Thang;
	cout << "Nhap nam: ";
	cin >> x.Nam;
}

void Xuat(NGAY x)
{
	cout << x.Ngay << "/" << x.Thang << "/" << x.Nam;
}

void Nhap(NGAY a[], int& n)
{
	cout << "\nNhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNgay a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(NGAY a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNgay a[" << i << "]: ";
		Xuat(a[i]);
		cout << endl;
	}
}