#include<stdio.h>
int main(){
    printf("Enter two ninteger: ");
    int number1, number2, sum;
    scanf("%d %d", &number1, &number2);
    //calculating sum
    sum = number1+number2;
    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}