#include <stdio.h>
int main()
{
    int a,b;
    printf("enter two integers");
    scanf("%d %d",&a,&b);

    printf("a>5 && b>5=%d\n", a > 5 && b > 5);
    printf("a>5 || b>5=%d\n", a > 5 || b > 5);

    return 0;
}