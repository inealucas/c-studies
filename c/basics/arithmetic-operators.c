#include <stdio.h>

int main() {

    int x;
    int y;

    x = 10;
    y = 2;

    printf("x = %d\n", x);
    printf("y = %d\n\n", y);

    printf("Addition: %d\n", x + y);
    printf("Subtraction: %d\n", x - y);
    printf("Multiplication: %d\n", x * y);
    printf("Division: %d\n", x / y);
    printf("Modulus: %d\n\n", x % y);

    x += 5;
    printf("x += 5 -> %d\n", x);

    x -= 3;
    printf("x -= 3 -> %d\n", x);

    x *= 2;
    printf("x *= 2 -> %d\n", x);

    x /= 2;
    printf("x /= 2 -> %d\n\n", x);

    int a;
    int b;

    a = 3;
    b = 2;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("a / b = %d\n", a / b);

    /*
        In C, if you use int in a division,
        the result is also int.

        Example:
        3 / 2 = 1

        The decimal part is removed.
    */

    return 0;
}