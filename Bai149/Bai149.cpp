#include<iostream>
using namespace std;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef DuongThang DUONGTHANG;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

bool ktThuoc(DUONGTHANG, DIEM);

int main()
{
	DIEM A;
	cout << "Nhap diem A: \n";
	Nhap(A);

	cout << "\nDiem A:";
	Xuat(A);

	DUONGTHANG d;
	cout << "Nhap duong thang:\n";
	Nhap(d);

	cout << "Duong thang:";
	Xuat(d);

	if (ktThuoc(d, A))
		cout << "\nDiem A thuoc duong thang";
	else
		cout << "\nDiem A khong thuoc duong thang";
	cout << "\n\n\nKet thuc";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x:";
	cin >> P.x;
	cout << "Nhap y:";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
}

void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a : ";
	cin >> d.a;
	cout << "Nhap b : ";
	cin >> d.b;
	cout << "Nhap c : ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << "\na:" << d.a;
	cout << "\nb:" << d.b;
	cout << "\nc:" << d.c;
}

bool ktThuoc(DUONGTHANG d, DIEM P)
{
	if (d.a * P.x + d.b * P.y + d.c == 0)
		return true;
	return false;
}