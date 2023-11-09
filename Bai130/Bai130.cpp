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
	HINHCAU a;
	cout << "Nhap hinh cau: \n";
	Nhap(a);

	cout << "\nHinh cau vua nhap: ";
	Xuat(a);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "Nhap hoanh do: ";
	cin >> P.x;
	cout << "Nhap tung do: ";
	cin >> P.y;
	cout << "Nhap cao do: ";
	cin >> P.z;
};

void Xuat(DIEMKHONGGIAN P)
{
	cout << fixed << setw(10) << setprecision(3);
	cout << "(" << P.x << ", " << P.y << ", " << P.z << ") ";
}

void Nhap(HINHCAU& c)
{
	cout << "Nhap tam I: \n";
	Nhap(c.I);
	cout << "Nhap ban kinh R: ";
	cin >> c.R;
}

void Xuat(HINHCAU c)
{
	cout << "\nTam: ";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}