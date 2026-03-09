#include <stdio.h>

int main() {
    int cod1, qtde1, cod2, qtde2;
    double preco1, preco2, total;
    
    // Lê a primeira linha
    scanf("%d %d %lf", &cod1, &qtde1, &preco1);
    // Lê a segunda linha
    scanf("%d %d %lf", &cod2, &qtde2, &preco2);
    
    total = (qtde1 * preco1) + (qtde2 * preco2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
    
    return 0;
}
