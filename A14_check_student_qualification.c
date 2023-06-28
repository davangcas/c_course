#include <stdio.h>

int main(){
    int first_note, second_note, thirth_note;
    float result;

    printf("Ingrese la primer nota : ");
    scanf("%d", &first_note);
    printf("Ingrese la segunda nota : ");
    scanf("%d", &second_note);
    printf("Ingrese la tercera nota : ");
    scanf("%d", &thirth_note);

    result = (first_note + second_note + thirth_note) / 3.0;

    if (result >= 7){
        printf("El alumno esta promocionado con un %.2f\n", result);
    } else {
        if (result >= 4){
            printf("El alumno esta aprobado con un %.2f\n", result);
        } else {
            printf("El alumno reprobo con un %.2f\n", result);
        }
    }

    return 0;
}