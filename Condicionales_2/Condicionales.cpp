#include <stdio.h>

int main (){
    
    int lol=0;
    int pop=0;
    int olo=0;
    
    bool entrar=false;
    if(entrar){
        printf("Entro");
    }
        
    printf("\nColoca el valor de lol: ");
    scanf("%d",&lol);
    printf("\nColoca el valor de pop:");
    scanf("%d",&pop);
    printf("\nColoca el valor de olo: ");
    scanf("%d",&olo);
          
    //lol=50;
    //pop=0;
    //olo=90;
/*
    if (lol > pop){
        if(lol>olo){
            //lol gano
            printf("\nlol es la mayor\n");
            //lol gano
        }
    }
    if (pop > lol){
        if(pop > olo){
            printf ("\npop es la mayor\n");
        }
    }
    if (olo > lol){
        if(olo > pop){
            printf ("\nolo es la mayor\n");
        }
    }
 */
    
    if(lol > pop){
        if(lol>olo){
            printf("\nlol gano\n");
        }else{
            printf("\nolo es la mayor\n");
        }
    }else{
        if(pop>olo){
            printf("\npop es la mayor\n");
        }else{
            printf("\nolo es la mayor\n");
        }
    }
    
    return 0;
}
