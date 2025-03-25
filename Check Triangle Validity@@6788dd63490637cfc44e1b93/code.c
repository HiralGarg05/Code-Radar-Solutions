#include <stdio.h>

int main() {
    int a, b, c;

    // Input three sides
    
    scanf("%d %d %d", &a, &b, &c);

    // Check if the sides form a valid triangle
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Valid");
    } else {
        printf("Invalid");
    }

    return 0;
}
