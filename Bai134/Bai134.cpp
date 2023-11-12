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
int TuongDoi(HINHCAU, HINHCAU);

int main()
{
	HINHCAU c3;
	cout << "Nhap hinh cau thu nhat:\n";
	Nhap(c3);

	cout << "Hinh chau thu nhat: ";
	Xuat(c3);

	HINHCAU c4;
	cout << "Nhap hinh cau thu hai:\n";
	Nhap(c4);

	cout << "Hinh chau thu hai: ";
	Xuat(c4);

	switch (TuongDoi(c3, c4))
	{
	case 0: cout << "\nHai hinh cau trung nhau";
		break;
	case 1: cout << "\nHai hinh cau roi nhau";
		break;
	case 2: cout << "\nHai hinh cau tiep xuc ngoai";
		break;
	case 3: cout << "\nHai hinh cau cat nhau";
		break;
	case 4: cout << "\nHai hinh cau tiep xuc trong";
		break;
	case 5: cout << "\nHai hinh cau chua trong nhau";
		break;
	}

	cout << "\n\n\nKet Thuc !!!";
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

int TuongDoi(HINHCAU c1, HINHCAU c2)
{
	float kc = KhoangCach(c1.I, c2.I);
	if (kc == 0 && c1.R == c2.R)
		return 0;
	if (kc > (c1.R + c2.R))
		return 1;
	if (kc == (c1.R + c2.R))
		return 2;
	if (kc < (c1.R + c2.R) && kc > abs(c1.R - c2.R))
		return 3;
	if (kc == abs(c1.R - c2.R))
		return 4;
	return 5;
}