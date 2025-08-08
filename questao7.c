#include <stdio.h>

void main()
{
	char produto[100];
	float preC'ounidade;
	int quantidade;

	printf("Digite o produto: ");
	scanf("%s", produto);

	printf("Digite o preC'o: ");
	scanf("%f", &preC'ounidade);

	printf("Digite o quantidade: ");
	scanf("%d", &quantidade);


	float total = preC'ounidade * quantidade;
	printf(" O total da compra C): %f", total);

}