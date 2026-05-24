#include <stdio.h>

int main() {


float average = 2.5;
float price = 19.99;
float temperature = -10.1;

double pi = 3.14159265358979;
double e = 1.1234567890123456;


//DOUBLE
printf("The value of pi is %.15lf\n", pi);
printf("The value of e is %.15lf\n", e);


//FLOAT
printf("Your grade is %f\n", average);
printf("The price is $%f\n", price);
printf("The temperature is %.1f degrees Celsius\n", temperature);
   

return 0;
}