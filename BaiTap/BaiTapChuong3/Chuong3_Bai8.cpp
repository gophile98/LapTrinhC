#include <stdio.h>
int main(int argc, char *argv[])
{
	int n, tong;
	tong = 0;
	do
	{
		
		printf("Nhap gia tri n:");  scanf("%d", &n);
		tong = tong +n;
	}while(n!=0);
	printf("\n\nTong cac so la:%d\n", tong);
	return 0;
}