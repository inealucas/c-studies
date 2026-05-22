#include <stdio.h>

int main() {

    int x, y, z;
    int seconds, minutes;

    float m, l, d;
    double r;

    x = 10;
    y = 3;

    z = x + y;
    printf("10 + 3 = %d\n", z);

    z = x - y;
    printf("10 - 3 = %d\n", z);

    z = x * y;
    printf("10 * 3 = %d\n", z);

    z = x / y;
    printf("10 / 3 = %d\n", z);

    z = x % y;
    printf("10 %% 3 = %d\n", z);

    x = 6;
    y = 2;

    z = x + y * 3;
    printf("\n6 + 2 * 3 = %d\n", z);

    z = (x + y) * 3;
    printf("(6 + 2) * 3 = %d\n", z);

    x = 9;

    if (x % 2 == 0) {
        printf("\n%d is even\n", x);
    } else {
        printf("\n%d is odd\n", x);
    }

    x = 10;

    x += 5;
    printf("\nAfter += 5: %d\n", x);

    x -= 3;
    printf("After -= 3: %d\n", x);

    x *= 2;
    printf("After *= 2: %d\n", x);

    x = 5;
    y = 2;

    printf("\nInteger division: %d\n", x / y);

    m = 5.9;
    l = 8.9;
    d = 7.5;

    r = (m + l + d) / 3;

    printf("\nAverage = %.1lf\n", r);

    seconds = 120;
    minutes = seconds / 60;

    printf("\n120 seconds = %d minutes\n", minutes);

    return 0;
}