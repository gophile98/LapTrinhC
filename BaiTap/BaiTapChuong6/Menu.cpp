#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void nhapmang(int a[], int n)
	{
		for(int i=0;i<n;i++)
		{
			a[i]=rand()%101;
		}
	}	
void xuatmang(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%3d",a[i]);
	}
}
int main(int argc, char *argv[])
{
	int a[100],n,chon;
	do
	{
		printf("\nMENU CHON CHUONG TRINH DE THUC HIEN\n");
		printf("\nNhap 1: De thuc hien cau 1.");
		printf("\nNhap 2: De thuc hien cau 2.");
		printf("\nNhap 3: De thuc hien cau 3.");
		printf("\nNhap 4: De thuc hien cau 4.");
		printf("\nNhap 0: De ket thuc.");
		printf("\nNhap vao mot so: ");
		scanf("%d",&chon);	
		switch(chon)
		{
			case 1:
			{
				printf("\nNhap vao so phan tu mang: ");
				scanf("%d",&n);
				nhapmang(a,n);			
				break;	
			}
			case 2:
			{
				printf("\nXuat mang vua nhap:\n");
				xuatmang(a,n);
				break;	
			}
			case 3:
			{
			
				break;	
			}
			case 4:
			{
			
				break;	
			}
			default:
				break;
		}

	}while(chon!=0);

	printf("\n");
	return 0;
}