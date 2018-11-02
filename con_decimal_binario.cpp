#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
 int main(){
     int D_num =0;
     int aux=0;
     int contador=0;
     string result="";
     cout<<"Numero: "; 
     cin>>D_num;
     cout<<"Numero: "<< D_num<< endl;
     if(D_num==1){
         result="1";
         
     }
     while(D_num>1){

         contador+=1;
         aux=D_num%2;
         D_num/=2;
        if(aux==0){
            result="0"+result;
        }
        if(aux==1){
            result="1"+result;
        }
        if(D_num==1){
            result="1"+result;
        }
       
         cout<<"auxiliar es: "<<aux<<endl;
         cout<< "D_num es: "<<D_num<<endl;
         if(contador==500){
            break;    
         }        
         
     }
     cout<< "El resultado es: " << result<< endl;

     return 0;
 }
 