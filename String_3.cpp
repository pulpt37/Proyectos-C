#include <iostream>
#include <string>
using namespace std;
 int main(){
     int contador=0;
     int i=0;
     int j=0;
    string S1 = "";
    string S2 = "";
    string es = " ";
    cout << "Inserte una frase: ";
    cin >> S1;    
    S1[j] = '\0';  
    cout << endl;
    cout << "Inserte palabra a comparar: ";
    cin >> S2;


    for(i=0;i<S2.size();i++){
        //cout << endl << "di una vuelta, Vuelta: " << i << endl;
       // cout << "Leta: " << S2[i] << endl; 
        for(j=0;j<S1.size();j++){
            //cout << "string uno: "<< S1[j] << endl;
        
            if (S1[j]==S2[i]){
                contador+=1;
                //cout << endl << endl << endl << "Sume uno" << endl;
                //cout << endl << "contador: " << contador << endl;
            }   
        }
    }

    cout << endl << "coincidencias: " << contador << endl;
     return 0;
 }
 