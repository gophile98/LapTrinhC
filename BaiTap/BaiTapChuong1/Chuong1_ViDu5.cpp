#include <stdio.h>
int main()
{
	//Bai chuyen gio phut giay
	
	int n, h, m, s;
	printf("Nhap n:"); scanf("%d", &n);
 
 	h=n/3600;
 
 	m=n%3600/60;
 	
 	
 	s=n%60;
  	
	  
	printf("Ket qua %d cua giay la %dh: %dm: %ds\n",n, h, m, s);	
	
	return 0;
}