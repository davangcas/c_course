#include <stdio.h>

int main(){
    int salary;

    printf("Ingrese el salario a analizar : $ ");
    scanf("%d", &salary);

    if (salary > 3000){
        printf("El salario supera los $ 3000\n");
    }

    return 0;
}
