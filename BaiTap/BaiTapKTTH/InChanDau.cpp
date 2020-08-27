#include<stdio.h>
#include<conio.h>
#define MAX 100
void nhapmang(int a[], int &n);
void xuatmang(int a[], int n);
int ChanDau(int a[], int n);
int main()
{
	int a[MAX],n;
	nhapmang(a,n);
	printf("\nNoi dung cua mang");
	xuatmang(a,n);
	if(ChanDau(a,n)==-1)
		printf("\nMang khong co so chan -1");
	else
		printf("\nGia tri chan dau tien: %d",ChanDau(a,n));	
	getch();
}
void nhapmang(int a[], int &n)
{
	do
	{
		printf("\nSo phan tu trong mang ");
		scanf("%d",&n);
	}while(n<=0 && n>100);
	for(int i=0 ; i<n ; i++ )
	{
		printf("\nSo phan tu a[%d] la: ",i);
		scanf("%d",&a[i]);
	}
}
void xuatmang(int a[], int n)
{
	for(int i=0 ; i<n ; i++ )
		printf("%4d",a[i]);
}

int bt4(int n,int a[])
{
	for(int i=0;i<n;i++) {
		if(a[i]%2==0)
			return a[i];
	}
	return -1;
}