#include <stdio.h>
#include <string.h>


int main (){

char item[50] = "";
float price = 0.0f;
int quantity = 0;
char currency = '$';
float total = 0.0f;


printf("What item you would like to buy?: ");
fgets(item, sizeof(item), stdin);
item[strlen(item) - 1 ] = '\0';

printf("What is the price for each?: ");
scanf("%f", &price);

printf("How many would you like?: ");
scanf("%d", &quantity);
printf("\nYou have bought %d %s/s\n", quantity, item);
total = price * quantity;
printf("%c%2.f", currency, total);



}