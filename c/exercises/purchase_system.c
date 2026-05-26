#include <stdio.h>
#include <string.h>

int main (){

char product[50] = "";
char option;
char currency = '$';
float price = 0.0f;
float total = 0.0f;
float quantity = 0.0f;
char symbol = '%';
double percentage;


printf("What would you like to buy?: ");
fgets(product, sizeof(product), stdin);
product[strlen(product) - 1 ] = '\0';

printf("What is the unit price?: ");
scanf("%f", &price);

printf("How many would you like to buy?: ");
scanf("%d", &quantity);

printf("What is the discount percentage?: ");
scanf(" %d", &percentage);


printf("Would you like a bag? (y/n): ");
scanf("%c", &option);





return 0;
}