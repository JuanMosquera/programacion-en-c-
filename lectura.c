#include <stdio.h>
#define SIZE 100

int main(void)
{
   char buffer[SIZE];
   puts("Introduce una cadena:");
   gets(buffer);
   puts(buffer);

   return 0;
}
