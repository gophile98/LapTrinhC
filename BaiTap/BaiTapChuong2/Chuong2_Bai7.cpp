#include <stdio.h>
int main(int argc, char *argv[])
{
	int a, b, c;
	printf("Nhap so nguyen a la:"); scanf("%d", &a);
	printf("Nhap so nguyen b la:"); scanf("%d", &b);
	printf("Nhap so nguyen c la:"); scanf("%d", &c);
	
	if(a+b>c && b+c>a && a+c>b)
	{
		if(a==b&& b==c && c==a)
		{
			printf("Day la tam giac deu.\n", a, b, c);
		}
		else
		if(a==b || a==c )
		{
			printf("Day la tam giac can.\n", a, b, c);
		}
		else
		{
			printf("Day la am giac thuong.\n",a,b,c);
		}
	}else
	{
		printf("Ba canh nhap vao khong phai tam giac.\n", a,b,c);
	}
	return 0;
}