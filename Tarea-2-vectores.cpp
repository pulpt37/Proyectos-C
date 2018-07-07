#include <stdio.h>

int main(){
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
    if(a[i]==100){
      a[i]=50;
    }else{
      if (a[i]<100) {
        a[i]=0;
      }
      else{
        a[i]=1;
      }
    }
  }
  
  for(i=0;i<n;i++){
    printf("\n%d\n",a[i]);
  }
  return 0;
}
