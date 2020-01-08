#include <stdio.h>

int main() {
    int eletricidade;
    int valor_pagar;
    int valor_sem_iva;
    float const IVA = 0.18;
    int const potencia = 5.42;
    int const preco_kwh = 0.16;
    int consumo;

    printf("Consumo de Eletricidade: \n");
    scanf("%d", &consumo);

    valor_sem_iva = (potencia + (consumo * preco_kwh));
    valor_pagar = ((valor_sem_iva * IVA) + valor_sem_iva);
    printf("Valor a pagar: %d \n", valor_pagar);


}