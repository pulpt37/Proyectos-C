#include <stdio.h>
int i=0;
struct estudiante{
  int edad;
  int peso;
  bool enfermedad;
  float calificacion;
  void constructor(){
  this->edad=0;
  this->peso=0;
  this->enfermedad=0;
  this->calificacion=0;
  };
  void cambiar_calificacion(){
    //this->calificacion=calificacion+1;
    this->calificacion+=.5;
  }
  void funcion_1(){
    printf("Funcion sin valor");
  }
  int funcion_2(int a){
    printf("Funcion con valor");
    return (a*2);
  }

};




//estudiante estudiantes[10];
struct carro{
  int puertas;
  int llantas;
  int ventanas;
  void constructor(){
    this->puertas=5;
    this->llantas=5;
    this->ventanas=5;
  };
}vento;

 int main(){
   int n;
   float promedio=100;
   printf("Dame la cantidad de estudiantes: " );
   scanf("%d",&n);
   estudiante estudiantes[n];
   for(i=0;i<n;i++){
     printf("\nCual la calificacion, del alumno %d: ",i+1);
     scanf("%f",&estudiantes[i].calificacion);
   }

   for(i=0;i<n;i++){
     if(estudiantes[i].calificacion>=7){
       //estudiantes[i].calificacion=estudiantes[i].calificacion+1;
       estudiantes[i].cambiar_calificacion();
       printf("El estudiante #%d su calificacion es: %g\n",i,estudiantes[i].calificacion);
     }
   }


   promedio=0;
   for(i=0;i<n;i++){
     printf("El estudiante #%d , tiene una calificacion de %g\n",i+1,estudiantes[i].calificacion);
     promedio=promedio+estudiantes[i].calificacion;
   }
   promedio=promedio/n;

   printf("\nPromedio: %g\n",promedio);

   return 0;
 }
