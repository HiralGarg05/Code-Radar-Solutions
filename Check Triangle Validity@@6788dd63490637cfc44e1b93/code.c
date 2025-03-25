#include <stdio.h>

int main() {
    int a, b, c;

    // Input three sides
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if the sides form a valid triangle
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The sides %d, %d, and %d form a VALID triangle.\n", a, b, c);
    } else {
        printf("The sides %d, %d, and %d DO NOT form a valid triangle.\n", a, b, c);
    }

    return 0;
}
