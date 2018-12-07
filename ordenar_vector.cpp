#include <stdio.h>
#include <iostream>
#include <string>
#define n 5
using namespace std;
int vueltas=0;
int aux=0;

int main (){
    
    int vec[n]={5,6,6,12,-2};
    bool repetidos=false;
    bool vec2[n];

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            vueltas++;
            cout<<"aux es: "<<aux<<" y esta en la posicion: " <<i<<endl;
            cout<<"pos_actual es:"<<vec[j]<<" y esta en la posicion: " <<j<<endl;
            // if(vec[i]==vec[j]){
            //     repetidos=true;     
            // }
            
            if(vec[i]<vec[j]){
                aux=vec[j];
                vec[j]=vec[i];
                vec[i]=aux;
                cout<<"vector: "<<"hize un cambio--------------";
            }

            
        }
    }    
    if (repetidos==true){
        cout << endl << "El vector tiene numeros repetidos"<<endl;
    }else{
        cout <<endl << "El vector no tiene numeros repetidos"<<endl;
    }
    cout<<"vueltas: "<<vueltas<<endl;
    cout << endl;
    for (int i=0;i<n;i++){
        cout << vec[i];
        if((i+1)!=n){
            cout << " / ";
        }
    }
    cout << endl;

}   