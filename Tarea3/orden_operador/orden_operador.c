#include<stdio.h>
#include<math.h>
#include<stdlib.h>


double calculo1(double x, double a, double b,double f1)
{
  f1 = sin(x) + cos(x)*0.5*a + b;
  printf("f1(x) = %4.5lf\n\n",f1);
  return 0;

}


double calculo2(double x, double a, double b, double f2)
{
  f2 = sin(x) + cos(x)*0.5*(a + b);
  printf("f2(x) = %4.5lf\n\n",f2);
  return 0;

}



double calculo3(double x, double a, double b, double f3)
{
  f3 = (sin(x) + cos(x)*0.5)*a + b;
  printf("f3(x) = %4.5lf\n\n",f3);
  return 0;

}


double calculo4(double x, double a, double b, double f4)
{
  f4 = ((sin(x) + cos(x))*0.5)*(a + b);
  printf("f4(x) = %4.5lf\n\n",f4);
  return 0;

}

int main(int arg, char *argv[])
{
  double x, a,b,f1;
  f1 = 0.0;
  x = 80.0*M_PI/180.0;
  a = sqrt(2.0);
  b=1.0;
  printf("\n");
  calculo1(x,a,b,f1);
  calculo2(x,a,b,f1);
  calculo3(x,a,b,f1);
  calculo4(x,a,b,f1);
  return 0;

}
