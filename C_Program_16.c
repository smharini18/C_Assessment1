#include <stdio.h>
int main()
{
    int n1,n2,n5,n6,res,result;
    printf("Enter a number: ");
    scanf("%d", &n1);
    n2=(n1/100);
    n5=(n1%10)*10;
    n6=(n1/10)%10;
    res=n5+n6;
    result=(n2*100)+res;
    printf("%d",result);
    return 0;
}
