#include<stdio.h>
#include <math.h>
//In ra cac so nguyen to tu 1 -> n, tinh tong.

int ktra(int n) {
    
    if (n < 2) {
        return 0;
    }
    
    int i;
    int so =  sqrt(n);
    for (i = 2; i <= so; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
 

int main() {
 int i, n, tong=0 ;
    printf("Nhap n = ");
    scanf("%d", &n);
    printf("Tat ca cac so nguyen to nho hon %d la: \n", n);
    if (n >= 2) {
        printf("%d\n", 2);
    }
    for (i = 3; i < n; i+=2) {
        if (ktra(i) == 1) {
            printf("%d\n", i);
        }
        tong+=i;       	
    }
    printf("Tong cac so nguyen to la: %d\n",tong);
}