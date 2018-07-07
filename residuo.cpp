#include <stdio.h>

int main (){
  int i=0;
  int a=0;
  int n=0;

  printf("De que numero quieres el residuo: ");
  scanf("%d",&a);
  printf("\nHasta que numero quieres el residuo: ");
  scanf("%d",&n);

  for(i=1;i<=n;i=i+1){
//      printf("%d-%d\n",i,i%a);
    if(i%a==0){
      printf("\n%d es multiplo de %d",i,a);
    }
  }
  printf("\n");
return 0;
}
