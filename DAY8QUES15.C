/* WRITE A PROGRAM TO INPUT A CHARACTER AND CHECK WHETHER IT IS AN UPPERCASE ALPHABET,LOWERCASE ALPHABET,DIGIT,OR SPECIAL CHARACTER */

#include<stdio.h>
int main(){
char ch;

printf("enter ch :");
scanf("%d",&ch);

if(ch >='a' && ch<='z') {
    printf("LOWERCASE ALPHABET" );
}
else if(ch>='A' && ch<='Z')
{
    printf("UPPERCASE ALPHABET");
}
else if( ch>='0' && ch<='9')
{
    printf("DIGIT");
}
else
{
    printf("SPECIAL CHARACTER");
}

    return 0;
}