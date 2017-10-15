
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Leer_n(int* n);
void CrearVector(double** v1,double** v2,double** re, int n);
void Llenar_vector(double vec1[],double vec2[],int n);
void Imprimir(double vec[],int n);
void Sum(double vec1[],double vec2[],double vec_result[], int n);
double** CrearMatriz(int n);
void Llenar_matriz(double **mat,int n);
void MostrarMatriz(double **mat,int n);
double* Producto(double **mat, double *vector,int n);

int main(int argc, char const *argv[])
{
	
	int n;
	double *vec1,*vec2,*vec_result;
	double *prod;
	double **mat;

	Leer_n(&n);
	CrearVector(&vec1,&vec2,&vec_result,n);
	
	mat=CrearMatriz(n);
	Llenar_vector(vec1,vec2,n);
	
	Llenar_matriz(mat,n);

	Sum(vec1,vec2,vec_result,n);
	//Imprimir(vec_result,n);
	
	//MostrarMatriz(mat,n);
	
	prod=Producto(mat,vec1,n);
	
	//Imprimir(prod,n);
	printf("a\n");

	free(vec1);
	free(vec2);
	free(vec_result);
	free(prod);
	free(mat);

	return 0;
}

/*--------------------------------------
	
*/
void Leer_n(int* n){
	printf("Ingrese tamaño del vector \n");
	scanf("%d",n);
	if (*n<=0)
	{
		printf("el valor debe ser positivo o mayor a 0\n");
		exit(-1);
	}
}
/*--------------------------------------
	
*/
void CrearVector(double** v1,double** v2,double** re, int n){
	*v1 = malloc(n*sizeof(double));
    *v2 = malloc(n*sizeof(double));
    *re = malloc(n*sizeof(double));
   if (*v1 == NULL || *v2 == NULL || *re == NULL) {
      printf("no se pudo crear el vector\n");
      exit(-1);

   }
   
}
/*--------------------------------------
	
*/
void Llenar_vector(double vec1[],double vec2[],int n){

	for (int i = 0; i < n; ++i)
   {
   		vec1[i]=2;
   		vec2[i]=2;
   }
}

/*--------------------------------------
	
*/
void Imprimir(double vec[],int n){
	for (int i = 0; i < n; ++i)
	{
		printf("%lf\n",vec[i] );
	}
}
/*--------------------------------------
	
*/
void Sum(double vec1[],double vec2[],double vec_result[], int n){

	for (int i = 0; i < n; ++i)
	{
		vec_result[i]=vec1[i]+vec2[i];
	}
}
/*--------------------------------------
	
*/
double** CrearMatriz(int n){
	
	double **mat;
	mat=(double**)malloc(n*sizeof(double*));
	if (mat==NULL)
	{
		printf("No se pudo reservar memoria");
		exit(-1);
	}
	
	for (int i = 0; i < n; ++i)
	{
		mat[i]=(double*)malloc(n*sizeof(double));
		if (mat[i]==NULL)
		{
			printf("No se pudo reservar memoria");
			exit(-1);
		}
	}
	return mat;
}

/*--------------------------------------
	
*/
void Llenar_matriz(double **mat,int n){
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			mat[i][j]=2.0;
		}
	}
}

/*--------------------------------------
	
*/
void MostrarMatriz(double **mat,int n){

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%lf  ",mat[i][j]);
		}
		printf("\n");
	}

}

/*--------------------------------------
	
*/
double* Producto(double **mat, double *vector,int n){

	double *z,pre=0;
	z=(double*)malloc(n*sizeof(double));
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			pre+=(mat[i][j]*vector[j]);
		}
		z[i]=pre;
		pre=0;
	}
	return z;

}