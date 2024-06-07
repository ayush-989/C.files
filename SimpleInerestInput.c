#include<stdio.h>
int main(){
    float p,r,s,t;
    // p= principle,r=rate,s=simle interst,t=time
    printf("Enter a princple amount:");
    scanf("%f",&p);
    printf("Enter rate per year:");
    scanf("%f",&r);
    printf("Enter a time period:");
    scanf("%f",&t);

    s=(p*r*t)/100;
    printf("simple intrest:%f",s);
    return 0;
    
}