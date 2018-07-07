#include <stdio.h>

int main (){
    int i=0;
   int inicio = 0;
   int final = 0;

       printf("En que numero quieres iniciar:");
    scanf("%d",&inicio);
      printf("En que numero quieres terminar:");
    scanf("%d",&final);

    for(i=inicio;i<=final;i=i+1){

        printf("\n%d",i);


    }
      for(i=inicio;i>=final;i=i-1){
        printf("\n%d", i);
      }
    printf("\n");
       return 0;

}
