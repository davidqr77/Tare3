#include<stdio.h>
#include<stdlib.h>

double SUMA(double x, double y)
{
 printf("%lf\n\n",x+y);
 return 0;
}//fin suma

double MULTIPLICACION(double x, double y)
{
 printf("%lf\n\n",x*y);
 return 0;
}//fin MULTIPLICACION

double RESTA(double x, double y)
{
  printf("%lf\n\n",x-y);
  return 0;
}//fin RESTA

double DIVISION(double x, double y)
{
 printf("%lf\n\n",x/y);
 return 0;
}//fin DIVISION


int main(int argc, char *argv[])
{
  double x,y;
  char s, p,r,d;
  char o[1];
  s = '+';
  r = '-';
  p = 'x';
  d = '/';
  
  
  printf("\n");
  printf("Para sumar dos numeros digite x + y\n");
  printf("Para multiplicatar dos numeros digite x x y\n");
  printf("Para restar dos numeros digite x - y\n");
  printf("Para dividir dos numeros digite x / y\n\n");
 
  scanf("%lf %s %lf",&x,o,&y);
  printf(" = ");

  if(*o == s) SUMA(x,y);
 
  if(*o == p) MULTIPLICACION(x,y);
 
  if(*o == r) RESTA(x,y);
  
  if(*o == d) DIVISION(x,y);
  return 0;
}

