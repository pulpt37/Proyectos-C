#include<stdio.h>

int main (){
  int a=0,b=0;
  printf("A: " );
  scanf("%d",&a);
  printf("B: " );
  scanf("%d",&b);




  if(a==0){
    printf("A es cero\n" );
    if(b==0){
      printf("Ambos son cero\n");
    }
  }
  if(a==0 && b==0){
    printf("Los dos son cero\n");
  }

  if(a==0 || b==0){
    printf("Por lo menos uno de los dos es cero\n");
  }

  if(b==0){
    printf("B es cero\n");
  }
  if(a==0){
    printf("A es cero\n");
  }
   if(a!= 0 && b!= 0){
     printf("\nNingno de los dos es cero\n");
   }

  /*
  if(a==0 && b==0){
    printf("Ambos son cero\n");
  }
  if(a==0 || b==0){
    printf("Por lo menos uno de los dos es cero\n");
  }

  }*/
  return 0;
}
