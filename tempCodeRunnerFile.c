#include<stdio.h>
int main(){
    float x;
    scanf("%.2f",&x);

    //
    int y=x;
    printf("%d",y);
    float z= x-y;
    printf("fractional part of integer:%0.2f",z);
    return 0 ;
}