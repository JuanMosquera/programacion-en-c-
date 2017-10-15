#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

void hello(void);


int main(int argc, char const *argv[])
{
	/* code */
	int thread_count = strtol(argv[1], NULL,10);

	#pragma omp parallel num_threads(thread_count)
	hello();
	return 0;
}

void hello(){
	int my_rank = omp_get_thread_num();
	int thread_count=omp_get_num_threads();
	printf("hello from thread %d of %d\n",my_rank,thread_count );
}