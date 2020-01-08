#include <stdio.h>

int main() {
    int salario;
    int sub_alimentacao;
    int descontos;
    int salario_liquido;

    printf("Salário: \n");
    scanf("%d", &salario);
    printf("Subsidio de Alimentação: \n");
    scanf("%d", &sub_alimentacao);
    printf("Descontos: \n");
    scanf("%d", &descontos);

    salario_liquido = ((salario + sub_alimentacao) - descontos);

    printf("Salário liquido:%d \n", salario_liquido);
}