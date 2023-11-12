#include <iostream>
#include  <iostream>
using namespace std;

struct Diem
{
	int x;
	int y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
DIEM DoiXungHoanh(DIEM);

int main()
{
	DIEM A;
	cout << "Nhap diem A:\n";
	Nhap(A);

	cout << "\nDiem A: ";
	Xuat(A);

	DIEM B = DoiXungHoanh(A);
	cout << "Diem doi xung voi diem A qua truc hoanh: ";
	Xuat(B);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << " (" << P.x << "," << P.y << ")";
}

DIEM DoiXungHoanh(DIEM P)
{
	DIEM temp;
	temp.x = P.x;
	temp.y = -P.y;
	return temp;
}
