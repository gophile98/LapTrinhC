#include <stdio.h>
int main(int argc, char *argv[])
{
	//Bai 11
	int a, b;
	
	
	printf("Nhap so a:"); scanf("%d", &a);
	printf("Nhap so b:"); scanf("%d", &b);
		
	int tam=a;
	a=b;
	b=tam;
	
	printf("So sau khi hoan vi la:\na = %d\nb = %d\n", a, b);
	
	return 0;
}