#include <stdio.h>
int main(int argc, char *argv[])
{
	int n, tongtien;
	printf("Nhap so MB su dung la: "); scanf("%d", &n);
	
	if(n <= 0)
		tongtien = n*0;
	else if(n <= 1024)
		tongtien = n* 40;
	else if(n <= 4096)
		tongtien = (1024 * 40)+ (n - 1024)*30;
	else if(n > 4096)
		tongtien = (1024 * 40) + (4 * 1024 * 30) + 20 * (n - (5 * 1024));

		
	printf("So tien phai tra cho %d MB la: %d\n", n, tongtien);
	
	return 0;
}