#include <stdio.h>
#include<math.h>
int main(int argc, char *argv[])
{
	int p, a, b, c, S, Cv;
	printf("Nhap so a:");scanf("%d", &a);
	printf("Nhap so b:");scanf("%d", &b);
	printf("Nhap so c:");scanf("%d", &c);
	
	p= (a+b+c)/2;
	
	
	S= sqrt(p*((p-a)*(p-b)*(p-c)));
	printf("Dien tich cua tam giac la:%d\n", S);
	
	Cv= a+b+c;
	printf("Chu vi tam giac la:%d\n", Cv);
	
	return 0;
}