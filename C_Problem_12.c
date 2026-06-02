// print reverse
#include <stdio.h>

int main() {
    int n1,n2,n3,n4;
    printf("enter the number:");
    scanf("%d",&n1);
    n2=n1/10;
    n3=n1%10;
    n4=n3*10+n2;
    printf("%d",n4);
    return 0;
}
