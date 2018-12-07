#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Tamaño: ";
    cin>>n;
    int mat[n][n];
    int vec[n*n];
    
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
        printf("dame la posicion I=%d J=%d: ",i+1,j+1);
        cin>>mat[i][j];
        } 
    }
     for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
        vec[i*n+j]=mat[i][j];
        
        } 
    }
     for(int i=0;i<n;i++){
         cout<<"\n\t";
       for(int j=0;j<n;j++){
       cout<<mat[i][j];
        
        } 
        
    }
    cout<<"\n";
    for(int i=0;i<n*n;i++){
         cout<<vec[i]<<"-";
       
    }
    
     cout<<"\n";
    
    return 0;
}
