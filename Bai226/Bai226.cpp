#include<iostream>
#include<iomanip>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
float KhoangCach(DIEM, DIEM);

void Nhap(DIEM[][100], int&, int&);
void Xuat(DIEM[][100], int, int);
DIEM TimKiem(DIEM[][100], int, int, DIEM);

int main()
{
	DIEM b[100][100];
	int k, l;
	cout << "Nhap ma tran cac diem:\n";
	Nhap(b, k, l);

	cout << "\nMa tran cac diem: \n";
	Xuat(b, k, l);

	DIEM N;
	cout << "\nNhap diem can tinh: ";
	Nhap(N);

	cout << "\nDiem can tinh: ";
	Xuat(N);

	DIEM M = TimKiem(b, k, l, N);
	cout << "\n\nDiem gan nhat :";
	Xuat(M);

	cout << "\n\n\nKet thuc";
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap hoanh do: ";
	cin >> P.x;
	cout << "Nhap tung do: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "(" << P.x << "," << P.y << ")";
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}

void Nhap(DIEM a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	srand(time(NULL));
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			a[i][j].x = rand() / (RAND_MAX / 200) - 100;
			a[i][j].y = rand() / (RAND_MAX / 200) - 100;
		}
}

void Xuat(DIEM a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << setw(10) << "(" << a[i][j].x << "," << a[i][j].y << ")";
		cout << endl;
	}
}

DIEM TimKiem(DIEM a[][100], int m, int n, DIEM P)
{
	DIEM temp = a[0][0];
	float lc = KhoangCach(temp, P);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			float t = KhoangCach(a[i][j], P);
			if (t > 0 && lc > t)
			{
				lc = t;
				temp = a[i][j];
			}
		}
	return temp;
}