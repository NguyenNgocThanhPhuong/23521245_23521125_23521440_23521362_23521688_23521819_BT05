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

float KhoangCachGoc(DIEM);

int main()
{
	DIEM A;
	cout << "Nhap diem A:";
	Nhap(A);

	cout << "\nDiem A: ";
	Xuat(A);

	cout << "\nKhoang cach diem A den goc toa do: " << KhoangCachGoc(A);

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
	cout << " (" << P.x << "," << P.y << ")";
}

float KhoangCachGoc(DIEM P)
{
	return sqrt(P.x * P.x + P.y * P.y);
}
