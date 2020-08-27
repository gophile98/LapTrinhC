#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*void SapXepTang(int a[],int n);
void bai3SoLekoAmTangDan(int a[],int n);*/
void bt5(int n,int a[]);

void bt2(int n,int a[]);
void xuatmangnho(int m, int a[]);
int bt4(int n,int a[]);
int main(int argc, char *argv[])
{
	int chon;
	
	do
	{
		printf("\n******** THUC HIEN CHUONG TRINH BANG MENU CHON *******\n");
		printf("\n\t\tNhap 1: Thuc hien bai tap 1");
		printf("\n\t\tNhap 2: Thuc hien bai tap 2");
		printf("\n\t\tNhap 3: Thuc hien bai tap 3");
		printf("\n\t\tNhap 4: Thuc hien bai tap 4");
		printf("\n\t\tNhap 5: Thuc hien bai tap 5");
		printf("\n\t\tNhap 0: Ket thuc chuong trinh");
		printf("\n\t\tChon chuc nang: ");
		scanf("%d",&chon);
		switch(chon)
		{
			case 1:
			{
				int tuoicha=44,tuoictrai=14,tuoicgai=10,nam=0;
				for (int i=44;i<=100;i++) {
					if(tuoicha==(tuoictrai+tuoicgai))
							break;
				tuoicha++;
				tuoictrai++;
				tuoicgai++;
				nam++;
				}
				printf("\nSo nam de tuoi cha bang tong tuoi hai con la: %d\n",nam);
			}
			
			////--///
			case 2:
			{
				int n, a[1000];
					printf("\nNhap n = ");
					scanf("%d",&n);
				bt2(n,a);
					printf("\n");
				break;
			}
			////--///
			case 3:
			{
				
				int  m, a[1000];
				xuatmangnho(m, a);
				break;
			}
			////--///
			case 4: 
			{
				int n, a[1000];
				{
				if(bt4(n,a)==-1)
					printf("\nMang khong co so chan nao !\n");
				else
					printf("\nSo chan dau tien trong mang la: %d",bt4(n,a));
				break;
			}
			}
			////--///
			case 5:
			{
				int n, a[1000];
				{
				bt5(n,a);
				printf("\n");
				break;
			}
			//	printf("aaa");
			}
			////--///
			////--///
			default: //printf("\t\tChon sai vui long chon lai!!!\n");
			break;
		}
	}while(chon != 0);
}
void bt2(int n,int a[])
{
	for(int i=0;i<n;i++) {
		a[i] = rand()%101;
	}
	printf("\nMang vua nhap la: ");
	for(int i=0;i<n;i++) {
		printf("\na[%d] = %d",i,a[i]);
	}
}
void xuatmangnho( int m, int a[])
{
	int tong=0;
	int i;
	printf("Nhap m:"); scanf("%d", &m);
	printf("Cac phan tu nho hon hoac bang %d la:\n", m);
	for(i = 0; i <m; i++){
		if(a[i]<=m){
			printf("a[%d] = %d\n", i, a[i]);
			tong+=a[i];
		}
	}	
		printf("Tong cac so nho hon %d la: %d\n",m, tong, a[i]);
}

int bt4(int n,int a[])
{
	for(int i=0;i<n;i++) {
		if(a[i]%2==0)
			return a[i];
	}
	return -1;
}
//--//
/*void SapXepTang(int a[],int n)
{
 for(int i=0;i<n-1;i++)
  for(int j=i+1;j<n;j++)
   {
   if(a[i]>a[j])
     {
      int temp=a[i];
      a[i]=a[j];
      a[j]=temp;
   }
   
 }
 printf("\n mang sap tang la: "); 

}
void bai3SoLekoAmTangDan(int a[],int n)
{
 int b[50];
 int dem=0;
 for(int i=0;i<n;i++)
 {
 if(a[i]% 2!=0 && a[i]>0)
 {
 b[dem]=a[i];
 dem++; 
  } 
 }
 //printf("\n mang cac so le khong am la: ");

 SapXepTang(b,dem);
}
*/
void bt5(int n,int a[])
{
	int tam;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]>a[j]) {
				tam=a[i];
				a[i]=a[j];
				a[j]=tam;
			}
	printf("\nMang sau khi sap xep lai: \n");
	for(int i=0;i<n;i++) {
		if(a[i]%2==1)
			printf("\na[%d] = %d",i,a[i]);
	}
}