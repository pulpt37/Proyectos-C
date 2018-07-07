#include <stdlib.h>
#include <stdio.h>

int  incognita=0;
int i=0;
int j=0;
int m=0;
int n=0;
int a=0;
int b=0;
float aux=0;

int main (){
  printf("\nCuantas incognitas tienes: ");
  scanf("%d",&incognita);
  float matriz_1[incognita][incognita+1];
  n=incognita;
  m=incognita+1;
  for(i=0;i<n;i++){
    system("CLEAR");
    for(j=0;j<m;j++){
      if(j==m-1){
        printf("Dame el resultado de la ecuacion %d: ",i+1 );
        scanf("%f",&matriz_1[i][j]);
      }else{
        printf("Para la ecuacion #%d\nDame el valor X%d: ",i+1,j+1);
        scanf("%f",&matriz_1[i][j]);
      }
    }
  }
  for(i=0;i<n;i++){
      aux=matriz_1[i][i];
    for(j=0;j<m;j++){
        matriz_1[i][j]=matriz_1[i][j]/aux;
    }
    for(a=0;a<n;a++){
      if(a!=i){
        aux=matriz_1[a][i];
        for(b=0;b<m;b++){
          matriz_1[a][b]=matriz_1[a][b]-(matriz_1[i][b]*aux);
        }
      }
    }
  }
  system("CLEAR");
  for(i=0;i<n;i++){
    printf("El valor x%d es: %g\n",i+1,matriz_1[i][incognita]);
  }
  printf("Code by: Manuel M_M\n");
  return 0;
}
