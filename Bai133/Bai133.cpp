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

float KhoangCach(DIEMKHONGGIAN, DIEMKHONGGIAN);
bool ktThuoc(HINHCAU, DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN A;
	cout << "\nNhap diem A: ";
	Nhap(A);

	cout << "\nDiem A: ";
	Xuat(A);

	HINHCAU c;
	cout << "\n\n\nNhap hinh cau:";
	Nhap(c);

	cout << "\n\n\Hinh cau vua nhap: ";
	Xuat(c);
	
	if (ktThuoc(c, A))
		cout << "\nA thuoc hinh cau.";
	else
		cout << "\nA ko thuoc hinh cau.";

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

float KhoangCach(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y) + (Q.z - P.z) * (Q.z - P.z));
}

bool ktThuoc(HINHCAU c, DIEMKHONGGIAN P)
{
	float kc = KhoangCach(c.I, P);
	if (kc <= c.R)
		return true;
	return false;
}