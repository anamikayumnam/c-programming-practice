#include<stdio.h>
int main(){
    printf("Enter your number: ");
    int num;
    scanf("%d", &num);
    if(num>0){
        printf("you enter is positive.");
    }
    else if(num<0){
        printf("you enter is negative.");

    }
    else
    printf("you enter ia 0.");
    return 0;
}