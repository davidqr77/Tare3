#include<stdio.h>
#include "funciones.h"

int main(int argc, char *argv[])
{
  int N;
  double xg;
  //printf("Hola make %d %s\n",argc,argv[0]);

  printf("Ingrese el numero de elementos de la serie  y el angulo en grados\n\n");
  scanf("%d %lf",&N,&xg);
  printf("\n");
  
  senox(xg,N);

  cosenox(xg,N);
  
  factorialN(N);

  PI(N);

  Primos(N);

  Division_int2(N);
  
  printf("/n");
  return 0;
}
