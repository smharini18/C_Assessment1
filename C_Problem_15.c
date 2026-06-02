#include <stdio.h>

int main() {
    int n1, first, last1, last2, result;

    printf("Enter a 4-digit number: ");
    scanf("%d", &n1);

    first = n1 / 100;
    last1 = (n1 / 10) % 10;
    last2 = n1 % 10;

    result = first * 100 + last2 * 10 + last1;

    printf("%d", result);

    return 0;
}
