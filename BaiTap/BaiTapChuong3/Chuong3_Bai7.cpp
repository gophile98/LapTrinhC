#include <stdio.h>
//Uoc chung lon nhat
int USCLN(int a, int b) {
    if (b == 0) return a;
    return USCLN(b, a % b);
}
//Boi chung nho nhat
int BSCNN(int a, int b) {
    return (a * b) / USCLN(a, b);
}
//main
int main(int argc, char *argv[])
{
	int a, b;
    printf("Nhap so nguyen duong a = ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong b = ");
    scanf("%d", &b);
    
    // tinh USCLN cua a và b
    printf("USCLN cua %d va %d la: %d\n", a, b, USCLN(a, b));
	
	// tinh BSCNN cua a và b
    printf("USCLN cua %d va %d la: %d\n", a, b, BSCNN(a, b));
    
	return 0;
}