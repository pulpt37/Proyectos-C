#include <stdio.h>

int main(){
  int num=0;
  int i=0;
  int j=0;
  int inicio=0;
  int termino=0;
  bool victoria=false;
  int matriz_reserva[num][num];
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
  printf("Desde que nodo quieres empezar: ");
  scanf("%d",&inicio);
  printf("En donde quieres terminar: ");
  scanf("%d",&termino);
  j=0;
  i=inicio;
  int aux;
  while (j<num) {
    printf("Posicion actual: i:%d\tj:%d\n",i,j );
    printf("Valor en matriz: %d\n",matriz_nodos[i][j]);
    scanf("%d",&aux );
    if (i==termino) {
      victoria=true;
      break;
    }
    //Salto de linea->
    if(matriz_nodos[i][j]!=0){
      i=j;
      j=0;
      //continue;
      int aux=matriz_nodos[i][j];
      matriz_nodos[i][j]-=aux;
      continue;
    }
    j++;

    //<-
  }
  if(victoria==true){
    printf("Llegaste\n" );
    printf("Ruta %d, %d",i,j );
  }else{
    printf("No se encontro camino\n");
  }

  return 0;
}
