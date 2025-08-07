#include <stdio.h>

int main() {
    float cm;
    float metros;

    printf("Digite o valor em centímetros: ");
    scanf("%f", &cm);

    metros = cm / 100.0;

    printf("O valor em metros é: %.2f\n", metros);

    return 0;
}
