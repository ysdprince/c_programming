#include <stdio.h>

int main() {
    int adhar[5];

    // Input
    for (int i = 0; i < 5; i++) { // Loop should iterate from 0 to 4
        printf("%d index: ", i);
        scanf("%d", &adhar[i]);
    }

    // Output
    for (int i = 0; i < 5; i++) { // Loop should iterate from 0 to 4
        printf("%d index: %d\n", i, adhar[i]);
    }

    return 0;
}
