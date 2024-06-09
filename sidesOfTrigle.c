#include<stdio.h>
int main(){
int a,b,c;
printf("Enter three number");
scanf("%d%d%d",&a,&b,&c);
if(a+b>c&&b+c>a&&a+c>b){
    printf("the number are three side of triangle: ");

}
else
{
    printf("no , its not a sides of triangle");
}
return 0;
}


