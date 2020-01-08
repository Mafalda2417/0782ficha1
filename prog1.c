#include <stdio.h>

int main() {
    int receitas;
    int despesas;
    int saldo;

    printf("Valor para as receitas: \n");
    scanf("%d", &receitas);
    printf("Valor para as despesas: \n");
    scanf("%d", &despesas);

    saldo = receitas - despesas;
     printf("Saldo: %d \n", saldo);

}