#include <stdio.h>
#include <stdlib.h>
void nhapmang (int a[],int n);
void xuatmang (int a[],int n);
void xoa(int a[],int &n,int vt);
main()
{
	int n,vt,x;
	int *a;
	do
	{
		printf("Nhap so phan tu n:");
		scanf("%d",&n);
		if(n<0)
			printf("Nhap n >0\n");
	}while (n<0);
	a=(int *)malloc(n*sizeof(int));
	printf("\tNhapMang\n");
	nhapmang(a,n);
	printf("\tXuatMang\n");
	xuatmang(a,n);
	printf("\nNhap vt can xoa:");scanf("%d",&vt);
	xoa(a,n,vt);
	printf("\tXuatMang\n");
	xuatmang(a,n);
	printf("\n%5d",a[4]);
	free(a);
}
void nhapmang (int a[],int n)
{
	for(int i=0;i<n;i++)
		{
			printf("a%d=",i);
			scanf("%d",&a[i]);
		}
}
void xuatmang (int a[],int n)
{
	for(int i=0;i<n;i++)
		printf("%5d",a[i]);
}
void xoa(int a[],int &n,int vt)
{
	for(int i=vt;i<n-1;i++)
		a[i]=a[i+1];
	realloc(a, (n-1) * sizeof(int));
	n--;	
}