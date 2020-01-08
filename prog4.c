#include <stdio.h>

int main() {
    char nome;
    int nota_1teste;
    int nota_2teste;
    int nota_3teste;
    int media_ponderada;

    printf("Nome: \n");
    scanf("%s", &nome);
    printf("1 teste: \n");
    scanf("%d", &nota_1teste);
    printf("2 teste: \n");
    scanf("%d", &nota_2teste);
    printf("3 teste: \n");
    scanf("%d", &nota_3teste);

    media_ponderada = (((nota_1teste * 0.25) + (nota_2teste * 0.35) + (nota_3teste * 0.4)));
    
    printf("Media ponderada: %d \n", media_ponderada);



}