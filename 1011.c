#include <stdio.h>

int main() {
    double R, volume;
    
    scanf("%lf", &R);
    
    // R * R * R é o mesmo que R³
    volume = (4.0/3.0) * 3.14159 * R * R * R;
    
    printf("VOLUME = %.3lf\n", volume);
    
    return 0;
}