#include <stdio.h>
int main()
{
    int n;
retake:
    scanf("%d", &n);
    if (n < 1)
    {
        goto retake;
    }
    return 0;
}