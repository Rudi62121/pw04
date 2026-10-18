#include <stdio.h>

double kb_to_mb(double kb) {
    const double coeff = 1024.0;
    return kb / coeff;
}

int main(void) {
    double value;
    
    while (scanf("%lf", &value) == 1) {
        double result = kb_to_mb(value);
        printf("%.2f\n", result);
    }
    
    return 0;
}
