/*Write a C program to read units consumed. Calculate bill: First 50 units: 3/unit Next 100 units: 5/unit Above 150 units: 
8/unit Add a flat 50 surcharge and print the total bill.*/

#include<stdio.h>
int main(){         
    
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if(units <= 50){
        bill = units * 3;
    }
    else if(units <= 150){
        bill = (50 * 3) + ((units - 50) * 5);
    }
    else{
        bill = (50 * 3) + (100 * 5) + ((units - 150) * 8);
    }

    bill += 50; // Adding flat surcharge
    printf("Total bill: %.2f\n", bill);

    return 0;
}