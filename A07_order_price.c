#include <stdio.h>

int main(){
    int quantity;
    float article_price, order_price;

    printf("Ingrese el precio del articulo : $ ");
    scanf("%f", &article_price);
    printf("Ingrese la cantidad de articulos a comprar : ");
    scanf("%d", &quantity);

    order_price = article_price * quantity;
    printf("El precio total es de : $ %.2f\n", order_price);

    return 0;
}
