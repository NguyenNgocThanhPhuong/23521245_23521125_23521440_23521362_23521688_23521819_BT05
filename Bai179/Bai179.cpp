#include <iostream>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DIEM[], int&);
void Xuat(DIEM[], int);

bool ktTrung(DIEM, DIEM);
int TanSuat(DIEM[], int, DIEM);
int DemDiem(DIEM[], int);

int main()
{
	DIEM b[100];
	int k;
	cout << "Nhap cac diem: \n";
	Nhap(b, k);

	cout << "\nCac diem vua nhap: ";
	Xuat(b, k);

	cout << "So luong phan tu khong trung voi phan tu khac la: " << DemDiem(b, k);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "(" << P.x << "," << P.y << ")\n";
}

void Nhap(DIEM a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap a[" << i << "] \n";
		Nhap(a[i]);
	}
}

void Xuat(DIEM a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "] = ";
		Xuat(a[i]);
	}
}

bool ktTrung(DIEM P, DIEM Q)
{
	int flag = true;
	if ((P.x == Q.x) && (P.y == Q.y))
		flag = false;
	return flag;
}

int TanSuat(DIEM a[], int n, DIEM P)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (ktTrung(a[i], P))
			dem++;
	}
	return dem;
}

int DemDiem(DIEM a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (TanSuat(a, n, a[i]) == 1)
			dem++;
	}
	return dem;
}