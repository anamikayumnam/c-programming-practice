#include<stdio.h>
int main(){
    printf ("Enter two float point number: ");
    double a,b,product;
    scanf("%lf %lf",&a, &b);
    //calculating product 
    product = a * b;
    printf("product = %.2lf", product);

    return 0;
}