#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void formula_general(){
  float a=0, b=0, c=0;
  printf("Dame el valor de a: ");
  scanf("%f",&a);
  printf("Dame el valor de b: ");
  scanf("%f",&b);
  printf("Dame el valor de c: ");
  scanf("%f",&c);
  float resultado=0;
  float resultado_1=0;
  resultado=(-b+(sqrt((b*b)+((-4)*a*c))))/(2*a);
  resultado_1=(-b-(sqrt((b*b)+((-4)*a*c))))/(2*a);
  printf("X1=%g\n",resultado);
  printf("X2=%g\n",resultado_1);
  }

 void numero_incognita(){
  int i=0;
  int a=0;
  int n=0;
  int x=0;
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
  void area_triangulo(){
    float b=0;
    float h=0;
    float resultado=0;
    printf("base:");
    scanf("%f",&b);
    printf("altura:");
    scanf("%f",&h);
    resultado=(b*h)/2;
    printf("Resultado en cm2=%g\n",resultado);

  }
  void area_cuadrado() {
    float l=0;
    float l_1=0;
    float resultado=0;
    printf("Lado 1:");
    scanf("%f",&l);
    printf("Lado 2:");
    scanf("%f",&l_1);
    resultado=(l*l);
    printf("Resultado en cm2=%g\n",resultado);
  }
  void area_circulo(){
    float PI=0;
    float R2=0;
    float resultado=0;
    printf("Introduce Pi:");
    scanf("%f",&PI);
    printf("Introduce Radio:");
    scanf("%f",&R2);
    resultado=(PI*(R2*R2));
    printf("Resultado en cm2=%g\n",resultado);
  }
  void calculadora_multiplos  (){
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

  }


int main (){
  int menu = 0;
  while (menu!= 5) {
    printf("\nQue quieres hacer: \n\t1.-Adivinar un numero\n\t2.-Formula general \n\t3.-Areas de figuras\n\t4.-Calculadora,multiplos\n\t5.-Salir\n\n\tR: ");
    scanf("%d",&menu);

    switch (menu) {
      case 1:
      numero_incognita ();
      break;
      case 2:
      formula_general ();
      break;
      case 3:
      while (menu!=4){
        printf("\nQue quieres hacer: \n\t1.-Area de un ciruclo\n\t2.-Area de un cuadrado \n\t3.-Area de un triangulo\n\t4.-Salir\n\n\tR: ");
        scanf("%d",&menu);
        switch (menu) {
          case 1:
          area_circulo();
          break;
          case 2:
          area_cuadrado();
          break;
          case 3:
          area_triangulo();
          break;

        }
      }
      break;
      case 4:
      calculadora_multiplos();
      break;
      case 5:
      printf("\nvas a salir!!");
      break;
      default:
      printf("\nPresionaste un valor incorrecto");
      break;
      }
    }


  return 0;
}
