#include<stdio.h>
int main(){
    int cp , sp , p , l ;
    // p = profit , l = loss , cp = cost price ,  sp = selling price
    printf("Enter the cost price:");
    scanf("%d",&cp);
    printf("Entern the selling price:");
    scanf("%d",&sp);
    if(sp>cp){
        p = sp - cp ;
        printf("profit:%d",p);
    }
    if(cp>sp){
        l = cp -  sp;
        printf("loss:%d",l);
    }
    if(cp ==sp ){
        printf("NO profit NO loss");
    }
    return 0;
}
