#include <stdio.h>

int main() {
    
    // check
    float gpa = 3.76;
    float price = 500.99;
    float temperature = -6.5;
    double pi = 3.14159265358979;

    printf("Your gpa is: %.2f\n", gpa);
    printf("The item you bought would cost you: N%.2f\n", price);
    printf("It is currently %.1fC degrees outside\n", temperature);
    printf("The of pi is %.14lf", pi);

    return 0;
}