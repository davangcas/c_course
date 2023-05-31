#include <stdio.h>

int main(){
    int working_hours;
    float cost_per_hour;
    float salary;

    printf("Ingrese las horas trabajadas por el empleado : ");
    scanf("%d", &working_hours);
    printf("Ingrese el costo por hora : $ ");
    scanf("%f", &cost_per_hour);

    salary = cost_per_hour * working_hours;
    printf("El salario correspondiente es de : $ %.2f \n", salary);

    return 0;
}
