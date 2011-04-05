#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>


int CalculaIn(int value);
double CalculaPi(int in, int value);

int main(int argc, char *argv[])
{
   int pid;
   pid = fork();
   int pid2;
   
   double resultado1;
      double resultado2;
   
   FILE *entrada;
    entrada = fopen("entrada.txt","w+");
   int n;
   n = 100000;
   if(pid == 0)
   {
          fprintf(entrada, "%f", CalculaPi(CalculaIn(n), n);
   }
   if(pid > 0)
   {
          pid2 = fork();
          if(pid2 == 0)
          {
                  fprintf(entrada, "%f", CalculaPi(CalculaIn(n), n);
           }
   }
   wait(NULL); 
    if(pid2 > 0) 
    {
      wait(NULL); 
      }
    FILE *saida;
      saida = fopen ("entrada.txt", "r");
    
    fscanf(saida,"%d",resultado1);
    fscanf(saida,"%d",resultado2);
    
    double resultadoFinal;
    resultadoFinal = (resultado1 + resultado2) / 2;
    printf("O Resultado final é: %f", resultadoFinal)

  
  system("PAUSE");	
  return 0;
}

int CalculaIn(int value)
{
    double x,y;
    srand(544);
    int p_in = 0;
    int i = 0;
   x = 0;
   y = 0;
    for(i = 0; i < value; i++)
    {
     
            x = (((double)rand())/RAND_MAX);
            y = (((double)rand())/RAND_MAX);

            if((x*x + y*y) <= 1)
            {

                    p_in ++;
            }
    }
    return p_in;         
}

double CalculaPi(int in, int value)
{
       double pi;
       pi = 4 * ((double)in / (double)value);
       return pi;
}
