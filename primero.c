
#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int main(void)
{
	double A[MAX][MAX], x[MAX], y[MAX];
	double r;
	int i,j;

	//initialization
	srand(time(NULL));

	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
			r=rand();
			A[i][j]=r;
		}
		r=rand();
		x[i]=r;
		y[i]=0;
	}
}
	