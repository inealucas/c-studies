#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;

    printf("=== Prime Checker ===\n\n");

    while (1) {
        printf("Enter a number (0 to quit): ");
        scanf("%d", &n);

        if (n == 0) {
            printf("Bye!\n");
            break;
        }

        if (isPrime(n))
            printf("%d is prime.\n\n", n);
        else
            printf("%d is not prime.\n\n", n);
    }

    return 0;
}