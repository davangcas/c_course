#include <stdio.h>

int main(){
    int first_number, second_number;
    float result;

    printf("Ingrese el valor del primer numero : ");
    scanf("%d", &first_number);
    printf("Ingrese el valor del segundo numero : ");
    scanf("%d", &second_number);

    if (first_number > second_number){
        result = first_number + second_number;
        printf("El resultado de la suma entre %d y %d es : %.2f \n", first_number, second_number, result);
        result = first_number - second_number;
        printf("El resultado de la resta entre %d y %d es : %.2f \n", first_number, second_number, result);
    } else {
        result = first_number * second_number;
        printf("El resultado de la multiplicacion entre %d y %d es : %.2f \n", first_number, second_number, result);
        result = first_number / second_number;
        printf("El resultado de la division entre %d y %d es : %.2f \n", first_number, second_number, result);
    }

    return 0;
}
