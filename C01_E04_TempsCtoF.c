#include<stdio.h> // define the header file  
/* print Fahr-Celsius table
 for fahr = 0,20 ...,300*/

void main()   // define the main function  
{  
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("%9s","Heading");
    printf("\n");
    while (celsius <= upper){
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%3.0f %6.1f\n", fahr, celsius); //string-format int, tab, string-format int, newline
        celsius = celsius + step;
    }

}  