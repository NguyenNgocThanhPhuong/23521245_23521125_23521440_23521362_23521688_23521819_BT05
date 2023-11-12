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

struct HinhCau
{
	DIEMKHONGGIAN I;
	float R;
};
typedef struct HinhCau HINHCAU;

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);

void Nhap(HINHCAU&);
void Xuat(HINHCAU);

int main()
{
	HINHCAU s;
	Nhap(s);

	cout << "\nHinh cau vua nhap:\n ";
	Xuat(s);

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
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
	cout << "\nz: " << P.z;
}

void Nhap(HINHCAU& c)
{
	cout << "\nNhap tam: " << endl;
	Nhap(c.I);
	cout << "\nNhap ban kinh: ";
	cin >> c.R;
}

void Xuat(HINHCAU c)
{
	cout << fixed << setw(10) << setprecision(3);
	cout << "Tam: ";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}