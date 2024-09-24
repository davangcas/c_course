#include <stdio.h>

void multiply_homogeneous_matrix(double a[4][4], double b[4][4], double result[4][4]);

int main(){
    double a[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    double b[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    double result[4][4];

    multiply_homogeneous_matrix(a, b, result);

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%f ", result[i][j]);
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