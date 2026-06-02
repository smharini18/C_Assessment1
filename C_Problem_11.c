// print sum of dig
#include <stdio.h>
int main()
{
 int n1,n2,n3,n4,n5;
    printf("enter the number:");
    scanf("%d",&n1);
    n2=(n1%10);
    n3=((n1/10)%10);
    n4=(n1/100);
    n5=n2+n3+n4;
    printf("%d",n5);
    return 0;
   
}
