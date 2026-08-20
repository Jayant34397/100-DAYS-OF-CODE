/*WRITE A PROGRAM TO CALCULATE SIMPLE AND COMPOUND INTEREST FOR GIVEN PRINCIPAL,RATE AND TIME*/
#include<stdio.h>

int main()
{
    float simple_interest, compound_interest;
    int time, rate, principal, p2, s1;

    printf("enter principal: ");
    scanf("%d", &principal);
    printf("enter rate: ");
    scanf("%d", &rate);
    printf("enter time: ");
    scanf("%d", &time);

    p2 = principal;

    simple_interest = (principal * rate * time) / 100.0;

    for (int i = 1; i <= time; i++)
    {
        s1 = (p2 * rate) / 100;
        p2 = p2 + s1;
    }
    compound_interest = p2 - principal;

    printf("simple interest is: %.2f\n", simple_interest);
    printf("compound interest is: %.2f\n", compound_interest);

    return 0;
}