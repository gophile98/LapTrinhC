#include <stdio.h>
int HoanVi(int x, int y);
int main(int argc, char *argv[])
{
	int a, b;
	printf("Nhap so a:"); scanf("%d", &a);
	printf("Nhap so b:"); scanf("%d", &b);
	
	HoanVi(a, b);
	printf("So a sau khi hoan vi la:%d\n", a);
	printf("So b sau khi hoan vi la:%d\n", b);
	
	
	return 0;
}
	int HoanVi(int x, int y)
	{
		int temps;
		temps = x;
		x = y;
		y = temps;
	}