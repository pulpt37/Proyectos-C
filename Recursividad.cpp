#include<stdio.h>

int factorial(int n);

int main(){
  int factoreo=0;
  printf("De que numero quieres el factoreo: ");
  scanf("%d",&factoreo);
  int aux=0;
  printf("El factorial es: %d\n",factorial(factoreo));
  return 0;
}

//Iterativo
/*int factorial(int n){
  int aux=n;
  int resultado=1;
  while(aux>=1){
    resultado=resultado*aux;
    aux=aux-1;
  }
  return resultado;
}
*/
//Recursivo
int factorial(int n){
  if(n>1){
    return n*factorial(n-1);
  }else{
    return 1;
  }
}
