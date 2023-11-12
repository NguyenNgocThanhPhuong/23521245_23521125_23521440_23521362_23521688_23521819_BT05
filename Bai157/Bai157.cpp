#include <iostream>
#include <iomanip>
using namespace std;

struct DaThuc
{
	int n;
	float a[100];
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);

int main()
{
	DATHUC a;
	cout << "Nhap da thuc:";
	Nhap(a);
	
	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DATHUC& f)
{
	cout << "\nNhap so mu: ";
	cin >> f.n;
	for (int i=f.n;i>=0; i--)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> f.a[i];
	}
}