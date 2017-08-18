#include <stdio.h>
#include <unistd.h>

char nombre[50];

int main(){
	int pid = getpid();
	printf("ingrese su nombre por favor:  ");
	scanf("%s",nombre);
	printf("hola %s, su id de proceso es %d\n",nombre, pid);
	return(0);
}