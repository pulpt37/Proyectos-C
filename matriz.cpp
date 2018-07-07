#include <stdio.h>

int main(){
  /*int matriz_1 [3][3];
  //int matriz_1 [i][j];
  matriz_1[0][0]=10;
  matriz_1[0][2]=25;
  matriz_1[2][1]=7;
  matriz_1[0][1]=8;
  matriz_1[1][1]=12;
  matriz_1[2][0]=14;
  matriz_1[2][2]=2;
  matriz_1[1][0]=9;
  matriz_1[1][2]=35;
  printf("%d-%d-%d\n",matriz_1[0][0],matriz_1[0][1],matriz_1[0][2]);
  printf("%d-%d-%d\n",matriz_1[1][0],matriz_1[1][1],matriz_1[1][2]);
  printf("%d-%d-%d\n",matriz_1[2][0],matriz_1[2][1],matriz_1[2][2]);*/
  int n=0;
  int m=0;
  int i=0;
  int j=0;
  printf("\nDame su valor en n: ");
  scanf("%d",&n);
  printf("\nDame su valor en m: ");
  scanf("%d",&m);
  int matriz_1 [n][m];
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      printf("Dame la posicion [%d][%d]: ",i,j);
      scanf("%d",&matriz_1[i][j]);
    }
  }
  int mayor=0;
  for(i=0;i<n;i++){
    mayor=0;
    for(j=0;j<m;j++){
      if(matriz_1[i][j]>mayor){
        mayor=matriz_1[i][j];
      }
    }

    printf("Col %d: %d\n",i+1,mayor);
  }


  return 0;
}
