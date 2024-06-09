#include<stdio.h>
int main (){
    int n ;
    printf("Enter a number");
    scanf("%d",&n);

    if(n>0){
        printf("absolute vaule:%d",n);

    }
else{
    printf("absolute  value:%d",-n);
}
    return 0;
}