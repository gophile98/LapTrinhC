#include <stdio.h>

int main(int argc, char *argv[])

{
	
	int  s,tb, n;
	printf("Nhap n:"); scanf("%d", &n);
	s=0;
	for (int i=1;i<=n; i++ ){
		s= s+i;	
		tb=s/n;
			
	}	
	printf("Tong la:%d\n", s);
	printf("Trung binh la:%d\n", tb);
	return 0;
}
/*{
	//Lam while
	int  s, n;
	printf("Nhap n:"); scanf("%d", &n);
	s=0;
	int i=1;
	while(i<=n){
		i=i+1;
		s=s+i;
	}
	printf("Tong la:%d\n", s);
	return 0;
}*/

/*{
	
	int  s, n;
	printf("Nhap n:"); scanf("%d", &n);
	s=0;
	int i=1;
	do{		
		i=i+1;
		s=s+i;
	}while(i<=n);
	printf("Tong la:%d\n", s);
	return 0;
}*/