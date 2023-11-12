#include <iostream>
#include <iomanip>
using namespace std;

struct DiemKhongGian
{
	int x;
	int y;
	int z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);

float KhoangCachZ(DIEMKHONGGIAN, DIEMKHONGGIAN);

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

	cout << "\nKhoang cach 2 diem theo phuong Oz: ";
	cout << fixed << setw(10) << setprecision(3) << KhoangCachZ(A, B);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

void Xuat(DIEMKHONGGIAN P)
{
	cout << " (" << P.x << "," << P.y << "," << P.z << ")";
}

float KhoangCachZ(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return abs(Q.z - P.z);
}
