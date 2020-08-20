#include <stdio.h>
void NhapMang(int a[], int n);
void XuatMang(int a[], int n);
int TongChanLe(int a[], int n);
int Tong (int a[], int n);
int TimKiem(int a[], int n, int v);
int MAXMIN (int a[], int n);
const int MAX = 100;
int main(int argc, char *argv[])
{
	int chon = 0;
	
	do
	{
		
		printf("\t\t|---------Menu--------|\n");
		printf("\t\t|  1. Nhap mang.      |\n");
		printf("\t\t|  2. Xuat mang.      |\n");
		printf("\t\t|  3. Tim kiem.       |\n");
		printf("\t\t|  4. Tong mang.      |\n");
		printf("\t\t|  5. Tong chan va le.|\n");
		printf("\t\t|  6. Max va Min.     |\n");
		printf("\t\t|  7. Thoat.          |\n");
		printf("\t\t|---------------------|\n");
		printf("\nChon chuc nang: ");
		
		scanf("%d", &chon);
		switch(chon)
		{
			
	    			int arr[MAX];
    				int n;
			case 1: 
			{

   				 printf("\nNhap so luong phan tu: ");
    		do{
        		scanf("%d", &n);
        		if(n <= 0 || n > MAX){
        		printf("\nNhap lai so luong phan tu: ");
    			}
    		}while(n <= 0 || n > MAX);
    			printf("\n======NHAP MANG=====\n");
    			NhapMang(arr, n);
				break;
			}
			case 2:
			{
				printf("\n======XUAT MANG=====\n");
    			XuatMang(arr, n);
    			break;
			}
			case 3:
			{
				    printf("\n======TIM KIEM======\n");
   					 int v;
    				printf("Nhap vao gia tri can tim: ");
    				scanf("%d", &v);
    				printf("Tim thay so %d tai chi so a[%d]\n", v, TimKiem(arr, n, v));
				break;
			}
			case 4:
			{
				printf("\n======TONG=========\n");
				Tong(arr, n);
				break;
			}
			case 5:
			{
				printf("\n====TONG CHAN LE=====\n");
				TongChanLe(arr, n);
				break;
			}
			case 6:
			{
				printf("\n====MAX MIN=====\n");
				MAXMIN(arr, n);
				break;
			}
			default:
			break;
		}
		
	}while(chon != 7);
	
}
void NhapMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Nhap phan tu a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void XuatMang(int a[], int n){
    for(int i = 0;i < n; ++i){
        printf("Phan tu a[%d] = %d\n", i, a[i]);
    }
}
int TimKiem(int a[], int n, int v){
    for(int i = 0;i < n; ++i){
        if(a[i] == v)
        {
        	  return i;
        }
    }
    return -1; 
}
int Tong (int a[], int n){
	int tong = 0;
	for(int i = 0; i < n; i++)
	tong = tong + a[i];
	printf("Tong la: %d\n", tong);
}
int TongChanLe(int a[], int n){
	
	int chan = 0, le = 0;
	for(int i = 0; i < n; i++)
	if(a[i]%2 == 0)
		chan = chan + a[i];
	else
		le = le + a[i];
		
	printf("Tong chan la: %d\n", chan);
	printf("Tong le la: %d\n", le);
}
int MAXMIN (int a[], int n){
	int min, max;
	min = max = a[0];
	
		for(int i=1; i < n; i ++)
			if(a[i] < min)
				min = a[i];
		else	
			if(a[i] > max)
				max = a[i];
		
		printf("Max cua mang la: %d\n", max);
		printf("Min cua mang la: %d\n", min);
}
