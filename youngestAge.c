#include <stdio.h>
int main()
{
    int a, b, c; // age of ram =a,shyam=b,ajay=c
    printf("Enter the age of ram:");
    scanf("%d", &a);
    printf("Enter the age ofshyam:");
    scanf("%d", &b);
    printf("Enter the age of ajay:");
    scanf("%d", &c);
    if (a < b && b < c)
    {
        printf("ram is youngest of them");
    }
    if (b < c && c < a)
    {
        printf("shyam is youngest of them");
    }
    if (c < a && a < b)
    {
        printf("ajay is youngest of them");
    }
    return 0;
}