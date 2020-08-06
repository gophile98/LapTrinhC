#include <stdio.h>
int main(int argc, char *argv[])
{
	int nam, chi, can;
	printf("Nhap nam:"); scanf("%d",&nam);
	if(nam>=1990){
		chi= nam%10;
		switch(chi){
			case 0:
			printf("Canh");
			break;
			
			case 3:
			printf("Nam am lich la: Quy ");
			break;		
		}
	}
	can = nam%12;
	switch(can){
		case 0:
		printf("Than");
		break;
		
		case 9:
		printf("Ty\n");
	}	
	if(nam<1990)
	
	{
		printf("Nam khong chinh xac.\n");
	}
	return 0;
}