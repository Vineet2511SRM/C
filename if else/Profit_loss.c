#include<stdio.h>

int main(){
    int cprice;
    printf("Enter cost price: ");
    scanf("%d",&cprice);
    int sprice;
    printf("Enter sell price: ");
    scanf("%d",&sprice);
    if(sprice>cprice){
        printf("Profit");
    }
    if(cprice>sprice){
        printf("Loss");
    }
    if(cprice==sprice){
        printf("No profit no loss....");
    }

    return 0;
}