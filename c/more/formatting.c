#include <stdio.h>

int main(){

// Integer variables (basic data types)
int num1 = 1; 
int num2 = 10;
int num3 = 100;

// Float variables (decimal numbers)
float price1 = 19.99;
float price2 = 1.50;
float price3 = -100.00;


/*
    printf formatting:
    %+7.2f

    +  -> always displays the sign (+ or -)
    7  -> minimum field width
    .2 -> displays 2 decimal places
    f  -> float/double value
*/

printf("%+7.2f\n", price1);
printf("%+7.2f\n", price2);
printf("%+7.2f\n", price3);

printf("\n");


    /*
        %d  -> integer
        %+d -> integer with sign (+ or -)
    */


printf("%+d\n", num1);
printf("%+d\n", num2);
printf("%+d\n", num3);


return 0;
}