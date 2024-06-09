#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter a three positive integers");
    scanf("%d%d%d", &n1, &n2, &n3);
    
    if (n1 > n2 && n2 > n3)
    {
        printf("%d is greatest integers of them :", n1);
    }
    if (n2 > n1 && n2 > n3)
    {
        printf("%d is greatest integers of them :", n2);
    }
    if (n3 > n2 && n2 > n1)
    {
        printf("%d is greatest integers of them:", n3);
    }

    return 0;
}