#include<stdio.h>
int main(){
    printf("Enter your character: ");
    char c;
    scanf("%c", &c);
    if(isalpha(c))
    printf("%c is alphabet.", c);
    else
    printf("%c is not alphabet.", c);
    return 0;
}