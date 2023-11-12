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

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DIEM[], int&);
void Xuat(DIEM[], int);

float KhoangCach(DIEM, DIEM);
void GanNhauNhat(DIEM[], int, DIEM&, DIEM&);

int main()
{
	DIEM b[100];
	int k;
	cout << "Nhap cac diem: \n";
	Nhap(b, k);

	cout << "\nCac diem vua nhap: ";
	Xuat(b, k);

	DIEM A;
	DIEM B;
	GanNhauNhat(b, k, A, B);
	cout << "\nHai toa do diem gan nhau nhat: \n";
	Xuat(A);
	Xuat(B);

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

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}

void GanNhauNhat(DIEM a[], int n, DIEM& P, DIEM& Q)
{
	P = a[0];
	Q = a[1];
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (KhoangCach(a[i], a[j]) < KhoangCach(P, Q))
			{
				P = a[i];
				Q = a[j];
			}
}