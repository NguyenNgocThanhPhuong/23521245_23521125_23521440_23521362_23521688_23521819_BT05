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

DIEMKHONGGIAN DoiXungOyz(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN A;
	cout << "Nhap diem A: " << endl;
	Nhap(A);

	cout << "Diem A: ";
	Xuat(A);

	DIEMKHONGGIAN B = DoiXungOyz(A);
	cout << "\nDiem doi xung A tren Oyz: ";
	Xuat(B);

	cout << "\n\n\nKet thuc!!!";
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

DIEMKHONGGIAN DoiXungOyz(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = -P.x;
	temp.y = P.y;
	temp.z = P.z;
	return temp;
}