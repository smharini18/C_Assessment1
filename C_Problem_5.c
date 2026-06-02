// div by 8
#include <stdio.h>

int main() {
    int n1,n2,n3;
    printf("enter the number:");
    scanf("%d",&n1);
    n2=n1 % 8;
    printf("remainder is %d",n2);
    return 0;
}
