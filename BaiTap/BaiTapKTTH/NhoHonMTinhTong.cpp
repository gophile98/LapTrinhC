#include <stdio.h>
#include <stdlib.h>
void bt2(int n,int a[]);
void xuatmangnho(int m, int a[]);
int main(int argc, char *argv[])
{
	int n,s, m,a[1000];
		printf("\nNhap n = ");
		scanf("%d",&n);
		bt2(n,a);
		printf("\n");
		xuatmangnho(m, a);
	//	tongso(s, a);
		return 0;
}
void bt2(int n,int a[])
{
	for(int i=0;i<n;i++) {
		a[i] = rand()%101;
	}
	printf("\nMang vua nhap la: ");
	for(int i=0;i<n;i++) {
		printf("\na[%d] = %d",i,a[i]);
	}
}
void xuatmangnho(int m, int a[])
{
	int tong=0;
	int i;
	printf("Nhap m:"); scanf("%d", &m);
	printf("Cac phan tu nho hon hoac bang %d la:\n", m);
	for(i = 0; i <m; i++){
		if(a[i]<=m){
			printf("a[%d] = %d\n", i, a[i]);
			tong+=a[i];
		}
	}	
		printf("Tong la: %d\n", tong, a[i]);
}
