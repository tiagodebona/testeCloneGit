#include <stdlib.h>
#include <stdio.h>

int main(){

    int idade, i;

    printf("Informe sua idade: ");
    scanf("%i", &idade);

    i = idade - 1;

    printf("Sua idade menos 1 é: %i\n\n", i);
    
    idade = idade + 1;
    
    printf("Sua idade original: %i\n", idade);

    return 0;
}
