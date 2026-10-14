#include<stdio.h>
int main(){
char ch;
    printf("enter ch:");
    scanf("%c",&ch);

    if( ch=='a'|| ch=='e' || ch=='i'|| ch=='o' || ch=='u'){
        printf("this ch is a vowel");
    }
    else{
        printf("this ch is a constant");
    }
      return 0;
}
