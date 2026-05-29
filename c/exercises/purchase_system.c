#include <stdio.h>
#include <string.h>

int main (){

char product[50] = "";
char option;
char currency = '$';
float price = 0.0f;
float total = 0.0f;
int quantity;
char symbol = '%';
double percentage;
double r; 


printf("What would you like to buy?: ");
fgets(product, sizeof(product), stdin);
product[strlen(product) - 1 ] = '\0';

printf("What is the unit price?: ");
scanf("%f", &price);

printf("How many would you like to buy?: ");
scanf("%d", &quantity);

printf("What is the discount percentage?: ");
scanf("%lf", &percentage);
getchar();

printf("Would you like a bag? (y/n): ");
scanf("%c", &option);

if (price <= 0){
    printf("\nInvalid price\n"); //price
} else { 
}

if (quantity <= 0) {
 printf("\nInvalid quantity.\n"); //quantity
} else {
}

if (percentage < 0 || percentage > 100) {
 printf("Invalid value");
} else {
}



return 0;
}