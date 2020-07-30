#include <stdio.h>
int main()
{
	//chu vi dien tich hinh tron
	float a, chuvi, dientich;
	
	
	printf("Nhap so a:");
	scanf("%f", &a);
	
	printf("\n");
	//chu vi
	chuvi= 2*a*3.14;
	printf("Chu vi la:%f", chuvi);
	printf("\n");
	
	//dien tich
	dientich=3.14*a*a;	
	printf("Dien tich la:%f", dientich);
	printf("\n");
	
	return 0;
}