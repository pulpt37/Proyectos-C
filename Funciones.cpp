#include <stdio.h>
#include <stdlib.h>


void doble_edad(){
  int a;
  printf("Dame tu edad: ");
  scanf("%d",&a);
  printf("El doble de tu edad es: %d\n",9*9*9*9 );

}
int numero_x_2(int a);

void doble_edad_2(int edad, int año);

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

int main (){
  //numero_incognita();
  //int a=5;
  //doble_edad();
  //doble_edad_2('a',5);
  //printf("Ya termino la funcion\n");
  int n=0;
  int resultado;
  printf("Dame numero x_2: ");
  scanf("%d",&n);

  printf("Resultado: %d\n",numero_x_2(n));
  return 0;
}

void doble_edad_2(int edad, int año){
  printf("El doble de tu edad es: %d\n",edad*2);
  printf("El año en que naciste: %d\n",año );
}

int numero_x_2(int a){
  a=a*10;
  a=a/2;
  a=a+5;
  return 67;
}
