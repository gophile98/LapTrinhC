#include <stdio.h>
int main(int argc, char *argv[])
{
	float x, tongtien;
	
	printf("Nhap so dia can mua:"); scanf("%f", &x);
	if (x>10)
	{
		tongtien= (x*5000)-((x*5000)*0.1);
		printf("Tong tien la: %f\n", tongtien);
	}
	else
	{
		tongtien= (x*5000);
		printf("Tong tien la: %f\n", tongtien);
	}
	return 0;
}