#include <stdio.h>

int main(){
    float first_number, second_number, thirth_number, average;

    printf("Ingrese el valor del primer numero : ");
    scanf("%f", &first_number);
    printf("Ingrese el valor del segundo numero : ");
    scanf("%f", &second_number);
    printf("Ingrese el valor del tercer numero : ");
    scanf("%f", &thirth_number);

    average = (first_number + second_number + thirth_number) / 3;
    printf("El promedio de los tres numeros es : %.2f\n", average);

    return 0;
}
