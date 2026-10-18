#include <stdio.h>

int main(void) {
    int number;
    scanf("%d", &number);
    
    double sum = 0.0;
    
    while (number > 0) {
        int digit = number % 10;
        sum += digit * 1000.0;
        number /= 10;
    }
    
    printf("%f\n", sum);
    return 0;
}
