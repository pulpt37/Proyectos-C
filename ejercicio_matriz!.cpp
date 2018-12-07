#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int m=0;
    
    cout<<"De que tamaño es: ";
    cin>>m;
    int matriz[m][m];
    //cout << m;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j){
                matriz[i][j]=1;

            }else{
                matriz[i][j]=0;
            }
        }
    }
    
    for(int i=0;i<m;i++){
        cout<<"\t\n";
        for(int j=0;j<m;j++){
        cout<<matriz[i][j];
        }
    }

    cout<<"\n";
    return 0;
}