/*WRITE A PROGRAM  TO CONVERT TEMPERATURE FROM CELCIUS TO FAHRENHIET*/

#include<stdio.h>
int main()
{
    float celcius,fahrenhiet;
    printf("enter temperature in celcius:");
    scanf("%f", &celcius);
    fahrenhiet = (9/5)*celcius + 32; 
    printf("THE TEMPERATURE IN FAHRENHIET IS:%f\n", fahrenhiet);
    return 0;
}