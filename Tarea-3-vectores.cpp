#include <stdio.h>

int main (){
    int n=0;
    int i=0;
    printf("\nCuantos numeros quieres: ");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i=i+1){
      printf("Numero %d:  ",i+1);
      scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++){
      a[i]=a[i]+50;
    }
    for(i=0;i<n;i++){
      printf("\n%d",a[i]);
    }
  return 0;
}
