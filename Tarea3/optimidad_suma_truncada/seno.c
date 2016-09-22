#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI_CIENTOO  0.017453293
#include "funciones.h"
/*
double factorial(int N)
{
  int i;
  double f = 1.0 , fo = 1.0;
  i = 1;

  while(i <= N)
    {
      f = fo*i;
      fo =1.0* f;
      i = i + 1;
    }//Fin while
  return fo;
}//fin factorial
*/
void seno(double sx, double xg, int N)
{
  int i =1;
  double xr, f = 1.0, senoxg = 0.0; //angulo en radianes xr, factorial f 

  printf("%lf %lf %d\n",sx, xg, N);
  
  xr = xg*PI_CIENTOO;

  while(i <= N)
    {
      f = factoriaN(i);
      //printf("%lf\n",f);
      sx = sx + pow(-1,i)*pow(xr,2*i +1)/f;
      i = i+1;   
    }
  senoxg = sin(xg*PI_CIENTOO);
  printf("sen%lf = %lf, sent%lf = %lf\n\n",xg,sx,xg,senoxg);
   
}//fin seno

void senox()
{
  double xg,sx =1.0;//abgulo en grados xg. sx puntero para almacenar los valores de seno de x 
  int N;
  

  printf("Ingrese el numero de elementos de la serie  y el angulo en grados\n\n");
  scanf("%d %lf",&N,&xg);

  printf("%d\n",N);

  seno(sx, xg, N);
  
}//fin main
