#include <iostream>
#include <cmath>
using namespace std;

struct Diem
{
	int x;
	int y;
};
typedef struct Diem DIEM;

struct TamGiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct TamGiac TAMGIAC;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);

void Nhap(DIEM[], int&);
void Xuat(DIEM[], int);

int KiemTra(TAMGIAC);
float KhoangCach(DIEM, DIEM);

float DienTich(TAMGIAC);
int KiemTraTamGiacKhongThuoc(TAMGIAC, DIEM);
float DienTich(DIEM, DIEM, DIEM);
float TongDienTich(TAMGIAC, DIEM);
int KiemTraDocLap(DIEM[], int);

int main()
{
	DIEM b[100];
	int k;
	Nhap(b, k);
	if (k < 3)
		return 0;

	Xuat(b, k);

	if (KiemTraDocLap(b, k) == 1)
		cout << "\nLa tam giac doc lap";
	else
		cout << "\nKhong phai la tam giac doc lap";

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

void Nhap(TAMGIAC& t)
{
	cout << "Nhap diem dau tien: ";
	Nhap(t.A);
	cout << "Nhap diem thu hai: ";
	Nhap(t.B);
	cout << "Nhap diem thu ba: ";
	Nhap(t.C);
}

void Nhap(DIEM a[], int& n)
{
	cout << "Nhap so diem: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap diem a[" << i << "]:\n";
		Nhap(a[i]);
	}
}

void Xuat(DIEM P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}

void Xuat(TAMGIAC t)
{
	cout << "\n Diem dau tien: ";
	Xuat(t.A);
	cout << "\n Diem thu hai: ";
	Xuat(t.B);
	cout << "\n Diem thu ba: ";
	Xuat(t.C);
}

void Xuat(DIEM a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nDiem a[" << i << "]:";
		Xuat(a[i]);
		cout << endl;
	}
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt(pow(Q.x - P.x, 2) + pow(Q.y - P.y, 2));
}

int KiemTra(TAMGIAC t)
{
	float a = KhoangCach(t.A, t.B);
	float b = KhoangCach(t.A, t.C);
	float c = KhoangCach(t.B, t.C);
	if (a + b > c && a + c > b && b + c > a)
		return 1;
	return 0;
}

float DienTich(TAMGIAC t)
{
	float a = KhoangCach(t.A, t.B);
	float b = KhoangCach(t.A, t.C);
	float c = KhoangCach(t.B, t.C);
	float p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

float DienTich(DIEM P, DIEM Q, DIEM R)
{
	TAMGIAC temp;
	temp = { P,Q,R };
	if (KiemTra(temp) == 0)
		return 0;
	float a = KhoangCach(P, Q);
	float b = KhoangCach(P, R);
	float c = KhoangCach(Q, R);
	float p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

float TongDienTich(TAMGIAC t, DIEM P)
{
	if (KiemTra(t) == 0)
		return 0;
	float s1 = DienTich(t.A, t.B, P);
	float s2 = DienTich(t.A, t.C, P);
	float s3 = DienTich(t.B, t.C, P);
	float Tong = s1 + s2 + s3;
	return Tong;
}

int KiemTraTamGiacKhongThuoc(TAMGIAC t, DIEM P)
{
	if (TongDienTich(t, P) > DienTich(t))
		return 1;
	return 0;
}

int KiemTraDocLap(DIEM a[], int n)
{
	TAMGIAC temp;
	int i, j, k;
	for (i = 0; i <= n - 3; i++)
		for (j = i + 1; j <= n - 2; j++)
			for (k = j + 1; k <= n - 1; k++)
			{
				temp = { a[i], a[j], a[k] };
				if (KiemTraTamGiacKhongThuoc(temp, a[k + 1]) == 1)
				{
					Xuat(temp);
					return 1;
				}
			}
	return 0;
}