#include<stdio.h>
int main(){
    int temp, first, second;
    printf("Enter two number: ");
    scanf("%d %d", &first, &second);
    temp = first;
    first = second;
    second = temp;
    printf("After swapping, first = %d\n", first);
    printf("After swapping, second = %d",second );
    return 0;
}