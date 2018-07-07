#include <stdio.h>
#include <stdlib.h>
void suma_filas();
void suma_columnas();
void mayor_filas();
void mayor_columnas();
int n=0;
int m=0;
int i=0;
int j=0;
int suma=0;

int main() {
    int menu=0;
    bool w_menu=false;
    while(w_menu==false){
    printf("Que quieres hacer:\n\t1.Suma de filas\n\t2.Suma de columnas\n\t3.Mayor fila\n\t4.Mayor columna\n\t\tR:");
    scanf("%d",&menu);
    switch (menu) {
      case 1:
        printf("1.Suma Filas\n");
        suma_filas();
        w_menu=true;
        break;
      case 2:
        printf("2.Suma de Columnas\n");
        suma_columnas();
        w_menu=true;
        break;
      case 3:
        printf("3.Mayor Fila\n");
        mayor_filas();
        w_menu=true;
        break;
      case 4:
        printf("4.Mayor Columna");
        mayor_columnas();
        w_menu=true;
        break;
      default:
        system("CLEAR");
        printf("Opción no valida intentalo de nuevo\n");
        system("CLEAR");

        break;
    }
  }
    return 0;
  }

void suma_filas(){
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
}
void suma_columnas(){
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
  for(j=0;j<m;j++){
      suma=0;
      for(i=0;i<n;i++){
        suma=suma+matriz_1[i][j];
      }
      printf("La suma de la columna %d: %d\n",j+1,suma);
    }
}
void mayor_filas(){
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
}
void mayor_columnas(){
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
}
