#include <stdio.h>

int main(){
  int num=0;
  int i=0;
  int j=0;
  printf("\nCuantos nodos tienes? ");
  scanf("%d",&num );
  int matriz_nodos[num][num];
  for(i=0;i<num;i++){
    for(j=0;j<num;j++){
      printf("Posicion actual: i:%d-j:%d\n",i,j);
      printf("El nodo %d, se conecta con el nodo %d: ",i,j);
      scanf("%d",&matriz_nodos[i][j]);
      printf("\n\n");
    }
  }
  for(i=0;i<num;i++){
    for(j=0;j<num;j++){
      printf("\t%d\t",matriz_nodos[i][j]);
    }
    printf("\n");
  }
  return 0;
}
