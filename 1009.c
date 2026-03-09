#include <stdio.h>

int main() {
    char nome[100];
    double salario_fixo, vendas, total;
    
    // Lê a string (nome)
    scanf("%s", nome);
    // Lê os valores em dinheiro
    scanf("%lf", &salario_fixo);
    scanf("%lf", &vendas);
    
    total = salario_fixo + (vendas * 0.15);
    
    printf("TOTAL = R$ %.2lf\n", total);
    
    return 0;
}