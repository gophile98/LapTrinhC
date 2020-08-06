#include <stdio.h>
int main(int argc, char *argv[])
{
	int a, b, c;
	printf("Nhap so nguyen a la:"); scanf("%d", &a);
	printf("Nhap so nguyen b la:"); scanf("%d", &b);
	printf("Nhap so nguyen c la:"); scanf("%d", &c);
	
	
	int max=a;
	if(b>max){
		
		max=b;
	}
	if(c>max){
		
		max=c;
	}
	printf("So lon nhat la:%d\n", max, a, b, c);
	
	return 0;
}