#include <stdio.h>

int main (){
    printf("\nHola");
    int edad = 0;
    printf("\n edad %d\n", edad );
    scanf ("%d" , & edad);
    edad = edad * 2;
    printf("\n tu edad por dos es: %d\n", edad);

    if (edad/2>=18){
        printf("\neres mayor de edad\n");

    }
    else {
        printf("\neres menor de edad\n");

    }


       return 0;
   
}