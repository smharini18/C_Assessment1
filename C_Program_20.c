#include <stdio.h>
int main()
{
    int n1,n2,n3,n4,n5,n6,res;
    printf("Enter a number: ");
    scanf("%d", &n1);
    n2=(n1/100);
    n4=n1%10;
    n3=(n2*10)+(((n1/10)%10)*0);
    n5=n3*10;
    n6=n1%10;
    res=n5+n6;
    printf("%d",res);
    return 0;
}
