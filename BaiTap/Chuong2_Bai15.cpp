#include <stdio.h>
int main(int argc, char *argv[])
{
	int thu;
	printf("Nhap thu:"); scanf("%d", &thu);
	
	switch(thu)
	{
		case 2:
		{
			printf("In thu 2\n");
			break;
		}
		case 3:
		{
			printf("In thu 3\n");
			break;
		}
		case 4:
		{
			printf("In thu 4\n");
			break;
		}
		case 5:
		{
			printf("In thu 5\n");
			break;
		}
		case 6:
		{
			printf("In thu 6\n");
			break;
		}
		case 7:
		{
			printf("In thu 7\n");
			break;
		}
		case 8:
		{
			printf("In chu nhat\n");
			break;
		}
		
		default:
		{
			printf("Khong phai thu trong tuan.\n");
			break;
		}
	}
	return 0;
}