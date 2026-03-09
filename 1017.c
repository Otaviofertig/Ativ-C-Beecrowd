#include <stdio.h>

int main() {
    int tempo, velocidade;
    scanf("%d %d", &tempo, &velocidade);
    printf("%.3lf\n", (tempo * velocidade) / 12.0);
    return 0;
}