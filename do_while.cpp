#include <stdio.h>
#include <stdlib.h>

int main (){
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



  return 0;
}
