#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);

bool ktTrung(DIEMKHONGGIAN, DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN A;
	cout << "Nhap diem A: " << endl;
	Nhap(A);

	cout << "Diem A: ";
	Xuat(A);

	DIEMKHONGGIAN B;
	cout << "Nhap diem B: " << endl;
	Nhap(B);

	cout << "Diem B: ";
	Xuat(B);

	if (ktTrung(A, B))
		cout << "\nHai diem trung nhau";
	else
		cout << "\nHai diem khong trung nhau";
	return 0;
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

void Xuat(DIEMKHONGGIAN P)
{
	cout << "(" << P.x << "," << P.y << "," << P.z << ")\n";
}

bool ktTrung(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	if ((P.x == Q.x) && (P.y == Q.y) && (P.z == Q.z))
		return true;
	return false;
}