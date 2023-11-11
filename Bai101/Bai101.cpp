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

void XuatThu(NGAY);
int SoThuTu(NGAY);
bool ktNhuan(NGAY);
int SoNgayToiDaTrongNam(NGAY);
int SoThuTuTrongNam(NGAY);
int SoNgayToiDaTrongThang(NGAY);

int main()
{
	NGAY a;
	cout << "Nhap ngay a:";
	Nhap(a);

	cout << "\nNgay a: ";
	Xuat(a);

	cout << "\n\nThu : ", XuatThu(a);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(NGAY& x)
{
	cout << "\nNhap ngay: ";
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

int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (ktNhuan(x))
		ngaythang[1] = 29;
	return ngaythang[x.Thang - 1];
}

int SoThuTuTrongNam(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Thang - 1; i++)
	{
		NGAY temp = { 1,i,x.Nam };
		stt += SoNgayToiDaTrongThang(temp);
	}
	return (stt + x.Ngay);
}

int SoThuTu(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Nam - 1; i++)
	{
		NGAY temp = { 1,1,i };
		stt = stt + SoNgayToiDaTrongNam(temp);
	}
	return (stt + SoThuTuTrongNam(x));
}

void XuatThu(NGAY x)
{
	int stt = SoThuTu(x);
	switch (stt % 7)
	{
	case 0: cout << "Chu Nhat";
		break;
	case 1: cout << "Thu Hai";
		break;
	case 2: cout << "Thu Ba";
		break;
	case 3: cout << "Thu Tu";
		break;
	case 4: cout << "Thu Nam";
		break;
	case 5: cout << "Thu Sau";
		break;
	case 6: cout << "Thu Bay";
		break;
	}
}
