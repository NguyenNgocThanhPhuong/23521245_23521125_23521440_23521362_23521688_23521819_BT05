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

int main()
{
	NGAY a;
	cout << "\nNhap ngay: ";
	Nhap(a);

	cout << "Ngay vua nhap: ";
	Xuat(a);

	cout << "\n\n\nKet Thuc !!!";
	return 0;
}

void Nhap(NGAY& x)
{
	cout << "\nNhap ngay: ";
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