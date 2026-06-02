
#include <stdio.h>
int main()
{
    int n1,n2,n3,result;
    printf("Enter a number: ");
    scanf("%d", &n1);
    n2=(n1%10);
    n3=(n1/10);
   
    result=n2+n3;
    printf("%d",result);
    return 0;
}
