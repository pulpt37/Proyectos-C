#include <stdio.h>
#include <iostream>
using namespace std;

 int main() {
     float x=0;
     cin>>x;
     cout << "Para el caso a:"<<endl;
     if(x<0){
         cout<< "\tPertenece al conjunto"<<endl;
     }else{
         cout<<"\tNo pertenece al conjunto"<<endl;
     }
     cout << "Para el caso b:"<<endl;
    if(x<=0){
         cout<< "\tPertenece al conjunto"<<endl;
     }else{
         cout<<"\tNo pertenece al conjunto"<<endl;
     }
     cout << "Para el caso c:"<<endl;
     if(x>0&&x<10){
         cout<<"\tPertenece al conjunto"<<endl;
     }else{
         cout<<"\tNo pertenece al conjunto"<<endl;
     }
      cout << "Para el caso d:"<<endl;
     if((x>-12&&x<=5)||(x>=7&&x<=10)){
         cout<<"\tPertenece al conjunto"<<endl;
     }else{
         cout<<"\tNo pertenece al conjunto"<<endl;
     }
     return 0;
 }
 