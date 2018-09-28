#include <iostream>
#include <string>
using namespace std;
 int main(){
    string S1 = "";
    string aux = "";
    string espacio= "";
    cout << "Inserte una frase: ";
    cin >> S1;

    for (int i = S1.size(); i >=0 ; i--){
        aux += S1[i];
        cout << aux << endl;
    }
    cout<<"El texto normal es: "<<S1<<endl;
    cout<<"El texto invertido es: "<<aux<<endl;
    cout<<"size aux: "<<aux.size()<<endl;
     cout<<"size normal: "<<S1.size()<<endl;

    for(int i=0;i<aux.size()-1;i++){
        cout << "Aux_invetido: "<< aux[i+1]<< endl; 
        cout << "S1_normal: "<< S1[i]<< endl;
        if(aux[i+1]==S1[i]){
            cout << "Es un palindromo" << endl;
        }else
        cout << "No es un palindromo" << endl;
    }

    return 0;
 }
 