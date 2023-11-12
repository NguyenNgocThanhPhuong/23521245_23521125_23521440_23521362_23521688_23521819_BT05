#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct ThiSinh
{
	string MaSo;
	string HoTen;
	float Toan;
	float Ly;
	float Hoa;
	float Tong;
};
typedef struct ThiSinh THISINH;

void Nhap(THISINH&);
void Xuat(THISINH);
void XuLy(THISINH&);
bool ktDau(THISINH);

void Nhap(THISINH[], int&);
void Xuat(THISINH[], int);
void LietKe(THISINH[], int);
void SapXep(THISINH[], int);

int main()
{
	THISINH b[100];
	int k;
	Nhap(b, k);

	cout << endl;
	Xuat(b, k);

	cout << "\nDanh sach thi sinh thi dau:";
	LietKe(b, k);

	cout << endl;
	SapXep(b, k);
	cout << "Danh sach sau khi sap xep:\n";
	Xuat(b, k);
	cout << "\n\n\nKetThuc";
	return 0;
}

void Nhap(THISINH& x)
{
	cout << "Nhap ma thi sinh: ";
	cin.ignore();
	getline(cin, x.MaSo);
	cout << "Nhap ho ten: ";
	getline(cin, x.HoTen);
	cout << "Nhap diem Toan: ";
	cin >> x.Toan;
	cout << "Nhap diem Ly: ";
	cin >> x.Ly;
	cout << "Nhap diem Hoa: ";
	cin >> x.Hoa;
}

void Xuat(THISINH x)
{
	cout << "\nMa thi sinh: " << x.MaSo;
	cout << "\nHo ten: " << x.HoTen;
	cout << "\nMa thi sinh: " << x.MaSo;
	cout << fixed << setprecision(3);
	cout << "\nDiem Toan: " << x.Toan;
	cout << "\nDiem Ly: " << x.Ly;
	cout << "\nMa Hoa: " << x.Hoa;
	cout << endl;
}

void XuLy(THISINH& x)
{
	x.Tong = x.Toan + x.Ly + x.Hoa;
}

void Nhap(THISINH a[], int& n)
{
	cout << "Nhap so luong thi sinh: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Thi sinh thu " << i + 1 << " : " << endl;
		Nhap(a[i]);
		XuLy(a[i]);
	}
}

void Xuat(THISINH a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Thi sinh thu " << i + 1 << " : ";
		Xuat(a[i]);
	}
}



bool ktDau(THISINH x)
{
	if (x.Tong <= 15)
		return 0;
	if (x.Toan == 0)
		return 0;
	if (x.Ly == 0)
		return 0;
	if (x.Hoa == 0)
		return 0;
	return true;
}

void LietKe(THISINH a[], int n)
{
	for (int i = 0; i < n; i++)
		if (ktDau(a[i]))
			Xuat(a[i]);
}

void SapXep(THISINH a[], int n)
{
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
			if (a[i].Tong < a[j].Tong)
				swap(a[i], a[j]);
}
