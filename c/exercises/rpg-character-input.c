#include <stdio.h>
#include <string.h>

int main() {

   char name [30] = "";
   int age = 0;
   int level = 0;
   float height = 0.0f;
   char type = '\0';
   

    
    printf("Player name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    
    printf("Enter your player age: ");
    scanf("%d", &age);

    printf("Enter your player level: ");
    scanf("%d", &level);
    
    printf("Enter your player height: ");
    scanf("%f", &height);

    printf("Enter your class type: ");
    scanf(" %c", &type);

     printf("\n ------ CHARACTER INFO ------ \n");
      printf("%s\n", name);
      printf("%d\n", age);
      printf("%d\n", level);
      printf("%.2f\n", height);
      printf("%c\n", type);
      


    return 0;
}