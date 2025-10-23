#include <stdio.h>

int main() {
    int n = 1;
    while (n <= 512) {
        printf("%d\n", n);
        n *= 2;  // Multiply by 2 each time
    }
    return 0;
}