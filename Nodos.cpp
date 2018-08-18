#include <stdio.h>

int main(){
  int num=0;
  int i=0;
  int j=0;
  int inicio=0;
  int termino=0;
  bool victoria=false;
  printf("\nCuantos nodos tienes? ");
  scanf("%d",&num );
  int matriz_nodos[num][num];
  
  int ruta[num];
  int pila[num];
  int aux_ruta=0;
  int aux_pila=0;

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
  ruta[aux_ruta]=inicio;
  printf("En donde quieres terminar: ");
  scanf("%d",&termino);
  j=0;
  i=inicio;
  
  int aux;
  while (j<num) {
      if (i==termino) {
      victoria=true;
      break;
    }
    printf("Posicion actual: i:%d\tj:%d\n",i,j );
    printf("Valor en matriz: %d\n",matriz_nodos[i][j]);
    scanf("%d",&aux );
  
    //Salto de linea->

    if(matriz_nodos[i][j]!=0){
      matriz_nodos[i][j]=0;
      printf("vengo de : i:%d\tj:%d\n",i,j );
      i=j;
      j=0;
      aux_ruta++;
      ruta[aux_ruta]=i;

      printf("Estoy en  : i:%d\tj:%d\n",i,j );
      continue;
    }
    j++;

    //<-
  }
  

  if(victoria==true){
    printf("Llegaste\n" );
    for(i=0;i<aux_ruta-1;i++){
      printf("Ruta: %d",ruta[i]);
    }
  }else{
    printf("No se encontro camino\n");
  }

  return 0;
}
