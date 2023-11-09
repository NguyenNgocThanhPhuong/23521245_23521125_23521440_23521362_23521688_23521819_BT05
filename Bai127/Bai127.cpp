#include<iostream>
#include<iomanip>
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

float KhoangCach(DIEM, DIEM);
int TuongDoi(DUONGTRON, DUONGTRON);

int main()
{
	DUONGTRON c3;
	cout << "Nhap duong tron thu nhat:\n";
	Nhap(c3);

	cout << "Duong tron thu nhat:";
	Xuat(c3);

	DUONGTRON c4;
	cout << "Nhap duong tron thu hai:\n";
	Nhap(c4);

	cout << "Duong tron thu hai:";
	Xuat(c4);

	switch (TuongDoi(c3, c4))
	{
	case 0: cout << "\nHai duong tron trung nhau";
		break;
	case 1: cout << "\nHai duong tron roi nhau";
		break;
	case 2: cout << "\nHai duong tron tiep xuc ngoai";
		break;
	case 3: cout << "\nHai duong tron cat nhau";
		break;
	case 4: cout << "\nHai duong tron tiep xuc trong";
		break;
	case 5: cout << "\nHai duong tron chua trong nhau";
		break;
	}

	cout << "\n\n\nKet Thuc !!!";
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
	cout << " (" << P.x << "," << P.y << ")";
}

void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

void Xuat(DUONGTRON c)
{
	cout << "\nTam : ";
	Xuat(c.I);
	cout << "\nBan kinh:" << c.R;
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}

int TuongDoi(DUONGTRON c1, DUONGTRON c2)
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