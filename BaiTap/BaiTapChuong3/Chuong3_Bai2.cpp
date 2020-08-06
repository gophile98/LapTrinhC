#include <stdio.h>
int giaithua(int n){
	if ( n == 1 )
	return 1;
	return n * giaithua(n - 1);
}
int main(int argc, char *argv[])
{
	int n;
	printf("Nhap n giai thua:"); scanf("%d", &n);
	
	printf("Giai thua la:%d\n", giaithua(n),n);
	return 0;
}
