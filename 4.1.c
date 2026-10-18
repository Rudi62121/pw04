#include <stdio.h>

#define COEFF 1000

int main(void) {
    int base_val = 1;
    
    while (base_val > 0) {
        scanf("%d", &base_val);
        while (base_val > 0) {
            int senior = base_val / COEFF;
            int junior = base_val % COEFF;
            printf("%d MPa %d kPa\n", senior, junior);
            base_val = 0;
        }
    }
    return 0;
}
