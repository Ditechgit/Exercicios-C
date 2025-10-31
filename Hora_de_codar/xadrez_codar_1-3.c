#include <stdio.h>

int main(){

    int numero;

    printf("Escreva um número para fazer o calculo da tabuada: ");
    scanf("%d", &numero);

    for(int i = 0; i <= 10; i++){
        printf("%d x %d = %d \n", numero, i, i * numero);
    }

    return 0;
}