#include <stdio.h>
void XuatMang(int a[], int n);
void NhapMang(int a[], int n);
int TimKiem(int a[], int n, int v);
int Tong (int a[], int n);
int TongChanLe(int a[], int n);
int MAXMIN (int a[], int n);
const int MAX = 100;
int main()
{
	int arr[MAX];
    int n;
    printf("\nNhap so luong phan tu: ");
    do{
        scanf("%d", &n);
        if(n <= 0 || n > MAX){
            printf("\nNhap lai so luong phan tu: ");
        }
    }while(n <= 0 || n > MAX);
    printf("\n======NHAP MANG=====\n");
    NhapMang(arr, n);
    
    printf("\n======XUAT MANG=====\n");
    XuatMang(arr, n);
    
    printf("\n======TIM KIEM======\n");
    int v;
    printf("Nhap vao gia tri can tim: ");
    scanf("%d", &v);
    printf("Tim thay so %d tai chi so a[%d]\n", v, TimKiem(arr, n, v));
   // printf("Khong tim thay so %d tai mang\n", v, TimKiem(arr, n, v));
	
	printf("\n======TONG=========\n");
	Tong(arr, n);
	
	printf("\n====TONG CHAN LE=====\n");
	TongChanLe(arr, n);
	
	printf("\n====MAX MIN=====\n");
	MAXMIN(arr, n);
	
//	printf("\n====SO NGUYEN TO=====\n");
	
	
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
