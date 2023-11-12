#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

struct CauThu
{
	string MaSo;
	string HoTen;
	NGAY NgaySinh;
};
typedef struct CauThu CAUTHU;

void Nhap(NGAY&);
void Xuat(NGAY);

void Nhap(CAUTHU&);
void Xuat(CAUTHU);

void Nhap(CAUTHU[], int&);
void Xuat(CAUTHU[], int);

int NamLonNhat(CAUTHU[], int);
void LietKe(CAUTHU[], int);

int SoSanh(NGAY, NGAY);
void HoanVi(CAUTHU&, CAUTHU&);
void SapXep(CAUTHU[], int);

int main()
{
	CAUTHU b[100];
	int k;
	Nhap(b, k);

	Xuat(b, k);
	cout << "\nCac cau thu nho tuoi nhat: ";
	LietKe(b, k);

	SapXep(b, k);
	cout << "\nDanh sach cac cau thu sau khi sap xep: ";

	Xuat(b, k);
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
	cout << "\nNgay: " << x.Ngay << endl;
	cout << "Thang: " << x.Thang << endl;
	cout << "Nam: " << x.Nam << endl;
}

void Nhap(CAUTHU& x)
{
	cout << "\nNhap ma so cau thu: ";
	cin.ignore();
	getline(cin, x.MaSo);
	cout << "Nhap ho ten cau thu: ";
	getline(cin, x.HoTen);
	cout << "Nhap ngay sinh: ";
	Nhap(x.NgaySinh);
}

void Xuat(CAUTHU x)
{
	cout << "\nMa so cau thu: " << x.MaSo << endl;
	cout << "Ho ten cau thu: " << x.HoTen << endl;
	cout << "Ngay sinh: ";
	Xuat(x.NgaySinh);
}

void Nhap(CAUTHU a[], int& n)
{
	cout << "\nNhap so luong cau thu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nCau thu thu " << i + 1 << ": \n";
		Nhap(a[i]);
	}
}

void Xuat(CAUTHU a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nCau thu thu " << i + 1 << ": \n";
		Xuat(a[i]);
	}
}

int NamLonNhat(CAUTHU a[], int n)
{
	int lc = a[0].NgaySinh.Nam;
	for (int i = 0; i < n; i++)
		if (a[i].NgaySinh.Nam > lc)
			lc = a[i].NgaySinh.Nam;
	return lc;
}

void LietKe(CAUTHU a[], int n)
{
	int ln = NamLonNhat(a, n);
	for (int i = 0; i < n; i++)
		if (a[i].NgaySinh.Nam == ln)
			Xuat(a[i]);
}

int SoSanh(NGAY x, NGAY y)
{
	if (x.Nam > y.Nam)
		return 1;
	if (x.Nam < y.Nam)
		return -1;
	if (x.Thang > y.Thang)
		return 1;
	if (x.Thang < y.Thang)
		return -1;
	if (x.Ngay > y.Ngay)
		return 1;
	if (x.Ngay < y.Ngay)
		return -1;
	return 0;
}

void HoanVi(CAUTHU& a, CAUTHU& b)
{
	CAUTHU temp = a;
	a = b;
	b = temp;
}

void SapXep(CAUTHU a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
		{
			NGAY x = a[i].NgaySinh;
			NGAY y = a[j].NgaySinh;
			if (SoSanh(x, y) == -1)
				HoanVi(a[i], a[j]);
		}
}
