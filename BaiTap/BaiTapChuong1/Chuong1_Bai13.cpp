#include <stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	//Bai 12
	float x,y, kq;
	
	
	printf("Nhap so x:"); scanf("%f", &x);
	printf("Nhap so y:"); scanf("%d", &y);
	
	kq = (sqrt(1+pow(x, 2)+pow(y, 2)))/(3+pow(x+y, 2));
	
	printf("Ket qua la:%f\n", kq);
	
	return 0;
}