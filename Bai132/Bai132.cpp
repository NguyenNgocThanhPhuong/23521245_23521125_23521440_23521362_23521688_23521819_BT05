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

float TheTich(HINHCAU);

int main()
{
	HINHCAU c;
	cout << "\n\n\nNhap hinh cau: ";
	Nhap(c);

	cout << "\n\n\Hinh cau vua nhap: ";
	Xuat(c);

	cout << "\n\n\nThe tich hinh cau: " << TheTich(c);

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

void Nhap(HINHCAU& s)
{
	cout << "\nNhap tam duong tron:\n";
	Nhap(s.I);
	cout << "Nhap ban kinh:\n";
	cin >> s.R;
}

void Xuat(HINHCAU s)
{
	cout << "\nTam: ";
	Xuat(s.I);
	cout << "\nBan kinh: " << s.R;
}

float TheTich(HINHCAU c)
{
	return float((float)4 / 3 * (M_PI) * c.R * c.R * c.R);
}