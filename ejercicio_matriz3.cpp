#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Tamaño de n: ";
    cin>>n;
    cout<<"Tamaño de m: ";
    cin>>m;
    int matriz[n][m];
    int vec[4];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("La posicion i=%d j=%d: ",i,j);
            cin>>matriz[i][j];
        }
    }
    cout<<endl;
    for(int i=1;i<n-1;i++){
        for(int j=1;j<m-1;j++){
            printf("Pos: (%d,%d), valor: %d, vecinos: ",i,j,matriz[i][j]);
            for(int k=-1;k<=1;k++){
                for(int l=-1;l<=1;l++){
                    cout<<matriz[i+k][j+l]<<" ";
                }
            }
            printf("\n");
        }
    }
    for(int i=0;i<n;i++){
        cout<<"\n\t";
        for(int j=0;j<m;j++){
            
            cout<<matriz[i][j]<<" - ";
        }
    }

    cout << endl;
    return 0;
}
