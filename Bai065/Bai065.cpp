#include <iostream>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);

int main()
{
	SOPHUC a;
	cout << "Nhap so phuc a: " << endl;
	Nhap(a);

	cout << "\nSo phuc a: " << endl;
	Xuat(a);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "\nNhap thuc: ";
	cin >> x.Thuc;
	cout << "\nNhap ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << "\nThuc: " << x.Thuc << endl;
	cout << "\nAo: " << x.Ao << endl;
}