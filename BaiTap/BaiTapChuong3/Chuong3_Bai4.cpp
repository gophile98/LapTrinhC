#include <stdio.h>
int main(int argc, char *argv[])
{
	int n;
	printf("Nhap n:");
	scanf("%d", &n);	
	for (int i=1; i<=n;i++){
		
		if(n%i==0)
		{			
			printf("Uoc chung lon %d nhat la:%d\n", n, i);	
		}		
	}
	return 0;
}