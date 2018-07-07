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
  while (menu!= 4) {
    printf("\nQue quieres hacer: \n\t1.-Adivinar un numero\n\t2.-Restar un numero \n\t3.-Sumar un numero\n\t4.-Salir\n\n\tR: ");
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
        case 3:
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
          case 4:
          printf("\nVas a salir\n" );
          break;
        default:
          printf("\npresionaste un valor incorrecto");
          break;
    }
  }
  return 0;
}






/*  printf("A: ");
  scanf("%d",&a);
  switch (a){
    case 1:
      printf("A vale 1\n");
      break;
    case 2:
      printf("Presionaste 2\n");
      break;
    case 3:
      printf("Presionaste 3\n");
      break;
    case 5:
      printf("Vas a salir\n");

      break;
    default:
      printf("No colocaste un valor correcto\n");
      break;
  }
*/
