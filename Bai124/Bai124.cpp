#include <iostream>
#include <iomanip>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM I;
	float R;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);

float KhoangCach(DUONGTRON, DIEM);
bool ktThuoc(DUONGTRON, DIEM);

int main()
{
	DIEM A;
	cout << "Nhap diem A:\n";
	Nhap(A);

	cout << "\nDiem A: ";
	Xuat(A);

	DUONGTRON c;
	cout << "\n\nNhap duong tron: ";
	Nhap(c);

	cout << "\nDuong tron vua nhap: ";
	Xuat(c);

	if (ktThuoc(c, A))
		cout << "\n\nDiem nam trong duong tron";
	else
		cout << "\n\nDiem khong nam trong duong tron";

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap hoanh do: ";
	cin >> P.x;
	cout << "Nhap tung do: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << " (" << P.x << "," << P.y << ")";
}

void Nhap(DUONGTRON& s)
{
	cout << "\nNhap tam I:\n";
	Nhap(s.I);
	cout << "Nhap ban kinh: ";
	cin >> s.R;
}

void Xuat(DUONGTRON s)
{
	cout << "\nTam I:";
	Xuat(s.I);
	cout << "\nBan kinh: " << s.R;
}

float KhoangCach(DIEM I , DIEM P)
{
	return ((P.x - I.x) * (P.x - I.x) + (P.y - I.y) * (P.y - I.y));
}

bool ktThuoc(DUONGTRON s, DIEM P)
{
	float kc = KhoangCach(s.I, P);
	if (kc <= s.R)
		return true;
	return false;
}