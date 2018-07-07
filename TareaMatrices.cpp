#include <stdio.h>
//Mayor por columna
/*int main() {
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
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      printf("%d\t",matriz_1[i][j]);
    }
    printf("\n");
  }
  int mayor=0;
  for(j=0;j<m;j++){
    mayor=0;
    for(i=0;i<n;i++){
        if(matriz_1[i][j]>mayor){
          mayor=matriz_1[i][j];
        }
      }
    printf("Col %d: %d\n",j+1,mayor);
    }





  return 0;
  }
*/
//Suma
  /*int main() {
    int n=0;
    int m=0;
    int i=0;
    int j=0;
    int suma=0;
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
    for(i=0;i<n;i++){
      for(j=0;j<m;j++){
        printf("%d\t",matriz_1[i][j]);
      }
      printf("\n");
    }
      for(i=0;i<n;i++){
        suma=0;
        for(j=0;j<m;j++){
          //suma=matriz_1[i][j]+matriz_1[i][j];
          suma=suma+matriz_1[i][j];
          //printf("voy en la suma %d y es: %d\n",i+1,suma);
          }
        printf("La suma por fila %d es: %d\n",i+1,suma);
      }


    return 0;
    }
*/
int main() {
  int n=0;
  int m=0;
  int i=0;
  int j=0;
  int suma=0;
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
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      printf("%d\t",matriz_1[i][j]);
    }
    printf("\n");
  }
    /*for(j=0;j<m;j++){
      suma=0;
      for(i=0;i<n;i++){
        suma=suma+matriz_1[i][j];
      }
      printf("La suma de la columna %d: %d\n",j+1,suma);
    }
  */
    for(i=0;i<n;i++){
      suma=0;
      for(j=0;j<m;j++){
        suma=suma+matriz_1[i][j];
      }
      printf("La suma de la fila %d: %d\n",i+1,suma);
    }
  return 0;
  }
