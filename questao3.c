#include <stdio.h>

int main() {
    int n1;
    int n2;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%d", &n1);

    printf("Digite a segunda nota: ");
    scanf("%d", &n2);

    media = (n1 + n2) / 2.0;

    printf("A média é: %.2f\n", media);

    return 0;
}
