#include<stdio.h>
     int add_no (int a,int b){
        int sum;
        sum = a + b;
        return sum;

     }
    int main(){
        int a,b,add;
        scanf("%d",&a);
        scanf("%d",&b);
        add = add_no(a,b);
        printf("%d",add);

        return 0;
    }
