#include <stdio.h>

int main(){
    int first_number, second_number, thirth_number, fourth_number, sum_result, product_result;

    printf("Ingrese el valor del primer numero : ");
    scanf("%d", &first_number);
    printf("Ingrese el valor del segundo numero : ");
    scanf("%d", &second_number);
    printf("Ingrese el valor del tercer numero : ");
    scanf("%d", &thirth_number);
    printf("Ingrese el valor del cuarto numero : ");
    scanf("%d", &fourth_number);

    sum_result = first_number + second_number;
    product_result = thirth_number * fourth_number;

    printf("El resultado de la suma de %d + %d es : %d\n", first_number, second_number, sum_result);
    printf("El resultado de la multiplicacion de %d * %d es : %d\n", thirth_number, fourth_number, product_result);

    return 0;
}
