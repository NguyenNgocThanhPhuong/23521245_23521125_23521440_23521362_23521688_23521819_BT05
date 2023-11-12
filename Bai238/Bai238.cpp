#include <iostream>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);

void Nhap(SOPHUC[][100], int&, int&);
void Xuat(SOPHUC[][100], int, int);

bool ktDong(SOPHUC[][100], int, int, int);
int DemDong(SOPHUC[][100], int, int);

int main()
{
	SOPHUC b[100][100];
	int k, l;
	cout << "Nhap cac so phuc: ";
	Nhap(b, k, l);

	cout << "\nCac so phuc vua nhap:\n";
	Xuat(b, k, l);

	cout << "So dong thoa dieu kien: " << DemDong(b, k, l);

	cout << "\n\n\nKet thuc!!!";
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap phan thuc: ";
	cin >> x.Thuc;
	cout << "Nhap phan ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << x.Thuc << "+ (" << x.Ao << ")i";
}

void Nhap(SOPHUC a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "\nNhap a[" << i << "][" << j << "]:\n";
			Nhap(a[i][j]);
		}
}

void Xuat(SOPHUC a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "A[" << i << "][" << j << "]: ";
			Xuat(a[i][j]);
			cout << endl;
		}
}

bool ktDong(SOPHUC a[][100], int m, int n, int d)
{
	int flag = true;
	for (int j = 0; j < n; j++)
		if (a[d][j].Thuc * a[d][j].Ao >= 0)
			flag = false;
	return flag;
}

int DemDong(SOPHUC a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		if (ktDong(a, m, n, i))
			dem++;
	return dem;
}