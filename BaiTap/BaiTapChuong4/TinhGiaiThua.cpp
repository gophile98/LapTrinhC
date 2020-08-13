#include <stdio.h>
//Tinh giai thua
int GiaiThua(int n)
{
	if(n == 1)
	return 1;
	return n * GiaiThua(n - 1);
}

int main(int argc, char *argv[])
{
	int n;
	printf("Nhap gia tri n: "); scanf("%d", &n);
	printf("Giai thua cua %d la: %d\n", n, GiaiThua(n));
	return 0;
}