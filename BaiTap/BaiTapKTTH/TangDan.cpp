#include<stdio.h>
#include<conio.h>
using namespace std;
void nhap(int a[], int &n)
{
 printf("nhap so luong phan tu: ");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
 printf("phan tu thu %d :",i);
 scanf("%d",&a[i]);
 }
}
void xuat(int a[],int n)
{
 for(int i=0;i<n;i++)
 {
 printf("%d \t",a[i]);
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
 printf("\n mang sap tang la: "); 
 xuat(a,n); 
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
 xuat(b,dem);
 SapXepTang(b,dem);
}
int main()
{
 int a[50],n;
 nhap(a,n);
 xuat(a,n);
 //SapXepTang(a,n);
 bai3SoLekoAmTangDan(a,n);
 return 0;
 
}
