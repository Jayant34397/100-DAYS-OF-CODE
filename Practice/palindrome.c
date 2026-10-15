#include<stdio.h>
int main(){
    int n,reversed_no=0,original_no,rem;
    printf("enter n:");
    scanf("%d",&n);
    original_no=n;
    while(n!=0){
        rem=n%10;
        reversed_no=reversed_no * 10 + rem;
        n = n/10;
    }
    if(original_no == reversed_no){
        printf("it is a palindrome");
    }
    else{
        printf("not a palindrome");
    }
    return 0;
}