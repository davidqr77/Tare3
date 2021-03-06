#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>


void secuencia1(double alfa,double x, double y, int N)
{
  FILE *pf;
  double tini, tend, X, Y;
  pf = fopen("IteracionesVtiempo_1.dat","w");
  int i=0;
  
  while(i<=N)
    {
      tini = clock();
      X = sin(alfa)*x + cos(alfa)*y;
      Y = -cos(alfa)*x + sin(alfa)*y;
      tend = clock();
      fprintf(pf,"%5d %10.0lf \n", i, tend - tini);
      alfa = alfa + 0.125;
      i++;      
    }//fin while
  fclose(pf);
  printf("%d %lf %lf %lf\n",i, tend - tini, X,Y);
}//fin secuencia1



void secuencia2(double alfa,double x, double y, int N)
{
  FILE *pf;
  double tini, tend, X, Y,c,s;
  pf = fopen("IteracionesVtiempo_2.dat","w");
  int i=0;
  
  while(i<=N)
    {
      tini = clock();
      s = sin(alfa);
      c = cos(alfa);
      X = s*x + c*y;
      Y = -c*x + s*y;
      tend = clock();
      fprintf(pf,"%5d %10.0lf \n", i, tend - tini);
      alfa = alfa + 0.125;
      i++;      
    }//fin while
  fclose(pf);
  printf("%d %lf %lf %lf %lf %lf\n",i, tend - tini, X,Y,s,c);
}//fin secuencia2



int main(int argc, char *argv[])
{
  double alfa,x,y;
  int N;
 
  printf("%d\n",argc); 

  alfa = atof(argv[1]);
  x = atof(argv[2]);
  y = atof(argv[3]);
  N = atoi(argv[4]);

  printf("%lf %lf %lf %d\n\n",alfa,x,y,N);
 
  secuencia1(alfa,x,y,N);
  secuencia2(alfa,x,y,N);
  return 0;  
}//fin main

