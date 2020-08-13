#include <stdio.h>
//Bai toan tinh tien dien
int main(int argc, char *argv[])
{
	int kW, tongtien;
	printf("Nhap so kW:"); scanf("%d", &kW);
	if(kW <= 100)
		tongtien = kW * 950;
	else
		if(kW <= 150)
		tongtien = 100 * 950 + (kW - 100) * 1250;
	else
		if(kW <= 200)
		tongtien = 100 * 950 + 50 * 1250 + (kW - 150) * 1350;
	else
		tongtien = 100 * 950 + 50 * 1250 + 50 * 1350 +(kW - 200) * 1550;
		
	printf("Tong tien cua %d la %d\n", kW, tongtien);		
	
	return 0;
}

//95 62.5 40.5