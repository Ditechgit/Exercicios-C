#include <stdio.h>

void recursivo(int numero){
    if(numero > 0){
        printf("%d \n", numero);  

        // recursividade é mostrado em pilha ou seja, o ultimo numero que foi contado é o primeiro a ser mostrado , caso eu queira deixa a ordem dos numero decrecentes em ordem crescente é so colocar o printf em baixo do recursivo
        recursivo(numero - 1);
    }
}

int main(){

    int quantidade = 10;

    printf("Contagem regressiva\n");
    recursivo(quantidade);

    return 0;
}