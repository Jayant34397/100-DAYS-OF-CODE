#include<stdio.h>
int main(){
 float temperature;

 printf("enter temperature:");
 scanf("%f",&temperature);

    if(temperature > 40){
        printf("temperature is hot");
    }
else if(temperature > 20 && temperature < 40){
    printf("temperature is moderate");
}
else if(temperature < 20 ){
    printf("temperature is cold");
}

    return 0;
}