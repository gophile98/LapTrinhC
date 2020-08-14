#include <stdio.h>
//Viet chuong trinh nhap 2 so nguyen duong tim USCLN, BSCNN
//UCLN
int UCLN(int a, int b){
	if(b == 0)return a;
	return UCLN(b, a % b);
}
//BCNN
int BSCNN (int a, int b){
	return (a * b)/UCLN(a, b);
}
int main(int argc, char *argv[])
{
	int a, b;
	printf("Nhap so a:"); scanf("%d", &a);
	printf("Nhap so b:"); scanf("%d", &b);
	
	printf("Uoc so chung lon nhat la:%d\n", a, b, UCLN(a, b));
	
	printf("Boi so chung nho nhat la:%d\n", a, b, BSCNN(a, b));
	
		
	return 0;
}