// C code to check if a number is rational or not
#include <stdio.h>

int isRational(double num) {
    // Check if the fractional part is zero
    if (num - (int)num == 0.0) {
        printf("%lf is a rational number.\n", num);
        return 1;
    } else {
        printf("%lf is not a rational number.\n", num);
        return 0;
    }
}

int main() {
    double number;
    
    // Input the number
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Check if the number is rational
    isRational(number);

    return 0;
}
