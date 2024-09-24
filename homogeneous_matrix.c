#include <stdio.h>

void multiply_homogeneous_matrix(double a[4][4], double b[4][4], double result[4][4]);

int main(){
    double a[4][4] = {
        {0, -1, 0, 0},
        {1, 0, 0, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 1}
    };

    double b[4][4] = {
        {1, 0, 0, 5},
        {0, 1, 0, 5},
        {0, 0, 1, 10},
        {0, 0, 0, 1}
    };

    double result[4][4];

    multiply_homogeneous_matrix(a, b, result);

    for (int i = 0; i < 4; i++){
        printf("{");
        for (int j = 0; j < 4; j++){
            printf("%.2f", result[i][j]);

            if (j < 3){
                printf(", ");
            }
        }
        printf("}");

        if (i < 3){
            printf(",");
        }

        printf("\n");
    }
    return 0;
}

void multiply_homogeneous_matrix(double a[4][4], double b[4][4], double result[4][4]){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            result[i][j] = 0;
            for (int k = 0; k < 4; k++){
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}