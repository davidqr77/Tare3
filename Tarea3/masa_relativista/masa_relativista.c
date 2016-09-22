#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define c_luz 300000000.0

double masa(double vo, double dv, double mo)
{
  FILE *pf;
  double  vel_c,m;
  pf = fopen("Variacion_masa_con_la_velocidad.dat","w");
  m = mo;
  vel_c = vo/c_luz;
  
  fprintf(pf," Velocidad(m/s)            Velocidad/c          Masa(kg)\n\n");
  while(vel_c<1.0)
    { 
      fprintf(pf,"%16.5lf   %16.5lf    %16.5lf\n",vo,vel_c,m); 
      vo = vo + dv;
      vel_c = vo/c_luz;
      m = mo/sqrt(1.0 - vel_c*vel_c);
     
    }//fin while
  fclose(pf);
  return 0;
}//fin masa





void masa_relativista()
{
  //FILE *pf;
  double mo, vo, dv;

  //pf = fopen("Variacion_masa_VS_velocidad.dat","w");
  mo= 1.0;
  vo = 0.0;
  
  printf("Igrese el incremento de la velocidad\n\n");
  scanf("%lf",&dv);
  masa(vo,dv,mo);
  // fclose(pf);
}//fin masa_relativista



int main(int arg, char *argv[])
{
  masa_relativista();
  return 0;

}//fin main
