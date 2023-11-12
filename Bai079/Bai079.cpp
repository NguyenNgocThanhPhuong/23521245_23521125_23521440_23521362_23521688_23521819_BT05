#include <iostream>
#include <iomanip>
using namespace std;

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO&);
void Xuat(HONSO);

int ucln(int, int);
bool ktToiGian(HONSO x);

int main()
{
	HONSO a;
	cout << "Nhap hon so a:\n";
	Nhap(a);

	cout << "\nHon so a:";
	Xuat(a);

	if (ktToiGian(a))
		cout << "\nHon so toi gian.";
	else
		cout << "\nHon so khong toi gian.";

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(HONSO& x)
{
	cout << "Nhap phan nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(HONSO x)
{
	cout << "\nPhan nguyen: " << x.Nguyen;
	cout << "\nTu: " << x.Tu;
	cout << "\nMau: " << x.Mau;
}

int ucln(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return (a + b);
}

bool ktToiGian(HONSO x)
{
	if (ucln(x.Tu, x.Mau) == 1 && x.Tu / x.Mau == 0)
		return true;
	return false;
}