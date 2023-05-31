#include <stdio.h>

int main(){
    int square_side, square_perimeter;

    printf("Ingrese el lado del cuadrado : ");
    scanf("%d", &square_side);

    square_perimeter = square_side * 4;
    printf("El perimetro del cuadrado es : %d\n", square_perimeter);

    return 0;
}
