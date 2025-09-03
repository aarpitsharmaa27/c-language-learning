#include <stdio.h>

int main() { 

    // variable = A reusable container for a value
    //            Behaves as if it were the value it contain.
    char name[] = "Arpit Sharma" ;                 // char for string
    int age = 22 ;                          // int for numbers
    float weight=55.22;                     // float is for decimals numbers
    double pi = 3.141593264871646589;       // with double we can store more than 12 digits after decimal.
    
    printf("My name is  %s \n ", name);
    printf("I am %d year old \n ", age);
    printf("My weight is %f \n", weight);       // we use .2 because we want to display only 2 digits after decimal
    printf("The value of pi is %.2f \n", pi);
    printf("The value of pi is %.10lf ", pi);
    


    return 0 ;
}
