#include <stdio.h>
#include <math.h>
//Bai 13
int main(int argc, char *argv[])

{
	
	//cau s1.
/*	float  s,tb, n, s1;
	printf("Nhap n:"); scanf("%f", &n);
	s=0;
	if(n>=1){
		
	
	for (int i=1;i<=n; i++ ){
		s= (s+i);	
		
		s1=s/n;
	}
	printf("Tong la: %0.1f\n\n",s1 );
	}
	else printf("Nhap sai vui long nhap lai.\n");	
	
	return 0;
*/
	//cau S2
/*	float s,tb, n, s1;
	printf("Nhap n: "); scanf("%f", &n);
	s=0;
	if(n>=1){
		
	
	for (int i=1;i<=n; i++ ){
		s= s+ pow(i, 2);	
		s1 = sqrt (s);
	}
	printf("Tong la: %0.4f\n\n",s1 );	
	}
	else printf("Nhap sai vui long nhap lai.\n");	
	
	return 0;
	*/
	
	//cau S3
	int s,tb, n, s1;
	printf("Nhap n:"); scanf("%d", &n);
	s=0;
	for (int i=1;i<=n; i++ ){
		
		s= n* (n+1);
		s1 = s*(n+2);
	}
	printf("Tong la: %d\n\n",s1 );	
	
	return 0;s
	
	
}
