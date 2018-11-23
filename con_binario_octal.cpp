
#include <string>
#include <iostream>
using namespace std;

string convertidor_a_octal(string x);

int main(){
    string num_ciclos;
    string num;
    int c=0;
    int ciclo=0;
    string octal="";
    int residuo=0;
    string num_residuo;
    int resultado=0;
    printf("Que numero tienes: ");
    cin>>num;
    // cout << "String es: "<<num<<endl;
    // cout << "El tamaño es: "<<num.length()<<endl;
    ciclo=num.length()/3;
    residuo=num.length()%3;
    //11
    if(residuo!=0){
        num_residuo=num.substr(0,residuo);
        octal=convertidor_a_octal(num_residuo);
        num=num.substr(residuo,num.length()-1);
        cout <<"num ciclos: "<<num_ciclos<<endl;
    }
    ciclo=ciclo*3;
    string aux;
    for(int i=0;i<ciclo;i+=3){
        

        cout <<"sub: "<<num.substr(0,3)<<endl;
        aux=num.substr(0,3);
        num=num.substr(3,num.length()-1); 
        cout <<"1convertidor octal: "<<convertidor_a_octal(aux)<<endl;
        octal+=convertidor_a_octal(aux);
        
        
    }
    // cout <<"el residuo es: "<< residuo<<endl;
    // cout <<"el ciclo es: "<< ciclo<<endl;
  
    cout <<"El resultado es: "<<octal<<endl;
    
    return 0;
}
string convertidor_a_octal(string x){
    int aux=1;
    int num=0;
    for(int i=x.length()-1;i>=0;i--){
        if(x[i]=='1'){
            num+=aux;
        }
        aux*=2;
    }
    return to_string(num);
    }

