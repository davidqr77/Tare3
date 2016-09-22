#include<stdio.h>
#include<stdlib.h>


double factorial(int N)
{
  int i;
  double f, fo;
  i = 1;
  fo = 1.0;

  while(i <= N)
    {
      f = fo*i;
      fo =1.0* f;
      i = i + 1;
    }//Fin while
  return fo;
}//Fin factorial

int main()
{

  double f;
  int N;
  printf("Ingrese un entero mayor o igual  a 1\n\n");
  scanf("%d",&N);
  printf("\n");

  f = factorial(N);
 
  printf("%d! = %lf\n",N,f);
  return 0;
}//Fin main
