#include <iostream>
#include <cmath>
using namespace std;

struct Diem
{
	int x;
	int y;
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

void Nhap(DIEM[][100], int&, int&);
void Xuat(DIEM[][100], int, int);

float KhoangCach(DIEM, DIEM);
int ktThuoc(DUONGTRON, DIEM);
int DemDiem(DIEM[][100], int, int, DUONGTRON);

int main()
{
	DUONGTRON c;
	cout << "Nhap duong tron C:" << endl;
	Nhap(c);

	cout << "\nDuong tron c vua nhap: ";
	Xuat(c);

	DIEM b[100][100];
	int k, l;
	cout << "\n\nNhap ma tran cac diem:\n";
	Nhap(b, k, l);

	cout << "\nMa tran cac diem: \n";
	Xuat(b, k, l);

	cout << "\nSo luong diem trong ma tran nam trong duong tron:";
	cout << DemDiem(b, k, l, c);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap hoanh do: ";
	cin >> P.x;
	cout << "Nhap tung do: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "(" << P.x << "," << P.y << ")";
}

void Nhap(DUONGTRON& s)
{
	cout << "Nhap tam duong tron: " << endl;
	Nhap(s.I);
	cout << "Nhap ban kinh: ";
	cin >> s.R;
}

void Xuat(DUONGTRON s)
{
	cout << "\nTam duong tron: ";
	Xuat(s.I);
	cout << "\nBan kinh: " << s.R;
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
			cout << "\nNhap a[" << i << "][" << j << "]: \n";
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

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt(pow(Q.x - P.x, 2) + pow(Q.y - P.y, 2));
}

int ktThuoc(DUONGTRON s, DIEM P)
{
	float kc = KhoangCach(s.I, P);
	if (kc <= s.R)
		return 1;
	return 0;
}

int DemDiem(DIEM a[][100], int m, int n, DUONGTRON s)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktThuoc(s, a[i][j]))
				dem++;
	return dem;
}