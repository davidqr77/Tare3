#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

void creacion_matriz(int N,int i,int j,int k)
{
  double a[N][N], b[N][N],c[N][N], tini,tend;
 
  //Creacion matriz a con mueros aleatorios
  for(i=0;i<N;i++)//for 1
    {
      for(j=0;j<N;j++)//for2
 	{
	  a[i][j]=sqrt(rand()%1000);
	  b[i][j]=sqrt(rand()%1000);
	}//fin for2
    }//fin for1
  //printf("%lf %lf %lf\n",a[1][3],b[3][4],c[2][3]);
  
  //Evaluacion metodo1

  tini = clock();
  for(i = 0; i < N; i++)//for1    
    {
      for(j =0; j < N; j++)//for2
	{
	  for(k =0; k < N; k++)//for 3
	    {
	      c[i][j] = a[i][k]*b[k][j];  
	    }//fin for 3
	}//fin for 2
    }//fin for 1
  tend = clock();
  printf("El metodo uno demora %lf\n\n",tend - tini);  

  //Evalucion metodo2
  tini = clock();
  for(i =0; i < N; i++)//for1    
    {
      for(k =0; k < N; k++)//for2
	{
	  for(j =0; j < N; j++)//for 3
	    {
	      c[i][j] = a[i][k]*b[k][j];  
	    }//fin for 3
	}//fin for 2
    }//fin for 1
  tend = clock();
  printf("El metodo dos demora %lf\n\n",tend - tini);


  //Evalucion metodo3

  tini = clock();
  for(k = 0; k < N; k++)//for1
    {
      for(i =0; i < N; i++)//for2
	{
	  for(j =0; j < N; j++)//for 3
	    {
	      c[i][j] = a[i][k]*b[k][j];  
	    }//fin for 3
	}//fin for 2
    }//fin for 1
  tend = clock();

  printf("El metodo tres demora %lf\n",tend - tini);

}//creacion mattriz

 

void producto_matrix(int argc, char *argv[])
{
  int N,i,j,k;
  N = atoi(argv[1]);
  i = 0;
  j=0;
  k=0;
  //printf("ingrese valor de N\n");
  //scanf("%d",&N);
  printf("\n");
  creacion_matriz(N,i,j,k);
}//fin main
