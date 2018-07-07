#include <stdio.h>
int a[5];
int i=0;

void imprime_a(){
  for(i=0;i<5;i++){
      printf("%d\n",a[i] );
  }
}
int main (){


  int prom=0;
/*  printf("\nCalificacion de alumno 1: ");
  scanf("%d",&a[0]);
  printf("\nCalificacion de alumno 2: ");
  scanf("%d",&a[1]);
  printf("\nCalificacion de alumno 3: ");
  scanf("%d",&a[2]);
  printf("\nCalificacion de alumno 4: ");
  scanf("%d",&a[3]);
  printf("\nCalificacion de alumno 5: ");
  scanf("%d",&a[4]);
  */


  for(i=0;i<5;i++){
    printf("Valor actual de i: %d\t",i);
    printf("\nDame la calificacion de %d: ",i+1);
    scanf("%d",&a[i]);
  }
  
  imprime_a();
  prom = a[1]+a[2]+a[3]+a[4]+a[0];
  prom = prom/5;
  printf("\nPromedio del grupo es: %d\n",prom);

  return 0;
}
