#include<stdio.h> // define the header file  
/* print Fahr-Celsius table
 for fahr = 0,20 ...,300*/


#define LOWER 0
#define UPPER 300
#define STEP 20

void main()   // define the main function  
{  
    int fahr;

    printf("%9s","Heading");
    printf("\n");

    for (fahr=LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3.0f %6.1f\n", fahr, (fahr - 32) * (5.0/9.0)); 
    }

}  