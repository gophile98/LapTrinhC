#include<stdio.h>
#include<conio.h>
using namespace std;
void nhapmang(int a[], int &n);
void xuatmang(int a[],int n);
void sapxeptang(int a[],int n);
void sapxepsochantang(int a[],int n);

int main()
{ 
 int a[100],n;
 nhapmang(a,n);
 xuatmang(a,n);
 sapxepsochantang(a,n);
 return 0;
}
void nhapmang(int a[], int &n)
 { printf("nhap so phan tu :" );
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   { 
    printf(" phan tu thu %d :",i);
     scanf("%d",&a[i]);
   }
 }
void xuatmang(int a[],int n)
  {
   
   for(int i=0;i<n;i++)
     {
       printf(" %4d ",a[i]);
     }
  }
void sapxeptang(int a[],int n)
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
 for(int i=0;i<n;i++)
     {
       printf(" %4d ",a[i]);
     } 
}  
void sapxepsochantang(int a[],int n)
{
 int b[50],dem=0;
 for(int i=0;i<n;i++)
 {
 if(a[i]%2==0) 
 {
 b[dem]=a[i];
 dem++;
 } 
 }
 printf("\n mang so chan la: "); 
 xuatmang(b,dem);
 printf("mang so chan tang dan la: ");
 sapxeptang(b,dem); 
}