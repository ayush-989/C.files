#include<stdio.h>
int main ()
{
    float n1,n2,sum;
    // n1 = number 1 , n2 = number2

    printf("Enter number1:"); 
    scanf(" %f",&n1);
    printf("Enter number2:");
    scanf("%f",&n2);
    sum= n1+n2;
    printf("sum:%f",sum);
    return 0 ;
}