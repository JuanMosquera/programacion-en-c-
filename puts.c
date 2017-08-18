#include <stdio.h>
#define SIZE 100

int main(void)
{
	char buffer[SIZE];
	puts("introduce una cadena");
	gets(buffer);
	puts(buffer);

	return 0;
}