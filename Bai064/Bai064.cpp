#include <iostream>
using namespace std;

struct SoPhuc
{
	int Thuc;
	int Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);

int main()
{
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