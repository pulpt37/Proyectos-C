#include <iostream>
#include <string>
using namespace std;

int main(){
    int contador=0;
    int n;
    int m;
    int i;
    int matriz_1 [i][n];
    for(int i =0;i<512;i++){
        i=contador;
        if (contador==0){
            contador+=1;
         matriz_1[i][n]=contador; 
         }else contador-=1; 
         matriz_1[i][n]=contador;
    }
    cout << "numero "<< i <<": "<< matriz_1[i][n] << endl;
}