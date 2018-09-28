#include <iostream>
#include <string>
using namespace std;
 int main(){
       string S1 = "";
    string aux = "";
    string espacio= "";
    cout << "Inserte una frase: ";
    cin >> S1;
    cout << endl;
    cout << "Inserte palabra a comparar: ";
    cin >> aux;

    for(int i=0;i<S1.size();i++){
         cout << S1[i] << endl;
         cout << aux << endl;
         

    }
     return 0;
 }
 