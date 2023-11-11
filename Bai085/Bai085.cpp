#include<iostream>
using namespace std;

struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct ThoiGian THOIGIAN;

void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);

bool ktHopLe(THOIGIAN);

int main()
{
	THOIGIAN a;
	cout << "Nhap thoi gian:\n";
	Nhap(a);

	cout << "\nThoi gian vua nhap: ";
	Xuat(a);

	if (ktHopLe(a))
		cout << "\nThoi gian la hop le";
	else
		cout << "\nThoi gian la khong hop le";

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(THOIGIAN& x)
{
	cout << "Nhap gio: ";
	cin >> x.Gio;
	cout << "Nhap phut: ";
	cin >> x.Phut;
	cout << "Nhap giay: ";
	cin >> x.Giay;
}

void Xuat(THOIGIAN x)
{
	cout << "\nGio: " << x.Gio;
	cout << "\nPhut: " << x.Phut;
	cout << "\nGiay: " << x.Giay;
}

bool ktHopLe(THOIGIAN x)
{
	if (!(x.Gio >= 0 && x.Gio <= 23))
		return false;
	if (!(x.Phut >= 0 && x.Phut <= 59))
		return false;
	if (!(x.Giay >= 0 && x.Giay <= 59))
		return false;
	return true;
}