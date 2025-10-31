#include <stdio.h>

int main(){

    char letra;

    for (int i = 1; i <= 5; i++){ //loop externo

        letra = 'A';
        for (int j = 1; j <= i; j++){ //loop interno, tem o limite definido de acordo com o loop externo nesse exemplo
            printf("%c ", letra);

            ++letra; //incremento de letra, toda vez que fizer o loop ele vai passar de A para B e depois de A para B e B para C
        }

        printf("\n");
    }

    return 0;
}