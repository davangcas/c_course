#include <stdio.h>

int main(){
    int first_number, second_number;

    printf("Ingrese el primer numero : ");
    scanf("%d", &first_number);
    printf("Ingrese el segundo numero : ");
    scanf("%d", &second_number);

    if (first_number > second_number){
        printf("%d es mayor a %d\n", first_number, second_number);
    } else {
        if (second_number > first_number){
            printf("%d es mayor a %d\n", second_number, first_number);
        } else {
            printf("Ambos numero son iguales.\n");
        }
    }
    return 0;
}
