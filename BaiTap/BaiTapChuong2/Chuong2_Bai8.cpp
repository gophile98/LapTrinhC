#include <stdio.h>
int main(int argc, char *argv[])
{
	//Tinh tien dien su dung
	
	int sodien, tongtien;
	printf("Nhap so nguyen so dien la la:"); scanf("%d", &sodien);

	if(sodien<100)
	{
		tongtien= sodien*950; 
		printf("Tong tien phai tra la:%d\n", tongtien);
	}
	else
	if(sodien<150)
	{
		tongtien=sodien*1250;
		printf("Tong tien phai tra la:%d\n", tongtien);
	}
	else
	if(sodien<200)
	{
		tongtien=sodien*1350;
		printf("Tong tien phai tra la:%d\n", tongtien);
	}
	else
	if(sodien>200)
	{
		tongtien=sodien*1550;
		printf("Tong tien phai tra la:%d\n", tongtien);
	}
	
	return 0;
}