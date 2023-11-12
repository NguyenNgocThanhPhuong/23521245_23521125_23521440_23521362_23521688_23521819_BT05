#include<iostream>
#include<iomanip>
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

DIEMKHONGGIAN DoiXungOxz(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN A;
	cout << "Nhap diem A: " << endl;
	Nhap(A);

	cout << "Diem A: ";
	Xuat(A);

	DIEMKHONGGIAN B = DoiXungOxz(A);
	cout << "\nDiem doi xung qua Ozx:";
	Xuat(B);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "Nhap x:";
	cin >> P.x;
	cout << "Nhap y:";
	cin >> P.y;
	cout << "Nhap z:";
	cin >> P.z;
}

void Xuat(DIEMKHONGGIAN P)
{
	cout << "(" << P.x << "," << P.y << "," << P.z << ")\n";
}

DIEMKHONGGIAN DoiXungOxz(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = P.x;
	temp.y = -P.y;
	temp.z = P.z;
	return temp;
}
