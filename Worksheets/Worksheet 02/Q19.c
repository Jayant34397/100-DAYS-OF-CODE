/*Write a C program to read withdrawal amount (multiple of 100) and balance. If amount balance, deduct and print new balance. 
Otherwise print InsuAicient funds. Also reject amounts not divisible by 100.*/

#include<stdio.h>
int main(){ 
    int withdrawal_amount, balance;
    printf("Enter withdrawal amount (multiple of 100): ");
    scanf("%d", &withdrawal_amount);
    printf("Enter current balance: ");
    scanf("%d", &balance);

    if(withdrawal_amount % 100 != 0){
        printf("Withdrawal amount must be a multiple of 100.\n");
    }
    else if(withdrawal_amount > balance){
        printf("Insufficient funds.\n");
    }
    else{
        balance -= withdrawal_amount;
        printf("Withdrawal successful. New balance: %d\n", balance);
    }

    return 0;
}