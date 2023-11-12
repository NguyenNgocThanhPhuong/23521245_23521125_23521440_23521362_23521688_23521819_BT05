#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);

DIEM DoiXungGoc(DIEM);

int main()
{
	DIEM A;
	cout << "Nhap diem A: \n";
	Nhap(A);

	cout << "Diem A: ";
	Xuat(A);

	DIEM B = DoiXungGoc(A);
	cout << "\nDiem doi xung qua goc: ";
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
	cout << " (" << P.x << "," << P.y << ")";
}

DIEM DoiXungGoc(DIEM P)
{
	DIEM temp;
	temp.x = -P.x;
	temp.y = -P.y;
	return temp;
}
