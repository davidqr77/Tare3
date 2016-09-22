#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


void secuencia1(float a[10], float b[10], float cc)
{
  double tini, tend;
  int i = 0;

  tini = clock();  
  for(i=0; i<10; i++)
    {
      a[i] = b[i]*cc;
    }//fin for1
  tend = clock();  
  printf("La secuencia1 con variables doubles demora %16.8lf\n\n",tend-tini);  
}//fin secuencia1


void secuencia2(float a[10], float b[10], float c[10])
{
  float tini, tend;
  int i = 0;
  int j = 0;

  tini = clock();  
  for(i=0; i<10; i++)
    {
      for(j = 0; j<10; j++)
	{
	  a[i] = b[i]*c[j];
	}
    }//fin for1
  tend = clock();  
  printf("La secuencia2 con variables doubles demora %16.8lf\n\n",tend-tini);
}//fin secuencia2


void secuenciax1(int argc, char *argv[])
{

  float a[10], b[10],c[10],cc;
  int i = 0;
  cc = 1.0;
  //a[10] = NULL;

  while(i<10)
    {
      b[i] = rand()%100;
      c[i] = cc;
      i++;
    }//fin while

  printf("\n");

  secuencia1(a,b,cc);
  secuencia2(a,b,c);
}//fin main
