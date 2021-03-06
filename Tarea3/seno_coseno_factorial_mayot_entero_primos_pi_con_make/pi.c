#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define IP 31.83098862 //Inverso de pi multiplicado por 100

void euler(double *p4, int N, int i)
{

  while(i<=N)
    {
      *p4 = *p4 + pow(-1,i)/(2*i +1);
      i++;
    }//Fin while
}//fin euler

void vieta(double *ip, double *rc, int N, int i)
{
  double Rc = 0.0;
  i = 2;
  
  while(i<=N)
    {
      Rc = sqrt(2.0 + *rc);
      *ip = *ip*Rc*0.5;
      *rc = Rc;
      i++;
    }//Fin while 
} //fin vieta

void pi(int N)
{  
  double pi_e = 0.0, p4 = 1.0, ip =  M_SQRT1_2,rc = M_SQRT2, pi_v = 0.0;
  int i=1;
  euler(&p4,N,i);
  pi_e =4.0*p4;
  
  vieta(&ip,&rc,N,i); 
  pi_v = 2.0/(ip);
  
  printf("pi_euler = %.12lf, pi_vieta = %.12lf, pi = %.12lf\n\n", pi_e, pi_v,M_PI);
  printf("EV = %.12lf, EE = %.12lf, EEV = %.12lf\n\n",(pi_v-M_PI)*IP,(pi_e- M_PI)*IP,(pi_v-pi_e)*IP);
}//Fin void vieta

void PI(int N)
{
  pi(N);
}
