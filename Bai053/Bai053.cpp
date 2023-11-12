#include <iostream>
#include <iomanip>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);

int ucln(int, int);
bool ktToiGian(PHANSO);

int main()
{
	PHANSO a;
	cout << "Nhap phan so a: " << endl;
	Nhap(a);

	cout << "Phan so a: ";
	Xuat(a);

	if (ktToiGian(a))
		cout << "\nPhan so toi gian.";
	else
		cout << "\nPhan so khong toi gian.";

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << x.Tu << " / " << x.Mau;
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
	return a + b;
}

bool ktToiGian(PHANSO x)
{
	if (ucln(x.Tu, x.Mau) == 1)
		return true;
	return false;
}