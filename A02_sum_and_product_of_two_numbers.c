#include <stdio.h>

int main(){
    int first_number, second_number, sum_result, product_result;

    printf("Ingrese el primer número : ");
    scanf("%d", &first_number);
    printf("Ingrese el segundo número : ");
    scanf("%d", &second_number);

    sum_result = first_number + second_number;
    printf("El resultado de la suma de ambos números es : %d\n", sum_result);
    product_result = first_number * second_number;
    printf("El resultado del producto de ambos números es : %d\n", product_result);

    return 0;
}
