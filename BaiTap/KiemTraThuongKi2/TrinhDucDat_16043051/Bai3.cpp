#include <stdio.h>
#include <math.h>

int giaithua(int n)
{
       if(n == 1)
	return 1;
	return n * giaithua(n - 1);             
}
int main()
{
    double m, x, kq, s;
       int n;
    
       printf("Nhap vao mot so x: ");
       scanf("%lf", &x);
       printf("Nhap vao mot so n: ");
       scanf("%lf", &m);
       s = 1;                
       for (n=1; n<=m; n++)  
       s = s + (pow(x, n))/(giaithua(n));
       printf("\nKet qua bai toan la %0.2lf\n", s);
       return 0;
} 