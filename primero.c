
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
	printf("intialized\n");

	gettimeofday(&t1,NULL);
	for (int i = 0; i < MAX; ++i)
	{
		for (int j = 0; j < MAX; j++)
		{
			y[i]+= A[i][j]*x[j];
		}
		
	}
	gettimeofday(&t2,NULL);
}
	