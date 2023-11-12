#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);

bool ktThuoc4(DIEM);

int main()
{
	DIEM A;
	cout << "Nhap diem A:\n";
	Nhap(A);

	cout << "\nDiem A: ";
	Xuat(A);

	if (ktThuoc4(A))
		cout << "Diem thuoc phan tu thu 4:\n";
	else
		cout << "Diem khong thuoc phan tu thu 4: ";

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

bool ktThuoc4(DIEM P)
{
	if (P.x > 0 && P.y < 0)
		return true;
	return false;
}
