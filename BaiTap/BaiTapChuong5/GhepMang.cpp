#include <stdio.h>

void NhapMang(int A[], int &n)
{
   printf("Nhap n = ");
   scanf("%d",&n);
   for(int i = 0; i<n ; i++)
   {
      printf("Phan tu %d =",i);
      scanf("%d", &A[i]);
   }
}

void XuatMang(int A[], int n)
{
   printf("\n");
   for(int i = 0; i<n ; i++)
   {
      printf("%d\t",A[i]);
   }

}

void Ghep(int A[], int n, int B[], int m, int C[], int &h)
{
   h = m +n;
   for(int i = 0; i<h; i++)
   if(i<n)
      C[i] = A[i];
   else
      C[i] = B[i-n];
      
}
int main()
{
   int A[100],B[100],C[100], n, m,h;
   printf("Nhap mang A\n");
   NhapMang(A,n);
   printf("Nhap mang B\n");
   NhapMang(B,m);
   Ghep(A,n,B,m,C,h);
   printf("\nMang C");
   XuatMang(C,h);
   printf("\n");
   return 0;
}