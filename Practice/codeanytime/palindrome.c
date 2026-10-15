#include<stdio.h>
int main(){
    int n,rem, original_no,reverse_no = 0;
    printf("enter n:");
    scanf("%d",&n);
    original_no = n;
    while(n>0){
        rem=n%10;
        reverse_no = reverse_no * 10 + rem;
        n = n/10; 
    }
    if(original_no == reverse_no){
        printf("its a palindrome");
    }
    else{
        printf("not a palindrome");
    }
    return 0;
} 