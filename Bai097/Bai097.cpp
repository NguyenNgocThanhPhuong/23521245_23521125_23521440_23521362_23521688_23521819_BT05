#include <iostream>
#include <iomanip>
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
int SoNgayToiDaTrongThang(NGAY);
bool ktHopLe(NGAY);

int main()
{
	NGAY a;
	cout << "Nhap ngay a: \n";
	Nhap(a);

	cout << "\nNgay a: ";
	Xuat(a);

	if (ktHopLe(a))
		cout << "\nNgay hop le.";
	else
		cout << "\nNgay thang khong hop le";

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

int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (ktNhuan(x))
		ngaythang[1] = 29;
	return ngaythang[x.Thang - 1];
}

bool ktHopLe(NGAY x)
{
	if (x.Nam < 1)
		return false;
	if (x.Thang < 1)
		return false;
	if (x.Thang > 12)
		return false;
	if (x.Ngay > SoNgayToiDaTrongThang(x))
		return false;
	return true;
}