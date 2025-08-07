#include <stdio.h>

int main() {
   int ano_nascimento, ano_atual, idade;
   
   printf("digite o ano que vc nasceu");
   scanf("%d",&ano_nascimento);
   
   printf("digite o ano");
   scanf("%d",&ano_atual);
   
   idade = ano_atual - ano_nascimento;
   
   printf("Sua idade é %d", idade);
}
