#include<stdio.h>
#include<stdlib.h>


void primo(int p)
{
int q, c, r;

for(q = 2; q <=p; q++)
 {
  c = p/q;
  r = p - q*c;
  if(q != 1 && q !=p) //If 1 decide como es el residuo
  { 
    if(r == 0) // if2 decide si no es primo
    {
      // printf("q = %d r = %d p = %d\n",q,r,p);
      // printf("q=%d  p = %d NO ES PRIMO\n",q,p);
     break;
    }// fin if 2
    
    }//Fin if1
  
  else printf("%14d\n",p);

 }//Fin for
}//fin primo


void Primos(int Xmax)
{
 int p = 2;
 //printf("Ingrese uh numero entero\n\n");
 //scanf("%d",&Xmax);
 printf("\n");
 printf("Los primos entre %d son:\n",Xmax);
 printf("%14d\n",1);

 while(p <= Xmax)
   {
     primo(p);
     p++;
   }
}//fin main
