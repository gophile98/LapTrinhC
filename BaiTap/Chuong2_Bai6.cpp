#include <stdio.h>
int main(int argc, char *argv[])
{
	int  Temp;
	printf("Nhap so nguyen Temp la:"); scanf("%d", &Temp);
	
	if(Temp<0)
	{
		printf("Then Freezing weather.\n", Temp);
		
	}
	else
	if(Temp<=10)
	{
		printf("Then Very Cold weather.\n", Temp);
		
	}
	else
	if(Temp<=20)
	{
		printf("Then Cold weather.\n", Temp);
		
	}
	else
	if(Temp<=30)
	{
		printf("Then Normal in Temp.\n", Temp);
	
	}
	else
	if(Temp<=40)
	{
		printf("Then Its Host.\n", Temp);
	
	}
	else
	if(Temp>=40)
	{
		printf("Then Its Very Host.\n", Temp);
		
	}
	return 0;
}