#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

bool ktVuongGoc(DUONGTHANG, DUONGTHANG);

int main()
{
	DUONGTHANG m, n;

	cout << "Nhap duong thang thu nhat: \n";
	Nhap(m);
	cout << "\nNhap duong thang thu hai: \n";
	Nhap(n);

	cout << "\n\nDuong thang thu nhat: ";
	Xuat(m);
	cout << "\nDuong thang thu hai: ";
	Xuat(n);

	if (ktVuongGoc(m, n))
		cout << "Hai duong thang vuong goc nhau.";
	else
		cout << "Hai duong thang khong vuong goc nhau.";

	cout << "\n\n\nKet thuc !!!";
	return 0;
}

void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << d.a << "x + " << d.b << "y + " << d.c << " = 0";
}

bool ktVuongGoc(DUONGTHANG d1, DUONGTHANG d2)
{
	if ((d1.a * d2.a + d1.b * d2.b) == 0)
		return true;
	return false;
}