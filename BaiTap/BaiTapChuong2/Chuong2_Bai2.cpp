#include <stdio.h>
int main(int argc, char *argv[])
{
	int x, y;
	printf("Nhap so nguyen x la:"); scanf("%d", &x);
	printf("Nhap so nguyen y la:"); scanf("%d", &y);
	
	if(x%y==0)
		printf("%d la uoc so cua %d\n", x, y);
	else
		printf("%d khong phai la uoc so cua %d\n", x, y);	
	
	return 0;
}