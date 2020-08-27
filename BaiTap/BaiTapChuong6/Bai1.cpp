#include <stdio.h>
#include <stdlib.h>
struct Monhoc
{
	int mamon, sotc;
	char tenmon[50];
	float diem;
	
		
};
int main(int argc, char *argv[])
{
	Monhoc toan, ly, hoa;
	float tb;
	
	//Nhap thong tin mon hoc
	printf("\nNhap thong tin mon Toan.\n");
	printf("Nhap ma mon hoc:"); scanf("%d", &toan.mamon);
	fflush(stdin);
	printf("Nhap ten mon:"); gets(toan.tenmon);
	fflush(stdin);
	printf("Nhap diem:"); scanf("%f", &toan.diem);
	fflush(stdin);
	printf("Nhap so TC:"); scanf("%d", &toan.sotc);
	fflush(stdin);
	printf("\n\n");
	
	printf("MaMH\tTenMH\tDiemMH\tSoTC\n");
	printf("%d\t%Toan\t%0.1f\t%d\n", toan.mamon, toan.diem, toan.sotc);
	
	return 0;
}