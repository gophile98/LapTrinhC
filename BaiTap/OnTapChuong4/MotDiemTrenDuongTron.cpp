#include <stdio.h>
#include <math.h>
//Nhap mot diem xet vi tri tuong doi cua duong tron
int main(int argc, char *argv[])
{
	int x, y, r;
	float toado;
	printf("Nhap toa do diem x = "); scanf("%d", &x);
	printf("Nhap toa do diem y = "); scanf("%d", &y);
	printf("Nhap ban kinh r = "); scanf("%d", &r);
	
	toado = sqrt(pow(x, 2) + pow(y, 2));
	if(toado = r)
		printf("Toa do (%d, %d) nam tren duong tron.\n", x, y);
	else if(toado > r)
		printf("Toa do (%d, %d) nam ngoai duong tron.\n", x, y);
	else
		printf("Toa do (%d, %d) thuoc duong tron.\n", x, y);
	
	
	return 0;
}