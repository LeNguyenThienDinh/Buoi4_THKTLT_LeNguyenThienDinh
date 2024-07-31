#include <stdio.h>
#include <conio.h>
#include <math.h>
int Tongdequy(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n + Tongdequy(n - 1);
	}

}
int khudequy(int n) 
{
	int tong = 0;
	for (int i = 1; i <= n; i++)
	{
		tong += i;
	}
	return tong;
}

int main()
{
	int n;
	printf("Nhap so nguyen duong n: ");
	scanf("%d", &n);

	if (n <= 0)
	{
		printf("Vui long nhap so nguyen duong lon hon 0.\n");
		return 1;
	}

	int ketqua_dequy = Tongdequy(n);
	int ketqua_khudequy = khudequy(n);

	printf("Tong S(n) tinh bang de quy: %d\n", ketqua_dequy);
	printf("Tong S(n) tinh bang khong de quy: %d\n", ketqua_khudequy);

	printf("Nhan enter de thoat chuong trinh");
	getchar();
	getchar();

	return 0;
}