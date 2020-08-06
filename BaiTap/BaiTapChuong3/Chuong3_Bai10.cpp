#include <stdio.h>
int main(int argc, char *argv[])
{
	int noDigits=0, noLetters=0, noOther=0;
	char c=0;
	printf("Enter a string:\n");
	//scanf("%c", &c);
	while (c!=10){
		printf("Nhap c: "); scanf("%c", &c);
		
		if(c>'0' && c<'9')
		noDigits ++;
		else if((c>='a' && c<='z')||(c>='A' && c<='Z'))
		noLetters ++;
		else
		noOther ++;
	}
	printf("Chuoi la:%d", noDigits, noLetters, noOther);
	return 0;
}