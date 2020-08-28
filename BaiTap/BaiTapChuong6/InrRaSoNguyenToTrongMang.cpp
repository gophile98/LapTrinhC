#include <stdio.h>
#include <math.h>
#include <stdlib.h>

bool IsPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int PrimeCount(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (IsPrime(a[i]))
        {
            count++;
        }
    }
    return count;
}
void PrintPrime(int a[], int n)
{
	int tong = 0;
    for (int i = 0; i < n; i++)
    {
        if (IsPrime(a[i]))
        {
            printf("%d\t", a[i]);
        }
        tong+=a[i];
    }
}

void NhapMang(int n, int a[])
{
	for(int i=0;i<n;i++) {
		a[i] = rand()%101;
	}
	printf("\nMang vua nhap la: ");
	for(int i=0;i<n;i++) {
		printf("\na[%d] = %d",i,a[i]);
	}
}
int main(int argc, char *argv[])
{
	
	int n,a[1000];
	printf("\nNhap n: n = ");
	scanf("%d",&n);
	NhapMang(n,a);
	printf("\n");
	int primeCount = PrimeCount(a, n);
    printf("\nSo luong so nguyen to la %d", primeCount);
    if(primeCount > 0){
        printf("\nDanh sach so nguyen to:\n ");
        PrintPrime(a, n);
       
        
    }
    //printf("\nTong cac so nguyen to la: %d\n ", tong);
	return 0;
}