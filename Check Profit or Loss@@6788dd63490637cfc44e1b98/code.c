#include<stdio.h>
int main(){
    int a,b;
    scanf("%d",&a);
    if(a>b){
        printf("Profit");
    }
    else if(a<b){
        printf("Loss");
    }
    else if(a==b){
        printf("No loss/No profit");
    }
}