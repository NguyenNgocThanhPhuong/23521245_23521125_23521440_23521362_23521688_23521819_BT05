#include <iostream>
using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

void Nhap(int&, int&);
void Xuat(NGAY);

bool ktNhuan(NGAY);
int SoNgayToiDaTrongThang(NGAY);

NGAY TimNgay(int, int);

int main()
{
	int nm;
	int SoThuTu;
	Nhap(nm, SoThuTu);

	NGAY kq = TimNgay(nm, SoThuTu);
	cout << "\nThoi gian can tim: ";
	Xuat(kq);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(int& nam, int& stt)
{
	cout << "Nhap nam: ";
	cin >> nam;
	cout << "Nhap so tu thu ngay trong nam: ";
	cin >> stt;
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

NGAY TimNgay(int nam, int stt)
{
	NGAY temp = { 1,1,nam };
	while (stt - SoNgayToiDaTrongThang(temp) > 0)
	{
		stt = stt - SoNgayToiDaTrongThang(temp);
		temp.Thang++;
	}
	temp.Ngay = stt;
	return temp;
}