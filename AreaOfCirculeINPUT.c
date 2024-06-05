#include<stdio.h>
int main ()
{
    float pi= 3.1415;
    float radius;
    printf("Enter radius:"); 
    scanf("%f",&radius);
    float area = (pi*radius*radius);
    printf("the area of cicle:.2%f",area);
    return 0 ;
}