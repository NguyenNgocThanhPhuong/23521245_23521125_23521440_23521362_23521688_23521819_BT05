#include <iostream>
#include <iomanip>
using namespace std;

struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);

float KhoangCachGoc(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN A;
	cout << "Nhap diem A: " << endl;
	Nhap(A);

	cout << "Diem A: ";
	Xuat(A);

	cout << "\nKhoang cach den goc toa do: ";
	cout << fixed << setw(10) << setprecision(3) << KhoangCachGoc(A);

	cout << "\n\n\nKet Thuc !!!";
	return 0;
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

void Xuat(DIEMKHONGGIAN P)
{
	cout << " (" << P.x << "," << P.y << "," << P.z << ")";
}

float KhoangCachGoc(DIEMKHONGGIAN P)
{
	return sqrt(P.x * P.x + P.y * P.y + P.z * P.z);
}
