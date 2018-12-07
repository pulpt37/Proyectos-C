#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
 int bin_hex(char x);
 string hexa;
 int main(){
  string bin;   
  int residuo=0;
  int aux=1;
  int decimal=0;
  cout<<"Cual es tu numero: ";
  cin>>bin;
  cout<<bin<<endl;
  hex_dec=bin;
  cout<<"hexa"<<hex_dec;

 
 }
int hex_dec(char x){
     
     
     switch (x){
        case '0000':
            return 0;
            break;
        case '0001':
            return 1;
            break;
        case '0010':
            return 2;
            break;
        case '0011':
            return 3;
            break;
        case '0100':
            return 4;
            break;
        case '0101':
            return 5;
            break;     
        case '0110':
            return 6;
            break;
        case '0111':
            return 7;
            break;
        case '1000':
            return 8;
            break;
        case '1001':
            return 9;
            break;
        case '1010':
            return A;
            break;
        case '1011':
            return B;
            break; 
        case '1100':
            return C;
            break;
        case '1101':
            return D;
            break;
        case '1110':
            return E;
            break;
        case '1111':
            return F;
            break;    
            
        default :
            return ;
            break;
    }
}
  
  
 