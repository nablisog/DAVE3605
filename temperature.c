#include <stdio.h>

int main(void){

    float celsius,fahrenheit;
    printf("Enter temperature in Celsius \n ");
    scanf("%f", &celsius);
    //calculate fahrenheit
    fahrenheit = (celsius * 9/5)+ 32;
    printf("%.1f degree Celsius is equal to %.1f degree Fahrenheit \n ", celsius , fahrenheit);





    printf("Enter temperature in Fahrenheit \n ");
    scanf("%f", &fahrenheit);
    //calculate Celsius
    celsius = (fahrenheit - 32) * 5/9;
    printf("%.1f degree Fahrenheit is equal to %.1f degree Celsius \n ", fahrenheit, celsius);

    return 0;
}
