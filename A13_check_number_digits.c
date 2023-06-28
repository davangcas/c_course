#include <stdio.h>

int main(){
    int number;

    printf("Ingrese un numero entre 1 y 99 : ");
    scanf("%d", &number);

    if ((number / 10) > 0){
        printf("El numero posee dos digitos\n");
    } else {
        printf("El numero posee un solo digito\n");
    }

    return 0;
}
