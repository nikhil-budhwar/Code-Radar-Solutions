#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if('A'<=ch<='Z'){
        printf("Uppercase");
    }
    else if('a'<=ch<='z'){
        printf("Lowercase");
    }
}