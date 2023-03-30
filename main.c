#include <stdio.h>

int main() {
    double valores[20];
    double max = 0, min = 0;

    // Leitura e armazenamento dos 20 valores
    for (int i = 0; i < 20; i++) {
        printf("Digite o %do valor: ", i+1);
        scanf("%lf", &valores[i]);
    }

    // Encontra o valor máximo e mínimo
    max = valores[0];
    min = valores[0];
    for (int i = 1; i < 20; i++) {
        if (valores[i] > max) {
            max = valores[i];
        }
        if (valores[i] < min) {
            min = valores[i];
        }
    }

    // Imprime os resultados
    printf("Valor máximo: %lf\n", max);
    printf("Valor mínimo: %lf\n", min);

    return 0;
}
