#include <stdio.h>

void potencia(int a, int b){

    int result = 1;
    
    for(int i = 0; i < b; i++){
        result = result * a;
    }

    printf("%d",result);
}


int main(){

    int a = 2;
    int b = 2;
    potencia(a,b);
}