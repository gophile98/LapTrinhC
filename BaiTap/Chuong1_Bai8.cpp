#include <stdio.h>
#include <math.h>
int main()
{
	//Tim khoang cach 2 diem
	float x,x1,y,y1,khoangcach;
	printf("Nhap diem toa do x:");
	scanf("%f", &x);
	
	printf("Nhap diem toa do x1:");
	scanf("%f", &x1);
	
	printf("Nhap diem toa do y:");
	scanf("%f", &y);
	
	printf("Nhap diem toa do y1:");
	scanf("%f", &y1);
	
	khoangcach=sqrt( pow((x1-x),2)+pow((y1-y), 2));

	printf("Khoang cach la: %f\n", khoangcach);
	return 0;
}