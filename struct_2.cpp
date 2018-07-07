#include <stdio.h>
#include <stdlib.h>

int menu(){
  int resultado;
  //system("CLEAR");
  printf("Que es lo que quieres hacer:\n\t1.-Ver lista de vehiculos\n\t2.-Ver un vehiculo\n\t3.-Definir un vehiculo\n\t4.-Hechar gasolina a un vehiculo\n\t5.-Salir\n\n\t\tR:" );
  scanf("%d",&resultado );
  return resultado;
}
struct carro{
  int llantas, puertas, volumen_motor,gasolina;
  void constructor(){
    this->llantas=4;
    this->puertas=3;
    this->volumen_motor=2;
    this->gasolina=10;
  }
  void constructor(int llantas ,int puertas,int volumen_motor,int gasolina){
    this->llantas=llantas;
    this->puertas=puertas;
    this->volumen_motor=volumen_motor;
    this->gasolina=gasolina;

  }
  void imprime(int indice) {
    printf("\n\nEl vehiculo %d tiene: \n\t%d Llantas\n\t%d puertas\n\t%d volumen_motor\n\t%d gasolina\n\n",indice+1,this->llantas,this->puertas,this->volumen_motor,this->gasolina);
  }
  void carga(int carga){
    this->gasolina+=carga;
  }
};
int main(){
  int n=0,i=0,m,aux;
  printf("\nCuantos vehiculos quieres: ");
  scanf("%d",&n);
  carro carros[n];
  for(i=0;i<n;i++){
    carros[i].constructor(1,1,1,1);
  }
  printf("\n\n" );
  while(true){
    m=menu();
    switch (m) {
      case 1:
        printf("Lista\n");
        for(i=0;i<n;i++){
          carros[i].imprime(i);
        }
        printf("\n" );
        system( "read -n 1 -s -p \"Press any key to continue...\"\n" );
        break;
      case 2:
        aux=0;
        printf("\nQue vehiculo quieres ver: " );
        scanf("%d",&aux);
        aux=aux-1;
        for(i=0;i<n;i++){
          carros[aux].imprime(aux);
          break;
        }
        break;
      case 3:
        printf("Definir\n" );
        printf("Que vehiculo quieres definir; " );
        scanf("%d",&i);
        i=i-1;
        printf("Quieres los valores por defecto: (si=1/no=0): " );
        scanf("%d",&aux );
        if(aux!=0){
          carros[i].constructor();
        }else{

          printf("\n\tInserta la Llantas..." );
          scanf("%d",&carros[i].llantas );
          printf("\n\tInserta la puertas..." );
          scanf("%d",&carros[i].puertas);
          printf("\n\tInserta la volumen motor..." );
          scanf("%d",&carros[i].volumen_motor);
          printf("\n\tInserta la carga..." );
          scanf("%d",&carros[i].gasolina );
          break;
        }
        break;
      case 4:
        printf("\n\tA que vehiculo quieres cargar gasolina; " );
        scanf("%d",&i );
        i=i-1;
        printf("\n\tQuieres los valores por defecto: (si=1/no=0): " );
        scanf("%d",&aux );
        if(aux!=0){
          carros[i].constructor();
        }else{
          printf("\n\tInserta la carga..." );
          scanf("%d",&aux );
          carros[i].carga(aux);
          break;
        }
        break;
      case 5:
        break;
        printf("Salir\n" );
    }
    if(m==5){
      break;
    }
  }
  printf("\n" );
  return 0;
}
