#include <stdio.h>
int main(int argc, char *argv[])
{
	int chon = 0;
	do
	{
		
		printf("\t\t|-------Menu------|\n");
		printf("\t\t|  1. Tinh tong.  |\n");
		printf("\t\t|  2. Tinh hieu.  |\n");
		printf("\t\t|  3. Tinh tich.  |\n");
		printf("\t\t|  4. Tinh thuong.|\n");
		printf("\t\t|  5. Thoat.      |\n");
		printf("\t\t|-----------------|\n");
		printf("\nChon chuc nang: ");
		
		scanf("%d", &chon);
		switch(chon)
		{
			case 1: 
			{
				int a, b, tong;
				printf("Tinh tong hai so a va b.\n");
				printf("Nhap a: "); scanf("%d", &a);
				printf("Nhap a: "); scanf("%d", &b);
				tong = a + b; 
				printf("Tong cua %d va %d la:%d\n", a, b, tong);
				break;
			}
			case 2:
			{
				int a, b, hieu;
				printf("Tinh hieu hai so a va b.\n");
				printf("Nhap a: "); scanf("%d", &a);
				printf("Nhap a: "); scanf("%d", &b);
				hieu = a - b; 
				printf("Hieu cua %d va %d la:%d\n", a, b, hieu);
				break;
			}
			case 3:
			{
				int a, b, tich;
				printf("Tinh tich hai so a va b.\n");
				printf("Nhap a: "); scanf("%d", &a);
				printf("Nhap a: "); scanf("%d", &b);
				tich = a * b; 
				printf("Tich cua %d va %d la:%d\n", a, b, tich);
				break;
			}
			case 4:
			{
				int a, b, thuong;
				printf("Tinh thuong hai so a va b.\n");
				printf("Nhap a: "); scanf("%d", &a);
				printf("Nhap a: "); scanf("%d", &b);
				thuong = a / b; 
				printf("Thuong cua %d va %d la:%d\n", a, b, thuong);
				break;
			}
			default:
			break;
		}
		
	}while(chon != 5);
	
}