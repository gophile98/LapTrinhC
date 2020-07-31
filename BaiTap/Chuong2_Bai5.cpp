#include <stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	int a, b, c, x1, x2;
	printf("Nhap so nguyen a la:"); scanf("%d", &a);
	printf("Nhap so nguyen b la:"); scanf("%d", &b);
	printf("Nhap so nguyen c la:"); scanf("%d", &c);
	if(a==0){
		printf("Nhap sai vui long nhap lai.\n", a);
		return 1;
	}
	
	float denta= b*b - 4*a*c;
	
	
	if(denta<0)
		
		printf("Phuong trinh vo nghiem.\n");
	
	if(denta>0)
	{
		x1=((-b)+sqrt(denta))/(2*a);
		x2=((-b)-sqrt(denta))/(2*a);
		
		printf("Phuong trinh co 2 nghiem la:x1=%d va x2=%d.\n", x1, x2);
	}
	
	if(denta==0)
	{
		x1=x2=-b/(2*a);
		printf("Phuong trinh co nghiem duy nhat la x1=x2=%d.\n", x1,x2);
	}
	return 0;
}