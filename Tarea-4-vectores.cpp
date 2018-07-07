#include <stdio.h>

int main(){

  int n=0;
  int i=0;
  int j=0;
  int aux=-2147483647;
  int pos=0;
  printf("\nCuantos numeros quieres: ");
  scanf("%d",&n);
  int a[n];
  for (i=0;i<n;i=i+1){
    printf("Numero %d:  ",i+1);
    scanf("%d",&a[i]);
  }
  int contador=0;
  for (j=0;j<n;j=j+1){
    aux=0;
    for (i=j;i<n;i=i+1){
      contador++;
      if(a[i]>a[j]){
        aux=a[i];
        a[i]=a[j];
        a[j]=aux;
      }
    }
    /*for (i=0;i<n;i=i+1){
      aux=a[pos];
    a[pos]=a[j];
    a[j]=aux;
    }
    */
  }

  for(i=0;i<n;i++){
    printf("\n%d\n",a[i]);
  }


  return 0;
}
