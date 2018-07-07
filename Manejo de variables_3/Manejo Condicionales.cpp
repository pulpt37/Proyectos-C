//
//  Manejo Condicionales.cpp
//  
//
//  Created by Manuel M_M on 10/03/18.
//
#include <stdio.h>

int main (){
    int a=0;
    int b=0;
    a=5;
    b=a;
    a=5+4;
    a=2*a;
    b+=5;// = b=b+5;
    b-=4;// = b= b-4;
    int c = a+b;
    printf("\nValor de c: %d\nValor de b: %d\n",c,b);
    
    return 0;
}
