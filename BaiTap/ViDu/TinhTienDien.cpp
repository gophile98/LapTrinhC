#include <stdio.h>
#include<conio.h>
int main(int argc, char *argv[])
{
	int csc, csm, tien, tieuthu;
	
	printf("Chi so moi:");
	scanf("%d", &csm);
	
	printf("Chi so cu:");
	scanf("%d", &csc);
	
	tieuthu = csm-csc;
	printf("Tong tieu thu la %d", tieuthu);
	printf("\n");
	
	if(tieuthu<=100){
		tien = tieuthu*1000;
		printf("Tong tien la:%d", tien);
		private("\n");
		}
	return 0;
}