#include <iostream>
using namespace std;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);

int main()
{
	DUONGTHANG d;
	cout << "Nhap duong thang: " << endl;
	Nhap(d);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DUONGTHANG& d)
{
	cout << "Nhap he so a: ";
	cin >> d.a;
	cout << "Nhap he so b: ";
	cin >> d.b;
	cout << "Nhap he so c: ";
	cin >> d.c;
}