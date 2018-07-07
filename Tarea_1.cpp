//
//  Tarea_1.cpp
//
//
//  Created by Manuel M_M on 31/03/18.
//

#include <stdio.h>


int main (){
    int i = 0;
    int a = 100;
    int b = 0;
    int n = 0;

    printf("\nQue multiplos obtener: ");
    scanf("%d",&a);
    printf("\nCuantos quieres imprimir: ");
    scanf("%d",&n);


    for(i=0;i<n;i= i+1){

        printf("%d\n",b);
        b=a+b;

        }
          printf("\n");

    return 0;
}
