#include <stdio.h>

int main(){
    int square_side;
    float square_surface;

    printf("Ingrese la medida de un lado del cuadrado : ");
    scanf("%d", &square_side);

    square_surface = square_side * square_side;
    printf("La superficie del cuadrado es de %.2f unidades cuadradas.\n", square_surface);

    return 0;
}
