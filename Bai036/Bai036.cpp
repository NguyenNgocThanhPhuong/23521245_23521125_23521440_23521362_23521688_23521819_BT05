#include <iostream>
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

float KhoangCachY(DIEMKHONGGIAN, DIEMKHONGGIAN);

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

	cout << "\nKhoang cach 2 diem theo phuong Oy: ";
	cout << fixed << setw(10) << setprecision(3) << KhoangCachY(A, B);

	cout << "\n\n\n Ket thuc!!!";
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
	cout << " (" << P.x << "," << P.y << "," << P.z << ")";
}

float KhoangCachY(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return abs(Q.y - P.y);
}
