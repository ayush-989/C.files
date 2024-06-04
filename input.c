#include<stdio.h>
int main(){

    int a,b,r;
    // r is remaider when a is diveded by b
   
    scanf("%d%d",&a,&b);
     printf("a=%d\nb=%d\n",a,b); 
    r=a%b;
    printf("r=%d",r);
    return 0 ;
}