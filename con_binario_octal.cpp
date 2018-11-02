
#include <string>
#include <iostream>
using namespace std;

int main(){
    string num;
    int resultado=0;
    printf("Que numero tienes: ");
    cin>>num;
    cout << "String es: "<<num<<endl;
    cout << "El tamaño es: "<<num.length()<<endl;
    if(num.length()==1 && num =="0"){
        resultado=0;
    }
    if(num.length()==1 && num =="1"){
        resultado=1;
    }
    cout <<"El resultado es: "<<resultado<<endl;
    
    return 0;
}
