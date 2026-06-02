//rev 3 digit
#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, rev;

    printf("Enter a 3-digit number: ");
    scanf("%d", &n1);

    n2 = n1 / 100;        
    n3 = (n1 / 10) % 10;
    n4 = n1 % 10;          

    rev = n4 * 100 + n3 * 10 + n2;

    printf("Reversed number = %d", rev);

    return 0;
}
