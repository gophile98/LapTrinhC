#include<stdio.h>
#include<math.h>
 
int isPrimeNumber(int n) {
    
    if (n < 2) {
        return 0;
    }


    int i;
    int squareRoot = sqrt(n);
    for (i = 2; i <= squareRoot; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
 
int main() {
	int n;
do

	{
		
		printf("\nNhap n(n > 0): ");
		scanf("%d", &n);
		if(n <= 0)
		{
			printf("\n N phai > 0. Xin nhap lai !\n");
		}
	}while(n <= 0);
    
    printf("%d so nguyen to dau tien la: \n", n);
    int dem = 0; 
    int i = 2;  
    while (dem < n) {
        if (isPrimeNumber(i)) {
            printf("%d\n", i);
            dem++;
        }
        i++;
    }
}