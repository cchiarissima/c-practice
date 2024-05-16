// palindrome.c
// Test if a 5-digit number is palindrome

#include <stdio.h>

int main() {
    int number;

    printf("Enter a 5-digit number: ");
    scanf("%d", &number);    
    
    int first = (number % 100000) / 10000;
    int second = (number % 10000) / 1000;
    int secondToLast = (number % 100) / 10;
    int last = number % 10;
    
    //printf("You entered: %d\nFirst digit: %d\nSecond digit: %d\nSecond-to-last digit: %d\nLast digit: %d", number, first, second, secondToLast, last);

    if (first == last && second == secondToLast) {
        printf("The number %d is palindrome\n", number);
    } // end if
    else {
        printf("The number %d is NOT palindrome\n", number);
    } // end else

} // end function main