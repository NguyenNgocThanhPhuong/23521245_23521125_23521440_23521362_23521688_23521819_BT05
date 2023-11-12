#include<iostream>
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

bool ktThuoc2(DIEM);

int main()
{
	DIEM A;
	cout << "Nhap diem A:\n";
	Nhap(A);

	cout << "\nDiem A: ";
	Xuat(A);

	if (ktThuoc2(A))
		cout << "\nDiem thuoc phan tu thu II";
	else
		cout << "\nDiem khong thuoc phan tu thu II";

	cout << "\n\n\nKet thuc";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x:";
	cin >> P.x;
	cout << "Nhap y:";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << " (" << P.x << "," << P.y << ")";
}

bool ktThuoc2(DIEM P)
{
	if (P.x < 0 && P.y > 0)
		return true;
	return false;
}
