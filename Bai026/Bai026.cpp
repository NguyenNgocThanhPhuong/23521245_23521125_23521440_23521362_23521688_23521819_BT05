#include <iostream>
using namespace std;

struct Diem
{
	int x;
	int y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);

bool ktTrung(DIEM, DIEM);

int main()
{
	DIEM A;
	cout << "Nhap diem A:\n";
	Nhap(A);

	cout << "\nDiem A: ";
	Xuat(A);

	DIEM B;
	cout << "\n\nNhap diem B:\n";
	Nhap(B);

	cout << "Diem B: ";
	Xuat(B);

	if (ktTrung(A, B))
		cout << "\nHai diem trung nhau";
	else
		cout << "\nHai diem khong trung nhau";

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

bool ktTrung(DIEM P, DIEM Q)
{
	if (P.x == Q.x && P.y == Q.y)
		return true;
	return false;
}
