// print ten's digit as 1
#include <stdio.h>

int main() {
    int n1,n2,n3;
    printf("enter the number:");
    scanf("%d",&n1);
    n2=(n1%10);
    n3=n2+10;
    printf("%d",n3);
    return 0;
}
