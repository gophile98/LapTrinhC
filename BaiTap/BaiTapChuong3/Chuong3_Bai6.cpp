#include <stdio.h>
int main(int argc, char *argv[])
{
	int n, dem;
	dem=0;
	printf("Nhap n:");
	scanf("%d", &n);	
	for (int i=1; i<=n;i++)
		if(n%i == 0)
		dem= dem+1;
		if(dem == 2)					
			printf("%d la so nguyen to.\n",n);			
		else 
			printf("%d khong la so nguyen to.\n",n);	
				
	
	return 0;
}