#include <stdio.h>
#include <stdbool.h>



int main() {

// Boolean values
bool isOnline = 0;
bool isStudent = true;

//Single characters
char grade = 'F';
char symbol = '!';
char currency = '$';

//Strings (arrays of characters)
char name[] = "Lucas Sousa";
char food[] = "Sushi";
char email[] = "fofinho123@gmail.com";

//OUTPUT
printf ("%d\n", isOnline);
printf ("You are a student %d\n", isStudent);

printf("Your email is %s\n", email);
printf("Your favorite food is %s\n", food);
printf("Hello i am %s\n\n", name);


printf("My grade is %c\n", grade);
printf("My favorite symbol is %c\n", symbol);
printf("The currency is %c\n", currency);


return 0;
}