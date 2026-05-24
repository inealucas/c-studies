#include <stdio.h>
#include <stdbool.h>
int main (){

   int idade = 18;
   double salario = 15.200;
   char sexo = 'M';
   bool habilitado = true;

   if(idade < 18){
   printf("Menor de idade");
} else {
    if(idade > 60){
     printf("Idoso");   
     } else {
        printf("Adulto");
     }

    return 0;
}