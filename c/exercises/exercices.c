#include <stdio.h>
#include <stdbool.h>

int main() {

int year = 18;
float height = 1.70;
char letter = 'L';
char name[] = "Lucas Sousa";
bool IsStudent = true;

printf("I'm %d years old\n", year);
printf ("My height is %.2f\n", height);
printf("My first letter of my name is %c\n", letter );
printf("My name is %s\n", name);
printf("Am i a student? %d\n", IsStudent);


return 0;
}