#include <stdio.h>
int main()
{
	//Tinh tien khach san
	
	int songay, tuan, ngayle, tongtien;
	printf("Nhap so ngay:"); scanf("%d", &songay);
	
	tuan= songay/7;
	ngayle=songay%7;
	
	tongtien=tuan*700000+ngayle*120000;
 	
  	
	  
	printf("Tong tien la:%d\n",tongtien);	
	
	return 0;
}