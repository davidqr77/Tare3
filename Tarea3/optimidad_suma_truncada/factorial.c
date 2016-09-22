#include<stdio.h>
#include<stdlib.h>
//#include "funciones.h"


double calculo_factorial(int N)
{
  double i;
  double f, fo;
  i = 1;
  fo = 1.0;

  while(i <= N)
    {
      f = fo*i;
      fo =1.0* f;
      i = i + 1.0;
    }//Fin while
  printf("% lf \n",fo);
  return fo;
  
}//Fin factorial

double factoriaN(int N) //int main()
{
 double f;
 //int N;
 
 //printf("Ingreso el entero \n\n");
 //scanf("%d",&N);
  printf("\n");

  f = calculo_factorial(N);
 
  //printf("El factorial de %d! = %lf\n",N,f);
  return f;
}//Fin int factorial(int)
