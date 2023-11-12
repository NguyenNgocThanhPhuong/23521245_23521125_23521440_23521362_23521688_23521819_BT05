#include <iostream>
#include <iomanip>
#include <cmath>
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

void Nhap(DIEM[][100], int&, int&);
void Xuat(DIEM[][100], int, int);

int ktThuoc(DUONGTHANG, DIEM);
int DemDiem(DIEM[][100], int, int, DUONGTHANG);

int main()
{
	DUONGTHANG m;
	cout << "Nhap duong thang m:\n";
	Nhap(m);

	cout << "\nDuong thang m:";
	Xuat(m);

	DIEM b[100][100];
	int k, l;
	cout << "\n\nNhap ma tran cac diem:\n";
	Nhap(b, k, l);

	cout << "\nMa tran cac diem: \n";
	Xuat(b, k, l);

	cout << "\nSo luong diem trong ma tran thuoc duong thang d la: ";
	cout << DemDiem(b, k, l, m);

	cout << "\n\n\nKet thuc !!!";
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
	cout << "(" << P.x << "," << P.y << ")";
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
	cout << "\n(" << d.a << ")" << "x + " << "(" << d.b << ")" << "y + " << "(" << d.c << ")" << " = 0";
}

void Nhap(DIEM a[][100], int& m, int& n)
{
	cout << "Nhap so hang la: ";
	cin >> m;
	cout << "Nhap so cot la: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "\nNhap a[" << i << "][" << j << "]: ";
			Nhap(a[i][j]);
		}
}
void Xuat(DIEM a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			Xuat(a[i][j]);
			cout << endl;
		}
}

int ktThuoc(DUONGTHANG d, DIEM P)
{
	if (d.a * P.x + d.b * P.y + d.c == 0)
		return 1;
	return 0;
}

int DemDiem(DIEM a[][100], int m, int n, DUONGTHANG d)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktThuoc(d, a[i][j]) == 1)
				dem++;
	return dem;
}