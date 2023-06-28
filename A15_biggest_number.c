#include <stdio.h>

int main(){
    int first_number, second_number, thirth_number, biggest_number;

    printf("Ingrese el primer numero : ");
    scanf("%d", &first_number);
    printf("Ingrese el segundo numero : ");
    scanf("%d", &second_number);
    printf("Ingrese el primer numero : ");
    scanf("%d", &thirth_number);

    biggest_number = first_number;

    if (second_number > first_number){
        biggest_number = second_number;

        if (thirth_number > second_number){
            biggest_number = thirth_number;
        }
    } else {
        if (thirth_number > first_number){
            biggest_number = thirth_number;
        }
    }

    printf("El numero mas grande es %d.\n", biggest_number);

    return 0;
}
