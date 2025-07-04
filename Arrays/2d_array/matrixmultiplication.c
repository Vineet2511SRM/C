#include<stdio.h>

int main(){
    int T[2][2],V[2][2];
    int S[2][2] = {{0,0},{0,0}};
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("T[%d][%d]: ",i,j);
            scanf("%d",&T[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("V[%d][%d]: ",i,j);
            scanf("%d",&V[i][j]);
        }
    }
        
    printf("\n");
   
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                S[i][j]+= T[i][k]*V[k][j];
                

            }
            printf("S[%d][%d]: %d  ",i,j,S[i][j]);

        }
        printf("\n");
    }
    

 
return 0;
}


