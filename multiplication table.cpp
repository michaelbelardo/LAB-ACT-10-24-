#include <stdio.h>

int main() {
    int number;
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &number);

    for (int i = 1; i <= 110; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}