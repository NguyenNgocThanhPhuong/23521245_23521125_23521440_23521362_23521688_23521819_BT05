#include <iostream>
#include  <iomanip>
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

void Nhap(DUONGTHANG[], int&);
void Xuat(DUONGTHANG[], int);

bool ktTrung(DUONGTHANG, DUONGTHANG);
bool ktCapTrung(DUONGTHANG[], int);

int main()
{
	DUONGTHANG b[100];
	int k;
	cout << "\nNhap cac duong thang: " << endl;
	Nhap(b, k);

	cout << "\nCac duong thang vua nhap: \n";
	Xuat(b, k);

	if (ktCapTrung(b, k))
		cout << "\nCo cap duong thang trung.";
	else
		cout << "\nKhong co cap duong thang trung.";

	cout << "\n\n\nKet thuc!!!";
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
	cout << "(" << d.a << ")" << "x + " << "(" << d.b << ")" << "y + " << "(" << d.c << ")" << " = 0";
}

void Nhap(DUONGTHANG a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap duong thang a[" << i << "] \n";
		Nhap(a[i]);
	}
}

void Xuat(DUONGTHANG a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Duong thang a[" << i << "] ";
		Xuat(a[i]);
		cout << endl;
	}
}

bool ktTrung(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx == 0)
		return true;
	return false;
}

bool ktCapTrung(DUONGTHANG a[], int n)
{
	int flag = false;
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (ktTrung(a[i], a[j]))
				flag = true;
	return flag;
}