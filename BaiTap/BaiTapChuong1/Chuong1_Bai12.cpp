#include <stdio.h>
int main(int argc, char *argv[])
{
	//Bai 12
	float x, kq;
	
	
	printf("Nhap so x:"); scanf("%f", &x);
	//printf("Nhap so b:"); scanf("%d", &b);
	
	kq = (x*x)/(1+((x*x)/(1+((x*x)/(1+(x*x))))));
	
	printf("Ket qua la:%f\n", kq);
	
	return 0;
}