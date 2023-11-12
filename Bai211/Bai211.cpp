#include <iostream>
#include  <iomanip>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

void Nhap(DUONGTHANG[], int&);
void Xuat(DUONGTHANG[], int);

bool ktThuoc(DUONGTHANG, DIEM);
bool ktQuaDiem(DUONGTHANG[], int, DIEM);

int main()
{
	DUONGTHANG b[100];
	int k;
	cout << "\nNhap cac duong thang: " << endl;
	Nhap(b, k);

	cout << "\nCac duong thang vua nhap: \n";
	Xuat(b, k);

	DIEM A;
	cout << "Nhap diem A:\n";
	Nhap(A);

	cout << "\nDiem A:";
	Xuat(A);

	if (ktQuaDiem(b, k, A))
		cout << "\nCo duong thang di qua diem A.";
	else
		cout << "\nKhong co duong thang di qua diem A.";

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap hoanh do: ";
	cin >> P.x;
	cout << "Nhap tung do: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "(" << P.x << ", " << P.y << ")";
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

bool ktThuoc(DUONGTHANG d, DIEM P)
{
	float kq = d.a * P.x + d.b * P.y + d.c;
	if (kq == 0)
		return true;
	return false;
}

bool ktQuaDiem(DUONGTHANG a[], int n, DIEM P)
{
	int flag = false;
	for (int i = 0; i <= n - 2; i++)
		if (ktThuoc(a[i], P))
			flag = true;
	return flag;
}