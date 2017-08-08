
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sis/time.h>


#define MAX 1000

int main(void)
{
	double A[MAX][MAX], x[MAX], y[MAX];
	double r, elapsedTime;
	int i,j;
	struct t2,t1;
	{
		
	};

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
	elapsedTime = (t2.tv_sec -t1.tv_sec)*1000.0;//seg a ms
	elapsedTime += (t2.tv_usec -t1.tv_usec)/1000.0;//us a ms

	printf("first case %f\n",elapsedTime);

	return 0;
}
	