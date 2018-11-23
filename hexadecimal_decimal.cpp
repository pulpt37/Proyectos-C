#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
 int hex_dec(char x);
 int main(){
  string hex;   
  int aux=1;
  int decimal=0;
  cout<<"Cual es tu numero: ";
  cin>>hex;
  cout<<hex<<endl;
  for(int i=hex.length()-1;i>=0;i--){
      cout << hex_dec(hex[i])<<endl;
      decimal+=hex_dec(hex[i])*aux;
      aux*=16;
  }
  cout<<"El resultado es: "<<decimal<<endl;
     return 0;
 }
 int hex_dec(char x){
     
     
     switch (x){
        case 'A':
            return 10;
            break;
        case 'B':
            return 11;
            break;
        case 'C':
            return 12;
            break;
        case 'D':
            return 13;
            break;
        case 'E':
            return 14;
            break;
        case 'F':
            return 15;
            break;     
        case '0':
            return 0;
            break;
        case '1':
            return 1;
            break;
        case '2':
            return 2;
            break;
        case '3':
            return 3;
            break;
        case '4':
            return 4;
            break;
        case '5':
            return 5;
            break; 
        case '6':
            return 6;
            break;
        case '7':
            return 7;
            break;
        case '8':
            return 8;
            break;
        case '9':
            return 9;
            break;    
            
        default :
            return 0;
            break;
    }
 }
 