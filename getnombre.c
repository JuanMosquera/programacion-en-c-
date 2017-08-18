#include <stdio.h>

int main(void)
{
	char ch;
	do{
		ch=getchar();
		putchar(ch);
	}while(ch!='e' && ch!='E');

	return 0;
}