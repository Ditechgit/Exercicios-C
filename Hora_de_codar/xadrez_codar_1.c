#include <stdio.h>

int main(){
    int i = 1;

    while (i <= 10){
        
        if(i % 2 == 0){ // se o numero for divisivel por 2 e tiver o resto de 0 ele é par
            printf("O numero %d é par!\n", i);
        }else if (i % 2 != 0){ // se o numero que for divisivel por dois e tiver o resto de 0 porem for diferente de 0 ou seja 1,3 e assim por diante ele é impar
            printf("O numero %d é impar!\n", i);
        }

        i++;
    }

}