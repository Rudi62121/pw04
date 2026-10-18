#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint16_t u, i;
    scanf("%hu %hu", &u, &i);
    
    float res = (float)u / i;
    printf("%f\n", res);
    
    printf("%llu\n", (unsigned long long)sizeof(u));
    printf("%llu\n", (unsigned long long)sizeof(i));
    printf("%llu\n", (unsigned long long)sizeof(res));
    
    return 0;
}
