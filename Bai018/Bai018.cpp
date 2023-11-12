#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);

float KhoangCachX(DIEM, DIEM);

int main()
{
	DIEM A;
	cout << "Nhap diem A:\n";
	Nhap(A);

	cout << "Toa do diem A: ";
	Xuat(A);

	DIEM B;
	cout << "\n\nNhap diem B:\n";
	Nhap(B);

	cout << "Toa do diem B: ";
	Xuat(B);

	cout << "\n\nKhoang cach giua hai diem theo phuong Ox: ";
	cout << fixed << setw(10) << setprecision(3) << KhoangCachX(A, B);

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
	cout << " (" << P.x << "," << P.y << ")";
}

float KhoangCachX(DIEM P, DIEM Q)
{
	return abs(Q.x - P.x);
}
