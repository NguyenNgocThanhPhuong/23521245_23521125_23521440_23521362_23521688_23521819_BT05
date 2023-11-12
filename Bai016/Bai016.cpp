#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct NhanVien
{
	string MaSo;
	string HoTen;
	float Luong;
};
typedef struct NhanVien NHANVIEN;

void Nhap(NHANVIEN&);
void Xuat(NHANVIEN);

void Nhap(NHANVIEN[], int&);
void Xuat(NHANVIEN[], int);

float LuongCaoNhat(NHANVIEN[], int);
int TimNhanVien(NHANVIEN[], int);
float TongLuong(NHANVIEN[], int);

void HoanVi(NHANVIEN&, NHANVIEN&);
void SapXep(NHANVIEN[], int);

int main()
{
	NHANVIEN b[100];
	int k;
	Nhap(b, k);
	Xuat(b, k);

	int kq = TimNhanVien(b, k);
	if (kq == -1)
		cout << "\nKhong tim thay";
	else
	{
		cout << "\nNhan vien can tim: ";
		Xuat(b[kq]);
	}

	float tong = TongLuong(b, k);
	cout << "\nTong luong: " << tong << endl;

	SapXep(b, k);
	cout << "\nMang sau khi sap xep: ";
	Xuat(b, k);

	cout << "\n\n\nKet Thuc !!!";
	return 0;
}

void Nhap(NHANVIEN& x)
{
	cout << "Nhap ma so nhan vien: ";
	cin.ignore();
	getline(cin, x.MaSo);
	cout << "Nhap ho ten nhan vien: ";
	getline(cin, x.HoTen);
	cout << "Nhap luong nhan vien: ";
	cin >> x.Luong;
}

void Xuat(NHANVIEN x)
{
	cout << "\nMa nhan vien: " << x.MaSo << endl;
	cout << "Ho ten: " << x.HoTen << endl;
	cout << setw(10);
	cout << setprecision(3);
	cout << "Luong: " << x.Luong << endl;
}

void Nhap(NHANVIEN a[], int& n)
{
	cout << "\nNhap so luong nhan vien: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhan vien thu " << i + 1 << ": \n";
		Nhap(a[i]);
	}
}

void Xuat(NHANVIEN a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhan vien thu " << i + 1 << ":";
		Xuat(a[i]);
	}
}

float LuongCaoNhat(NHANVIEN a[], int n)
{
	float lc = a[0].Luong;
	for (int i = 0; i < n; i++)
		if (lc < a[i].Luong)
			lc = a[i].Luong;
	return lc;
}

int TimNhanVien(NHANVIEN a[], int n)
{
	if (n == 0)
		return -1;
	float ln = LuongCaoNhat(a, n);
	for (int i = 0; i < n; i++)
		if (ln == a[i].Luong)
			return i;
	return -1;
}

float TongLuong(NHANVIEN a[], int n)
{
	float s = 0;
	for (int i = 0; i < n; i++)
		s = s + a[i].Luong;
	return s;
}

void HoanVi(NHANVIEN& a, NHANVIEN& b)
{
	NHANVIEN temp;
	temp = a;
	a = b;
	b = temp;
}

void SapXep(NHANVIEN a[], int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].Luong > a[j].Luong)
				HoanVi(a[i], a[j]);
}
