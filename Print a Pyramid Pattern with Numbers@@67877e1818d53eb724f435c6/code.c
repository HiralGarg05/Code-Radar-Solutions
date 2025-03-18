#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Inner loop for printing numbers in each row
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);  
        }


        printf("\n");
    }

    return 0;
}