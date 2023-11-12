#include <iostream>
#include <iomanip>
using namespace std;

struct DIEM
{
	float x;
	float y;
};
typedef struct DIEM DIEM;

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

float KhoangCachGoc(DIEM);
bool ktQuaGoc(DUONGTRON);
bool ktTonTai(DUONGTRON[], int);

int main()
{
	DUONGTRON b[100];
	int k;
	cout << "Nhap cac duong tron: ";
	Nhap(b, k);

	cout << "\nCac duong tron vua nhap: \n";
	Xuat(b, k);

	if (ktTonTai(b, k))
		cout << "\nCo duong tron di qua goc toa do.";
	else
		cout << "\nkhong co duong tron di qua goc toa do.";

	cout << "\n\n\nKet thuc !!!";
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

float KhoangCachGoc(DIEM P)
{
	return sqrt(P.x * P.x + P.y * P.y);
}

bool ktQuaGoc(DUONGTRON c)
{
	float kc = KhoangCachGoc(c.I);
	if (kc == c.R)
		return true;
	return false;
}

bool ktTonTai(DUONGTRON a[], int n)
{
	bool flag = false;
	for (int i = 0; i < n; i++)
		if (ktQuaGoc(a[i]))
			flag = true;
	return flag;
}