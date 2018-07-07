#include <stdio.h>
#include <stdlib.h>

int main (){
  int numero1 = 0;
  int numero2 = 0;
  int resultado = 0;

  int i=0;
  int a=0;
  int n=0;
  int x=0;

  int auxiliar=0;
  int menu=0;

  int c = 0;
  int can_num = 0;
  int final = 0;
  int numero_tabla = 0;


  while (menu!= 4) {
    printf("\nQue quieres hacer: \n\t1.-Adivinar un numero\n\t2.-Calculadora \n\t3.-100 multiplos de un numero\n\t4.-Salir\n\n\tR: ");
    scanf("%d",&menu);

    switch (menu) {

      case 1:
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
        break;
      case 2:
      while (menu!= 5) {
        printf("\nQue quieres hacer: \n\t1.-Sumar\n\t2.-Restar \n\t3.-Multiplicar\n\t4.-Dividir\n\t5.-Salir\n\n\tR: ");
        scanf("%d",&menu);

        switch (menu) {
          case 1:
          printf("Suma de dos numeros: \n");
          printf("\nNumero 1: ");
          scanf("%d",&numero1);
          printf("\nNumero 2: ");
          scanf("%d",&numero2);
          resultado=numero1+numero2;
          printf("\nresultado: %d\n",resultado);
          break;

          case 2:
          printf("\nLa resta de dos numeros:");
          printf("\nNumero 1: ");
          scanf("%d",&numero1);
          printf("\nNumero 2: ");
          scanf("%d",&numero2);
          resultado=numero1-numero2;
          printf("\nresultado: %d\n",resultado);
          break;

          case 3:
          printf("\nLa multiplicacion de dos numeros:");
          printf("\nNumero 1: ");
          scanf("%d",&numero1);
          printf("\nNumero 2: ");
          scanf("%d",&numero2);
          resultado=numero1*numero2;
          printf("\nresultado: %d\n",resultado);
          break;

          case 4:
          printf("\nLa división de dos numeros y su residuo:");
          printf("\nNumero 1: ");
          scanf("%d",&numero1);
          printf("\nNumero 2: ");
          scanf("%d",&numero2);
          resultado=numero1/numero2;
          printf("\nresultado: %d\n",resultado);
          a=numero1%numero2;
          printf("\nresiduo: ");
          printf("%d",a);

          printf("\n");
          break;
          case 5:
          printf("\nVas a salir\n" );
          break;
        default:
          printf("\npresionaste un valor incorrecto");
          break;


        }
        break;
      }
      break;
      
      case 3:
      int i =0;
      int a = 1;
      int b = 1;
      a=0;
      printf("\nQue tabla del 1 al 100 quieres imprimir:");
      scanf("%d",&numero_tabla);
      for(i=0;i<100;i=i+1){
          a=a+numero_tabla;
          printf("\n%d",a);
      }
    break;

    }

  }








  return 0;
}
