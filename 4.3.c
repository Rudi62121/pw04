#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    
    double val = 1.0;
    int count = 0;
    
    while (count++ < n) {
        printf("%.0f ", val);
        val *= 1000;
    }
    printf("\n");
    return 0;
}
