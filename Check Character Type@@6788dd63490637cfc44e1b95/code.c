#include<stdio.h>
int main(){
    char ch;
    scanf("%c",ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("Vowel");
    }
    else if('a'<=ch && ch<='z'){
        printf("Consonant");
    }
    else if('0'<=ch && ch<='9'){
        printf("Digit");
    } 
    else{
        printf("Special Charater");
    }
    
}