#include <stdio.h>

void main() {
    unsigned long num = 111260283;
    short K = 0;

    int var41 = (num % 30) + 1;
    int var42 = ((num + (K + 7)) % 30) + 1;
    int var43 = ((num + (K + 13)) % 30) + 1;
    int var44 = ((num + (K + 19)) % 30) + 1;
    int var45 = ((num + (K + 23)) % 30) + 1;

    printf("variant 4.1: %d\nvariant 4.2: %d\nvariant 4.3: %d\nvariant 4.4: %d\nvariant 4.5: %d\n", var41, var42, var43, var44, var45);
}