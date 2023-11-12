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

bool ktThuoc1(DIEM);

int main()
{
	DIEM A;
	cout << "Nhap diem A:\n";
	Nhap(A);

	cout << "\nDiem A: ";
	Xuat(A);

	if (ktThuoc1(A))
		cout << "\nThuoc phan tu thu I";
	else
		cout << "\nKhong thuoc phan tu thu I";

	cout << "\n\n\nKet Thuc !!!";
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

bool ktThuoc1(DIEM P)
{
	if (P.x > 0 && P.y > 0)
		return true;
	return false;
}
