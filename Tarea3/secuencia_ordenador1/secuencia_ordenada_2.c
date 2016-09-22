#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


void orden1(double a[10], double b[10], int N)
{
  double tini, tend;
  int i, j;

  tini = clock();  
  for(i=0; i<10; i++)
    {
      for(j = 0; j < N; j++)
	{
	  
	  b[i] = a[i]*sqrt(1.0*j);
	  j++;
	}
      i++;
    }//fin for1
  tend = clock();  
  printf("La secuencia1 con variables demora %16.8lf\n\n",tend-tini);  
}//fin secuencia1


void orden2(double a[10], double b[10],int N)
{
  double tini, tend;
  int i,j;
  tini = clock();  
  for(j=0; j<N;j ++)
    {
      for(i = 0; i<10; i++)
	{
	  b[i] = a[i]*sqrt(1.0*j);
	  i++;
	}
      j++;
    }//fin for1
  tend = clock();  
  printf("La secuencia2 con variables float demora %16.8lf\n\n",tend-tini);
}//fin secuencia2


void secuenciax2()
{

  double a[10], b[10];
  int i = 0;
  int N;

  printf("Ingrese N\n");
  scanf("%d",&N);
  //N = atoi(argv[1]);
  
  while(i<10)
    {
      a[i] = 2.7*sin(1.0*i);
      b[i] = 0.0;
      i++;
    }//fin while
  
  //printf(" %d",N);

  orden1(a,b,N);
  orden2(a,b,N);
}//fin main
