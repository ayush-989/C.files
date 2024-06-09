#include <stdio.h>

int main() {
    float l, b, A, P;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &l);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &b);

    A = l * b;
    P = 2 * (l + b);

    if (A > P) {
        printf("Area is greater than perimeter.\n");
    } else {
        printf("Area is not greater than perimeter.\n");
    }

    return 0;
}
