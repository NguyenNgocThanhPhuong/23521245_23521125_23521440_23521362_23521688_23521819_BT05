#include <iostream>
#include <iomanip>
using namespace std;

struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;

void Nhap(DONTHUC&);
void Xuat(DONTHUC);

DONTHUC DaoHam(DONTHUC);

int main()
{
	DONTHUC g;
	cout << "Nhap don thuc: \n";
	Nhap(g);

	cout << "\nDon thuc: ";
	Xuat(g);

	DONTHUC kq = DaoHam(g);
	cout << "\n\nDao ham cap 1 cua don thuc g: ";
	Xuat(kq);

	cout << "\n\n\nKet thuc!!!" << endl;
	return 0;
}

void Nhap(DONTHUC& f)
{
	cout << "Nhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}

void Xuat(DONTHUC f)
{
	cout << fixed << setprecision(3);
	cout << "\nHe so: " << f.a;
	cout << "\nSo mu: " << f.n;
}

DONTHUC DaoHam(DONTHUC f)
{
	DONTHUC temp;
	temp.a = f.a * f.n;
	temp.n = f.n - 1;
	return temp;
}