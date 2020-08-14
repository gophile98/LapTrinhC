#include <stdio.h>
void minmax(int x);
int main(int argc, char *argv[])
{
	int n;
	printf("Nhap n: "); scanf("%d", &n);
	minmax(n);
	
	return 0;
}
void minmax(int x)
{
	int sodu, min, max, tam;
	min = 9;
	max = 0;
	tam = x;
	do
	{
		sodu = x % 10;
		x = x /10;
		if(sodu < min)
		min =  sodu;
		if(sodu > max)
		max = sodu;
		
	}	while (x > 0);
	printf("Chu so nho nhat trong so nguyen %d la: %d\n", tam, min);
	printf("Chu so lon nhat trong so nguyen %d la: %d\n", tam, max);
}