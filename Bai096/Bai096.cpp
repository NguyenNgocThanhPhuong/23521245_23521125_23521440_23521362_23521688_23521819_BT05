#include<iostream>
#include<cmath>
using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);

bool ktNhuan(NGAY);
int SoNgayToiDaTrongNam(NGAY);

int main()
{
	NGAY a;
	cout << "Nhap ngay a: \n";
	Nhap(a);

	cout << "\nNgay a: ";
	Xuat(a);

	cout << "\nSo ngay toi da trong nam: ";
	cout << SoNgayToiDaTrongNam(a);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(NGAY& x)
{
	cout << "Nhap ngay: ";
	cin >> x.Ngay;
	cout << "Nhap thang: ";
	cin >> x.Thang;
	cout << "Nhap nam: ";
	cin >> x.Nam;
}

void Xuat(NGAY x)
{
	cout << x.Ngay << "/" << x.Thang << "/" << x.Nam;
}

bool ktNhuan(NGAY x)
{
	if (x.Nam % 4 == 0 && x.Nam % 100 != 0)
		return true;
	if (x.Nam % 400 == 0)
		return true;
	return false;
}

int SoNgayToiDaTrongNam(NGAY x)
{
	if (ktNhuan(x))
		return 366;
	return 365;
}