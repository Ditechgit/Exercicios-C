#include <stdio.h>

int main(){
    char linha [10] = {'A','B','C','D','E','F','G','H','I','J'};
    char coluna[10];


    int tabuleiro [10][10];

    for (int i = 0; i < 10; i++){
        printf("   %c", linha[i]);
    }
    printf("\n");
    
    for (int i = 0; i < 10; i++){
        printf("%c  ", coluna[i]);
        for (int j = 0; j < 10; j++){
            
            tabuleiro[i][j] = 0;
            printf("%d   ", tabuleiro[i][j]);
        }
        printf("\n");
    }


}
    