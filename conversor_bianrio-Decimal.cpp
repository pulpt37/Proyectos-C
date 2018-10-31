#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

int main(){
    double i=0;
    double aux=1;
    double Res_decimal=0;
    string num;
    printf("Que numero tienes: ");
    cin>>num;
    cout << "String es: "<<num<<endl;
    cout << "Su tamaño es: "<<num.length();
    for (i=num.length()-1;i>=0;i--){
        
        cout <<endl<<"pos: "<<i<<": "<<num[i];
        
        cout << "multiplicacion: " << aux << endl;
        
        if(num[i]=='1'){
            cout<< endl<<"\t"<<"es 1";
            Res_decimal+=aux;
            
        }else{
            cout<<endl<<"\t" << "No es 1";
        }
        aux*=2;
    }
    cout << endl<< "Resultado: "<<Res_decimal<< endl;
    cout << endl;
    return 0;
}
