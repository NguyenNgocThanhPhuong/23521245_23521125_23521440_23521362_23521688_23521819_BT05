#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM I;
	float R;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);

void Nhap(DUONGTRON[], int&);
void Xuat(DUONGTRON[], int);

float KhoangCach(DIEM, DIEM);
int TuongDoi(DUONGTRON, DUONGTRON);
bool ktDoiMotCatNhau(DUONGTRON[], int);

int main()
{
	DUONGTRON b[100];
	int k;
	cout << "Nhap cac duong tron: ";
	Nhap(b, k);

	cout << "\nCac duong tron vua nhap: ";
	Xuat(b, k);

	if (ktDoiMotCatNhau(b, k))
		cout << "\nCac duong tron doi mot cat nhau";
	else
		cout << "\nCac duong tron khong doi mot cat nhau";

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << fixed << setprecision(3);
	cout << "(" << P.x << ", " << P.y << ")";
}

void Nhap(DUONGTRON& s)
{
	cout << "\nNhap tam";
	Nhap(s.I);
	cout << "Nhap ban kinh: ";
	cin >> s.R;
}

void Xuat(DUONGTRON s)
{
	cout << "\nTam: ";
	Xuat(s.I);
	cout << fixed << setprecision(3);
	cout << "\nBan kinh: " << s.R << "\n";
}

void Nhap(DUONGTRON a[], int& n)
{
	cout << "\nNhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}

void Xuat(DUONGTRON a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "]: ";
		Xuat(a[i]);
	}
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt(pow(Q.x - P.x, 2) + pow(Q.y - P.y, 2));
}

int TuongDoi(DUONGTRON s1, DUONGTRON s2)
{
	float kc = KhoangCach(s1.I, s2.I);
	if (kc == 0 && s1.R == s2.R)
		return 0;
	if (kc > s1.R + s2.R)
		return 1;
	if (kc == s1.R + s2.R)
		return 2;
	if (kc > abs(s1.R - s2.R) && kc < s1.R + s2.R)
		return 3;
	if (kc == abs(s1.R - s2.R))
		return 4;
	return 5;
}

bool ktDoiMotCatNhau(DUONGTRON a[], int n)
{
	int flag = true;
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (TuongDoi(a[i], a[j]) != 3)
				flag = false;
	return flag;
}