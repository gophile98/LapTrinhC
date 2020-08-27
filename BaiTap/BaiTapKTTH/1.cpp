#include <stdio.h>
#include <stdlib.h>
void bt2(int n,int a[]);
void SapXepTang(int a[],int n);
void bai3SoLekoAmTangDan(int a[],int n);
int main(int argc, char *argv[])
{
	int n,b, a[1000];
					printf("\nNhap n = ");
					scanf("%d",&n);
				bt2(n,a);
					printf("\n");
					  bai3SoLekoAmTangDan(a,n);
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

void SapXepTang(int a[],int n)
{
 for(int i=0;i<n-1;i++)
  for(int j=i+1;j<n;j++)
   {
   if(a[i]>a[j])
     {
      int temp=a[i];
      a[i]=a[j];
      a[j]=temp;
   }
   
 }
 printf("mang sap tang la: \n"); 

}

void bai3SoLekoAmTangDan(int a[],int n)
{
 int b[50];
 int dem=0;
 for(int i=0;i<n;i++)
 {
 if(a[i]% 2!=0 && a[i]>0)
 {
 b[dem]=a[i];
 dem++; 
  } 
 }
 //printf("\n mang cac so le khong am la: ");

 SapXepTang(b,dem);
}