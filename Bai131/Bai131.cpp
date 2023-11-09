#define _USE_MATH_DEFINES
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

float DienTich(HINHCAU);

int main()
{
	HINHCAU s;
	cout << "\Nhap hinh cau: " << endl;
	Nhap(s);

	cout << "\nHinh cau vua nhap:\n ";
	Xuat(s);

	cout << "\nDien tich hinh cau: " << DienTich(s);

	cout << "\n\n\nKet thuc !!!";
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
	cout << fixed << setw(10) << setprecision(3);
	cout << "(" << P.x << ", " << P.y << ", " << P.z << ") ";
}

void Nhap(HINHCAU& c)
{
	cout << "\nNhap tam: " << endl;
	Nhap(c.I);
	cout << "Nhap ban kinh : ";
	cin >> c.R;
}

void Xuat(HINHCAU c)
{
	cout << "Tam: ";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}

float DienTich(HINHCAU c)
{
	return float(4 * M_PI * c.R * c.R);
}