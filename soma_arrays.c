#include <stdio.h>

void soma(int numeros[10]){
    int soma = 0;
    
    for(int i = 0; i < 10;i++){
        soma = soma + numeros[i];
    }

    printf("%d", soma);
}


int main(){


}