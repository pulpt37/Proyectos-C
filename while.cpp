#include <stdio.h>
int main(){

  int i=0;
  int a=0;
  int n=0;
  int contador=0;

  printf("De que numero quieres el residuo: ");
  scanf("%d",&a);
  printf("\nCuantos numeros quieres el residuo: ");
  scanf("%d",&n);

  while(n>contador){
    printf("\nvoy en el numero: %d",i);
    if(i%a==0){
      printf("\n%d es multiplo de %d",i,a);
        contador=contador+1;
    }
    i=i+1;
  }

printf("\n");
return 0;
}
