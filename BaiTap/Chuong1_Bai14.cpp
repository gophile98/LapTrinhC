#include <stdio.h>
#include <ctype.h>
int main ()
{
  int i=0;
  char str[]="Trinh Duc Dat\n";
  char c;
  while (str[i])
  {
    c=str[i];
    //putchar (tolower(c)); //chuyen thanh thuong
    
    putwchar(toupper(c));   // chuyen thanh hoa
    
    i++;
  }
  return 0;
}