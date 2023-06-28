#include <stdio.h>

int main(){
    int first_note, second_note, thirth_note;
    float average_note;

    printf("Ingrese la nota del primer examen : ");
    scanf("%d", &first_note);
    printf("Ingrese la nota del segundo examen : ");
    scanf("%d", &second_note);
    printf("Ingrese la nota del tercer examen : ");
    scanf("%d", &thirth_note);

    average_note = first_note + second_note + thirth_note;
    average_note = average_note / 3;
    printf("La nota final del alumno es de %.2f \n", average_note);

    if (average_note >= 7.00){
        printf("El alumno ha promocionado la materia\n");
    } else {
        printf("El alumno no llego a la nota minima de 7 para promocionar\n");
    }

    return 0;
}
