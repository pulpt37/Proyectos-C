#include <stdio.h>
#include <stdlib.h>

 int main () {

   int numero1 = 0;
   int numero2 = 0;
   int resultado = 0;

   int i=0;
   int a=0;
   int n=0;
   int x=0;

   int auxiliar=0;
   int menu=0;

   while (auxiliar!= 1) {


   printf("\nQue quieres hacer: \n\t1.-Adivinar un numero\n\t2.-Restar un numero \n\t3.-Sumar un numero\n\n\tR: ");
   scanf("%d",&menu);

   if(menu==1){
    auxiliar=1;
     printf("\nQue numero es la incognita ");
     scanf("%d",&x );
     system("clear");
     do{
         system("clear");
         printf("\nQue numero crees que es: ");
         scanf("%d",&a);
         if (a>x) {
           printf("\nNo es el numero correcto intentalo mas chico");
         }
         if (a<x) {
           printf("\nNo es el numero correcto intentalo mas grande");
         }
         if (a==x) {
           printf("\nLo lograste!!!!");
         }

       }while(a!=x);
     printf("\n");
   }

    if(menu==3){
      auxiliar=1;
       printf("Suma de dos numeros: \n");
       printf("\nNumero 1: ");
       scanf("%d",&numero1);

       printf("\nNumero 2: ");
       scanf("%d",&numero2);

       resultado=numero1+numero2;
       printf("\nresultado: %d\n",resultado);
      }


 if(menu==2){
   auxiliar=1;
   printf("\nLa resta de dos numeros:");
   printf("\nNumero 1: ");
   scanf("%d",&numero1);

   printf("\nNumero 2: ");
   scanf("%d",&numero2);
   resultado=numero1-numero2;
   printf("\nresultado: %d\n",resultado);
  }

  if(auxiliar!=1){
    printf("El numero es incorrecto\nVuelve a intentarlo\n");
  }
}
   return 0;
 }


/*
 if(menu!=1){
   if(menu!=2){
     if(menu!=3){
       printf("Numero incorrecto\n");
     }
   }
 }
 if (menu != 1 && menu != 2 && menu != 3) {
   printf("\nEl numero es incorrecto\n");
 }*/
