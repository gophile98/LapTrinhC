#include <stdio.h>
#include<math.h>
int giaithua(int n);
int isPrimeNumber(int n);
int main(int argc, char *argv[])
{
	int chon = 0;
	do
	{
		
		printf("\t\t|----Menu----|\n");
		printf("\t\t|  1. Bai 1. |\n");
		printf("\t\t|  2. Bai 2. |\n");
		printf("\t\t|  3. Bai 3. |\n");
		printf("\t\t|  4. Thoat. |\n");
		printf("\t\t|------------|\n");
		printf("\nChon chuc nang: ");
		
		scanf("%d", &chon);
		switch(chon)
		{
			 int n, tongtien;
			 double m, x, kq, s;
			case 1: 
			{
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
	
				break;
			}
			case 2:
			{
				do{
					printf("\nNhap n(n > 0): ");
					scanf("%d", &n);
					if(n <= 0)
					{
						printf("\n N phai > 0. Xin nhap lai !\n");
					}
				}while(n <= 0);
				printf("%d so nguyen to dau tien la: \n", n);
    			int dem = 0; 
    			int i = 2;  
    			while (dem < n) {
        			if (isPrimeNumber(i)) {
        			printf("%d\n", i);
            		dem++;
        }
       				 i++;
    }
				break;
			}
			case 3:
			{
				printf("Nhap vao mot so x: ");
       			scanf("%lf", &x);
       			printf("Nhap vao mot so n: ");
       			scanf("%lf", &m);
       				s = 1;                
       			for (n=1; n<=m; n++)  
       				s = s + (pow(x, n))/(giaithua(n));
       			printf("\nKet qua bai toan la %0.2f\n", s);
       				return 0;
				break;
			}
			
			default:
			break;
		}
		
	}while(chon != 4);
	
}
int isPrimeNumber(int n) {
    
    if (n < 2) {
        return 0;
    }


    int i;
    int squareRoot = sqrt(n);
    for (i = 2; i <= squareRoot; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
int giaithua(int n)
{
       if(n == 1)
	return 1;
	return n * giaithua(n - 1);             
}