#include <stdio.h>
int main()
{
	//tinh chu vi dien tich hinh chu nhat
	int a, b, chuvi, dientich;
	
	printf("Nhap so a:");
	scanf("%d", &a);
	
	printf("Nhap so b:");
	scanf("%d", &b);
	
	//tinh chu vi
	chuvi= (a+b)*2;
	printf("Chu vi la:%d", chuvi);
	printf("\n");
	
	//tinh dien tich
	dientich= a*b;
	printf("Dien tich la:%d", dientich);
	printf("\n");	
	
	return 0;
}