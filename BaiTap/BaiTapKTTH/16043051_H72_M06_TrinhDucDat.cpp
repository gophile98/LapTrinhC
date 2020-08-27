#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void bt5(int n,int a[]);
void bt2(int n,int a[]);
void xuatmangnho(int m, int a[]);
int bt4(int n,int a[]);
int main(int argc, char *argv[])
{
	int chon;
	
	do
	{
		printf("\n******** 16043051_TRIH DUC DAT_MENU *******\n");
		printf("\n\t\t1. Bai tap 1.");
		printf("\n\t\t2. Bai tap 2.");
		printf("\n\t\t3. Bai tap 3.");
		printf("\n\t\t4. Bai tap 4.");
		printf("\n\t\t5. Bai tap 5.");
		printf("\n\t\t0. Ket thuc chuong trinh.");
		printf("\n********************************************");
		printf("\n\t\tChon chuc nang: ");
		scanf("%d",&chon);
		switch(chon)
		{
			case 1:
			{
				int tuoicha=44, tuoictrai=14, tuoicgai=10, nam=0;
				for (int i = 44;i <= 100;i ++) {
					if(tuoicha ==( tuoictrai + tuoicgai))
							break;
				tuoicha++;
				tuoictrai++;
				tuoicgai++;
				nam++;
				}
				printf("\nSo nam de tuoi cha bang tong tuoi hai con la: %d\n",nam);
				break;
			}
			
			////--///
			case 2:
			{
				int n, a[1000];
					printf("\nNhap n = ");
					scanf("%d",&n);
				bt2(n, a);
					printf("\n");
				break;
			}
			////--///
			case 3:
			{
				printf("Chua lam duoc.");
				//int  m, a[1000];
				//xuatmangnho(m, a);
				break;
			}
			////--///
			case 4: 
			{
				int n, a[1000];
				{
				if(bt4(n, a) ==-1)
					printf("\nMang khong co so le nao: -1 !\n");
				else
					printf("\nSo le dau tien trong mang la: %d",bt4(n, a));
				break;
			}
			}
			////--///
			case 5:
			{
				int n, a[1000];
				{
				bt5(n, a);
				printf("\n");
				break;
			}
			
			}
			
			////--///
			default: printf("Loi roi!!! Ban vui long chon lai.\n");
			break;
		}
	}while(chon != 0);
}
void bt2(int n,int a[])
{
	for(int i = 0; i < n; i ++) {
		a[i] = rand()%101;
	}
	printf("\nXuat mang vua nhap la: ");
	for(int i = 0; i < n; i ++) {
		printf("\na[%d] = %d", i, a[i]);
	}
}
void xuatmangnho( int m, int a[])
{
	int tong = 0;
	int i;
	printf("Nhap m:"); scanf("%d", &m);
	printf("Cac so nguyen to nho hon hoac bang %d la:\n", m);
	for(i = 0; i < m; i ++){
		if(a[i] <= m){
			printf("a[%d] = %d\n", i, a[i]);
			tong+=a[i];
		}
	}	
		printf("Tong cac phan tu nguyen to nho hon hoac bang %d la: %d\n",m, tong, a[i]);
}

int bt4(int n,int a[])
{
	for(int i = 0;i < n; i ++) {
		if(a[i]%2==1)
			return a[i];
	}
	return -1;
}

void bt5(int n, int a[])
{
	int tam;
	for(int i = 0; i < n-1; i ++)
		for(int j = i+1; j < n;j ++)
			if(a[i] < a[j]) {
				tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
			
	printf("\nMang chan sau khi sap xep giam dan la: \n");
	for(int i = 0;i < n;i ++) 
		
			{
		if(a[i]%2==0)
			printf("\na[%d] = %d", i, a[i]);
	}
}