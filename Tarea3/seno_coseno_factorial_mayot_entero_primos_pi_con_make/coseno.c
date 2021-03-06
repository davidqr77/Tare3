#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI_CIENTOO  0.017453293

double factorialn(int N)
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

void coseno(double *cx, double xg, int N)
{
  int i =1;
  double xr, f = 1.0;

  xr = xg*PI_CIENTOO;

  while(i <= N)
    {
      f = factorialn(2*i);     
      *cx = *cx + pow(-1,i)*pow(xr,2*i)/f;
      i = i+1;   
    }
  
}//fin coseno

void cosenox(double xg, int N)
{
  double  cx = 1.0, cosxg = 0.0;
  //int N;

  //printf("Ingrese el numero de elementos de la serie  y el angulo en grados\n\n");
  //scanf("%d %lf",&N,&xg);

  coseno(&cx, xg, N);
  cosxg = cos(xg*PI_CIENTOO);

  printf("cos%lf = %lf, cos%lf = %lf\n\n",xg,cx,xg,cosxg);
  //return 0;
}//fin main
