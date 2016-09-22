#include<stdio.h>
#include<stdlib.h>
#include<math.h>



double division_entera(double *N, int i)
{
   double d;
   while(d!=1)
    {
      d =ceil(*N*0.5);
      *N = d;
      //printf("%lf\n",d);
      i ++;   
    }
   return i;
  
}

int main()
{
 
  double N = 100;
  int  i = 0;
  /*
  i = fmod(N,fr);
  printf("%lf\n",i);
  */
  
  printf("El numero %lf",N);
  i = division_entera(&N,i);
  
  printf(" es diviseble por 2 %d veces\n",i);
  return 0;

}
