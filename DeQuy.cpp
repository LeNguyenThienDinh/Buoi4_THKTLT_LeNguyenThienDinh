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
double Tongdequy_2(int n) 
{
	if (n == 1)
		return 0.5;
	return (double)n / (n + 1) + Tongdequy_2(n - 1);
}

double khudequy_2(int n) 
{
	double sum = 0;
	for (int i = 1; i <= n; i++) 
	{
		sum += (double)i / (i + 1);
	}
	return sum;
}

int main() {
	int n;
	printf("Nhap so nguyen duong n: ");
	
	scanf("%d", &n);

	if (n <= 0) {
		printf("Vui long nhap so nguyen duong lon hon 0.\n");
		return 1;
	}

	int chon;
	printf("Chon bieu thuc de tinh (1-5): ");
	scanf("%d", &chon);

	switch (chon) {
	case 1:
		printf("Tong S(n) tinh bang de quy: %d\n", Tongdequy(n));
		printf("Tong S(n) tinh bang khong de quy: %d\n", khudequy(n));
		break;
	case 2:
		printf("Tong S(n) tinh bang de quy: %.6f\n", Tongdequy_2(n));
		printf("Tong S(n) tinh bang khong de quy: %.6f\n", khudequy_2(n));
		break;
	
	default:
		printf("Lua chon khong dung!\n");
		break;
	}

	printf("Nhan enter de thoat chuong trinh");
	getchar();
	getchar();

	return 0;
}