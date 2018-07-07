#include <stdio.h>

int main(){
  int a1 = 0;
  int a2 = 0;
  int a3 = 0;
  int a4 = 0;
  int a5 = 0;
  int prom = 0;

  printf("\nCalificacion de alumno 1: ");
  scanf("%d",& a1);
  printf("\nCalificacion de alumno 2: ");
  scanf("%d",&a2);
  printf("\nCalificacion de alumno 3: ");
  scanf("%d",&a3);
  printf("\nCalificacion de alumno 4: ");
  scanf("%d",&a4);
  printf("\nCalificacion de alumno 5: ");
  scanf("%d",&a5);
  prom = a1+a2+a3+a4+a5;
  prom = prom/5;
  printf("\nPromedio del grupo es: %d",prom);



  return 0;
}
