#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct DIEM
{
	float x;
	float y;
};

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DIEM[][100], int&, int&);
void Xuat(DIEM[][100], int, int);

int ktTrung(DIEM, DIEM);
int TanSuat(DIEM[][100], int, int, DIEM);

int main()
{
	DIEM b[100][100];
	int k, l;

	cout << "Nhap ma tran cac diem Oxy: ";
	Nhap(b, k, l);

	cout << "\nMa tran diem vua nhap: \n";
	Xuat(b, k, l);

	DIEM A;
	cout << "\nNhap diem can kiem tra: \n";
	Nhap(A);

	cout << "\nTan suat xuat hien cua diem vua nhap: ";
	cout << TanSuat(b, k, l, A);

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

void Nhap(DIEM a[][100], int& n, int& m)
{
	cout << "\nNhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "\nNhap a[" << i << "][" << j << "]\n";
			Nhap(a[i][j]);
		}
}

void Xuat(DIEM a[][100], int n, int m)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			Xuat(a[i][j]);
		}
}

int ktTrung(DIEM P, DIEM Q)
{
	if (P.x == Q.x && P.y == Q.y)
		return 1;
	return 0;
}

int TanSuat(DIEM a[][100], int m, int n, DIEM P)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktTrung(a[i][j], P))
				dem++;
	return dem;
}