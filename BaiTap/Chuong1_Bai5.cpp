#include <stdio.h>
int main()
{
	float chieucao, cannang, BMI;
	
	printf("Nhap chieu cao:");
	scanf("%f", &chieucao);

		
	printf("Nhap can nang:");
	scanf("%f", &cannang);
	
	
	BMI= cannang/(chieucao*2);
	printf("BMI cua ban la:%f", BMI);
	printf("\n");
		
	return 0;
}