#include <stdio.h>
#include <stdbool.h>
int main (){

   int idade = 18;
   

  if (idade < 18) {
    printf("Menor de idade");
} else {
    if (idade < 60) {
        printf("Adulto");
    } else {
        printf("Idoso");
    }
}

    return 0;
}