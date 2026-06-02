#include <stdio.h>

int main() {
    int n1,n2,n3,n4,x,res;
    printf("enter the number:");
    scanf("%d",&n1);
    n2=(n1%10);
    n3=n1/10;
    n4=n2+n3;
    x=n4%2;
    res=n1-(5*x);
    printf("%d",res);
    return 0;
}
