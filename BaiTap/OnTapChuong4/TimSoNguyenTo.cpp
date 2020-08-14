#include <stdio.h>
#include <math.h>
//Im ra so nguen to >=2
int main(int argc, char *argv[])
{
	int n, dem;
	do{
		
		printf("Nhap so nguyen duong n= "); scanf("%d", &n);
	}while(n<2);
	

	dem = 0;
	for(int i = 1; i <= n; i++)
	if(n % i == 0)
	dem = dem+1;
	if(dem == 2)
		printf("%d La so nguyen to.\n", n); 
	else
		printf("%d Khong la so nguyen to.(-_-)\n", n);
		return 0;
}