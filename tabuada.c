#include <stdio.h>

int main(){

    int a;
    int mult;

    scanf("%d", &a);

    for(int i = 1; i <= 10;i++){
        mult = a*i;
        printf("%d x %d = %d\n",a,i,mult);
    }

    return 0;
}