#include<stdio.h>
int main(){
    int n;
    printf("Enter a positive integer");
    scanf("%d",&n);
    if( n%5 ==0 && n%3 ==0){
        printf("it is  divisble by 3 and 5");
    }
    if( n%5==0 || n%3==0)
        if( n%5==0){
            printf("it is divisble by 5");
        }
        else{
        printf("it is divisble by 3");
        }
    }
    else{
        printf("it is not divisible by 5 and 3");
    }
    return 0;



