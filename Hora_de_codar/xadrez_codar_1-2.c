#include <stdio.h>

int main(){
    int numero;

    do{

        printf("Escreva um numero par para sair do programa...\n");
        scanf("%d", &numero);

        if(numero % 2 == 0){ //par
            printf("%d é par!\n", numero); //par
        }  else {
            printf("%d é impar!\n", numero); //impar
        }

    } while (numero % 2 != 0); //impar

    printf("\nVocê digitou um número par, saindo do programa...\n");

    return 0;
}