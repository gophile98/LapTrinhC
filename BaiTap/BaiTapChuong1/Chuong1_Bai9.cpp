#include <stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	//dien tich chu vi tam giac vuong
	
	float a, b , dientich, chuvi;
	
	printf("Nhap so a:"); scanf("%f", &a);
	printf("Nhap so b:"); scanf("%f", &b);
	
	dientich= (a*b)/2;
	printf("Dien tich tam giac vuong la: %f\n", dientich);
	
	chuvi= sqrt(pow(a, 2)+pow(b, 2));
	printf("Canh huyen tam giac vuong la: %f\n", chuvi);
		
	return 0;
}