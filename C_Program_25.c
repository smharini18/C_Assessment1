#include <stdio.h>
int main() {
    int n1,n2,n3,n4,x,y,z,n5;
    printf("enter the number:");
    scanf("%d",&n1);
    n2=(n1%10);
    n3=(n1/10)%10;
    n4=n1/100;
    x=n2+n3+n4;
    printf("sum %d\n",x);
    y=x%10;
    z=x/10;
    n5=y+z;
    n5 = (n5 % 10) + (n5 / 10);
    printf("%d",n5);
    return 0;
}
